#include <iostream>

using namespace std; 

class Vignere {
   public:
      void setKeyWord(string k) { this->keyWord = k; }; 
      string getKeyWord(void) { return keyWord; };

      void setPlainText(string p) { this->plainText = p; };
      string getPlainText(void) { return plainText; };

      void setCipherText(string c) { this->cipherText = c; };
      string getCipherText(void) { return cipherText; };

      static const int alphabetLength = 26;
      static const int alphabetStart = 65;
      static const int alphabetEnd = 90;

      Vignere();  // This is the constructor

      void menu(void);
      void encrypt(void);
      void decrypt(void);
      int getLetterValue(char);
      void extendKeyWord(bool);
      string trim(string);
      string strUpper(string);

   private:
      string keyWord;
      string plainText;
      string cipherText;
};
 
// Member functions definitions including constructor
Vignere::Vignere(void) {
   cout << "Creating Vignere class...\n" << endl;
   cout << "Calling Vignere::menu...\n" << endl;
   menu();
}

/************************************************
* Vignere encryption function
* Calculation:
* alphabetStart + plainTextShift + keyWordShift
* If result > end of alphabet
*     subtract 26
* Done.
************************************************/
void Vignere::encrypt() {
  cout << "\nEncrypting...\n\n";
  cout << "Plaintext: " <<  this->plainText <<endl;
  
  // Reset cipher text
  this->cipherText = "";

  // Declarations
  int keyWordShift = 0;
  int plainTextShift = 0;
  int letterResult = 0;

  // Check keyword length
  if (this->keyWord.length() < this->plainText.length()) {

    // Extend keyword if not long enough
    extendKeyWord(true);
    cout << "Keystream: " << this->keyWord << endl;
  }

  // Loop through each letter of plainText
  for (int i = 0; i < this->plainText.length(); i++) {

    // Get letter values for each letter
    keyWordShift = getLetterValue(keyWord[i]);
    plainTextShift = getLetterValue(plainText[i]);

    // Encrypt letter
    letterResult = (alphabetStart + plainTextShift + keyWordShift);
    
    // Rotate alphabet if it extends past
    if (letterResult > alphabetEnd)
      letterResult -= alphabetLength;

    // Output
    this->cipherText += (char)letterResult;
  }

  cout << ">>>Ciphertext: " << this->cipherText <<" <<<\n\n\n" <<"Returning to menu...\n"<< endl;
}

/************************************************
* Vignere decryption function
* Calculation:
* alphabetStart + cipherTextShift - keyWordShift
* If result < start of alphabet
*     Add 26
* Done.
************************************************/
void Vignere::decrypt() {

  cout << "\nDecrypting...\n\n";
  cout << "Ciphertext: " <<  this->cipherText <<endl;

  // Reset plain text
  this->plainText = "";

  // Declarations
  int keyWordShift = 0;
  int cipherTextShift = 0;
  int letterResult = 0;

  // Check keyword length
  if (this->keyWord.length() < this->cipherText.length()) {

    // Extend keyword length if not long enough
    extendKeyWord(false);
    cout << "Keystream: " << this->keyWord << endl;
  }

  // Loop through each letter of cipher text
  for (int i = 0; i < this->cipherText.length(); i++) {

    keyWordShift = getLetterValue(keyWord[i]);
    cipherTextShift = getLetterValue(cipherText[i]);

    // Decryption
    letterResult = (alphabetStart + cipherTextShift - keyWordShift);

    // Rotate alphabet if it extends past
    if (letterResult < alphabetStart)
      letterResult += alphabetLength;
    
    // Output result
    this->plainText += (char)(letterResult);
  }
  cout << ">>>Deciphered Text: " << this->plainText <<" <<<\n\n\n" <<"Returning to menu...\n"<< endl;
}

//VignereMenu Called by 
void Vignere::menu(void) {
  bool keepGoing = true;
  int choice;
  string input;

  //initialize keyword
  cout << "Welcome! Please enter a Keyword: ";
  cin >> input;
  this->setKeyWord(input);
  cout << "\nKeyword set to: " << this->getKeyWord() << endl << endl;
 
  //This is our menu choices
  do {
      //This is our menu 
    std::cout << "Please select an option:\n";
    std::cout << "1) Change Keyword\n" << "   >>Current Key: " << this->keyWord << endl;
    std::cout << "2) Encrypt\n";
    std::cout << "3) Decrypt\n";
    std::cout << "4) Exit\n>>";

    cout << "Enter Option: ";
    cin >> choice;
    cout << endl;

    switch (choice){
      case 1: //KEYWORD
        cout << "Please enter a Keyword: ";
        cin.ignore();
        getline(cin, input);
        this->setKeyWord(strUpper(trim(input)));
        cout << "\nKeyword set to: " << this->getKeyWord() << endl << endl;
        break;

      case 2: //ENCRYPT
        cout << "\n********ENCRYPTION********\n";
        cout << "Please enter plaintext to be encrypted: ";
        cin.ignore();
        getline(cin, input);
        this->setPlainText(strUpper(trim(input)));

          //These lines are just placeholders to ensure input is being turned into plaintext
        //cout << "Passed your plaintext, " << this->getPlainText() << ", to get encrypted..." << endl;
        this->encrypt();

        break;

      case 3: //DECRYPT
        cout << "\n********DECRYPTION********\n";
        cout << "Please enter ciphertext to be decrypted: ";
        cin.ignore();
        getline(cin, input);
        this->setCipherText(strUpper(input));
   
          //These lines are just placeholders to ensure input is being turned into ciphertext
        //cout << "Passed your ciphertext, " << this->getCipherText() << ", to get decrypted..." << endl; 
        this->decrypt();
        break;

      case 4:
        cout << "Exiting program...\n";
        keepGoing = false;
        break;
      
      default:
        cout << "\nInvalid Option! Please try again.\n" << endl;
        break;
    }
  } while (keepGoing == true);
}

// Main function for the program
int main() {
    //intro
  std::cout << "CIS-7 Class Project, Fall 2018\n";
  std::cout << "Coded by Randy Son and Devan Vegiga\n\n\n";
  std::cout << "This program demonstrates Vignere Encryption and Decryption!\n\n\n";

  //Call menu
  Vignere v;

  return 0;
}

int Vignere::getLetterValue(char letter) {
  int letterValue = (letter - 'A'); // A starts at 0
  return letterValue;
} 

//Extend Keyword when Plaintext exceeds key length
void Vignere::extendKeyWord(bool plainText) {
  if (plainText) {
    char newKey[this->plainText.length()] = "";
    //cout << "Plaintext length: " << this->plainText.length() << endl;
    //cout << "Keyword length: " << this->keyWord.length() << endl;
    for (int i = 0, j = 0; i < this->plainText.length(); i++, j++) {
      if (j == this->keyWord.length()) {
        j = 0;
      }
      newKey[i] = this->keyWord[j];
    }
    newKey[this->plainText.length()] = '\0';
    this->keyWord = newKey;
  } else {
    char newKey[this->cipherText.length()] = "";
    //cout << "Cipher text length: " << this->cipherText.length() << endl;
    //cout << "Keyword length: " << this->keyWord.length() << endl;
    for (int i = 0, j = 0; i < this->cipherText.length(); i++, j++) {
      if (j == this->keyWord.length()) {
        j = 0;
      }
      newKey[i] = this->keyWord[j];
    }
    newKey[this->cipherText.length()] = '\0';
    this->keyWord = newKey;
  }
}

string Vignere::trim(string s) {
  return s.erase(s.find_last_not_of(" \n\r\t")+1);
}

string Vignere::strUpper(string s) {
  string output, tmp = "";

  for (int i = 0; i < s.length(); i++) {
    tmp = toupper(s[i]);
    output += tmp;
  }

  return output;
}