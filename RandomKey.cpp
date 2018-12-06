#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
 
using namespace std;

//RANDOM LETTER FUNCTION
string salt(int keyLen) {
  int i,n;
  char c;

  srand(time(NULL)); // initialize the random number generator
  string init = "";

  for (i=0; i < keyLen; i++) {
    n = rand() % 26;
    c = (char)(n+65);

    //convert int to string
    init += c;
    }
    //pass back string
  return init;
}
 
int main(){

    char key[] = "";


    cout << " Please enter a keyword: ";

    cin >> key;
    
    int keyLen = strlen(key);
    
    cout<<"\nkeyLen: "<<keyLen <<endl;
    
    cout <<"\nKEY is: " << salt(keyLen);
    
 
    return 0;
}