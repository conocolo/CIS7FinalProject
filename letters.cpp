#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 

//RANDOM LETTER FUNCTION
string salt(int num) {
  int i,n;
  char c;

  srand(time(NULL)); // initialize the random number generator
  string init = "";

  for (i=0; i < num; i++) {
    n = rand() % 26;
    c = (char)(n+65);
    init += c;
    }
  return init;
}

//MAIN DRIVER FUNCTION
int main() {
  int num;

  cout << "How many letters would you like?: ";
  cin >> num;

  //call function
  cout << salt(num);
  return 0;
}