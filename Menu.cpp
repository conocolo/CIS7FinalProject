#include <iostream>

using namespace std; 

int menu (int choice) { 
  do {
    switch (choice){
      case 1:
        cout << "I want to set my key\n";
        break;

      case 2:
        cout << "I want to Encrypt\n";
        break;

      case 3: 
        cout << "I want to Decrypt\n";
        break;

      case 4:
        cout << "I want to exit\n";
        break;
      
      default:
        cout << "Invalid Answer! Please try again.";
    }
  } while (choice <=0 || choice > 4);
  return choice;
}

//DRIVER FUNCTION
int main() {
  int choice;
  std::cout << "This program demonstrates Vignere Encryption and Decryption!\n";
  std::cout << "Please select an option:\n";
  std::cout << "1) Set Keyword\n";
  std::cout << "2) Encrypt\n";
  std::cout << "3) Decrypt\n";
  std::cout << "4) Exit\n>>";


  //Main Menu User Input Here
  std::cin >> choice;
  choice = menu(choice);
}