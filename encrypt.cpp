#include <iostream>
#include <vector>
#include <queue>

using namespace std;

char encrypt(int, int);

int main() {
  queue<char> alphabet;
  // Create an array of chars that contain the alphabet
  vector<char> str;
  // A starts at 65
  // Z ends at 90
  for (int i = 65; i <= 90; i++) {
    // cout << char(i) << endl;
    str.push_back(char(i));
  }

  //encrypt(2, 1);

}

void encrypt(int shift, int keyShift) {
  queue<char> alphabet;

  // Generate the alphabet
  for (int i = 65; i <= 90; i++) {
    cout << char((i + shift) % 65 + 65) << endl;
    alphabet.push(char((i + shift) % 91));
  }
  
  /*for (int i = 1; i <= keyShift; i++) {
    alphabet.pop();
  }
  cout << alphabet.front() << endl;*/
}