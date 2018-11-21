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

      Vignere();  // This is the constructor

      void menu(void);
      void encrypt(void);
      void decrypt(void);
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

void Vignere::encrypt() {
// Do whatever things here

  this->cipherText = "whatever";
}

void Vignere::decrypt() {
// Do whatever things here

  this->cipherText = "whatever";
}

//VignereMenu Called by 
void Vignere::menu(void) {
  bool keepGoing = true;
  int choice;
  string input;
 

  //This is our menu choices
  do {
      //This is our menu 
    std::cout << "Please select an option:\n";
    std::cout << "1) Set Keyword\n";
    std::cout << "2) Encrypt\n";
    std::cout << "3) Decrypt\n";
    std::cout << "4) Exit\n>>";

    cout << "Enter Option: ";
    cin >> choice;
    cout << endl;

    switch (choice){
      case 1: //KEYWORD
        cout << "Please enter a Keyword: ";
        cin >> input;
        this->setKeyWord(input);
        cout << "\nKeyword set to: " << this->getKeyWord() << endl << endl;
        

        break;

      case 2: //ENCRYPT
        cout << "Please enter plaintext to be encryted: ";
        cin >> input;
        this->setPlainText(input);

          //These lines are just placeholders to ensure input is being turned into plaintext
        cout << "Passed your plaintext, " << this->getPlainText() << ", to get encrypted..." << endl; 

        break;

      case 3: //DECRYPT
        cout << "Please enter ciphertext to be decrypted: ";
        cin >> input;
        this->setCipherText(input);
          
          
          //These lines are just placeholders to ensure input is being turned into ciphertext
        cout << "Passed your ciphertext, " << this->getCipherText() << ", to get decrypted..." << endl; 
        break;

      case 4:
        //GET THE FUCK OUT
        cout << "Exiting program...\n";
        keepGoing = false;
        
        break;
      
      default:
        cout << "\nInvalid Option! Please try again.\n" << endl;
        break;
    }
  } while (keepGoing = true);
}

// Main function for the program
int main() {
  std::cout << "This program demonstrates Vignere Encryption and Decryption!\n";
  Vignere v;
  // set line length
  /*v.setKeyWord("hahfdfaahahaha"); 
  cout << "Setting keyword to: " << v.getKeyWord() <<endl;*/
  return 0;
}
