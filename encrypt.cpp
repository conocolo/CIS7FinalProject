#include <iostream>
#include <vector>

using namespace std;

void encrypt(int, string);
void print(vector<char>&);
int getLetterValue(string);

int main() {
  vector<char> str;
  // A starts at 65
  // Z ends at 90
  for (int i = 65; i <= 90; i++) {
    // cout << char(i) << endl;
    str.push_back(char(i));
    //cout << char(i) << endl;
  }

  encrypt(6, "K");
}

/*void encryptLoop(string plainText, string keyWord) {
  int plainTextLength = plainText.size();
  int keyWordLength = keyWord.size();
  // Check that keyword is at least as long as plain text
  if (plainTextLength < keyWordLength) {

  }
  // Container for our alphabet
  vector<char> alphabet;

  // Generate the alphabet that is shifted 
  for (int i = 65 + shift; i < 91 + shift; i++) {
    // If we pass the letter 'Z', start over
    if ((i % 91) < 65) {
      //cout << char((i % 91) + 65) << endl;
      alphabet.push_back(char((i % 91) + 65));
    }
    // Push back into our array like normal
    else {
      //cout << char(i) << endl;
      alphabet.push_back(char(i));
    }
  }
}

// Function to extend keyword if it is not as long as plainText
string extendKeyWord(string keyWord, int plainTextLength) {
  // Declare empty container for output
  string extendedKeyWord = "";
  for (int i = 0; i < plainTextLength; i++) {
    for (int j = 0; i < keyWord.size(); j++) {

    }
  }
}*/
void encrypt(int shift, string letter) {
  // Container for our alphabet
  vector<char> alphabet;

  // Generate the alphabet that is shifted 
  for (int i = 65 + shift; i < 91 + shift; i++) {
    // If we pass the letter 'Z', start over
    if ((i % 91) < 65) {
      //cout << char((i % 91) + 65) << endl;
      alphabet.push_back(char((i % 91) + 65));
    }
    // Push back into our array like normal
    else {
      //cout << char(i) << endl;
      alphabet.push_back(char(i));
    }
  }

  // Output alphabet to test
  print(alphabet);

  //
  cout << "\nEncrypted letter: " << alphabet[getLetterValue(letter)] << endl;
}

int getLetterValue(string letter) {
  int letterValue = (letter[0] - 'A');
  return letterValue;
} 

void print(vector<char> &az) {
  // Iterate through vector and print out value
  for (vector<char>::iterator it = az.begin(); it != az.end(); it++) {
    cout << *it << " ";
  }
}