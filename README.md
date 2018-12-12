# CIS Final Project (Fall 2018)

For our final project, we chose to tackle Case No. 3, The Vignere Cipher. The **Vigenère cipher** is a method of encrypting alphabetic text by using a series of interwoven Caesar ciphers, based on the letters of a keyword. It is a form of *polyalphabetic* substitution. Our program takes plaintext and a keyword from the user and utilizes the Vigenere cipher to produce ciphertext. Users also have the option to decrypt ciphertext that was encrypted using the Vignere cipher. Our program is written in C++ and took about 1 week to complete.

## Getting Started

You will need a web-based IDE such as [repl](https://repl.it/) or [cpp.sh](cpp.sh). Copy the contents of "Case_3_VignereCipher_FSM_FINAL_VERSION.cpp" into the IDE and compile.

Alternatively you can clone this repository using [Git](https://git-scm.com/) and run the "Case_3_VignereCipher_FSM_FINAL_VERSION.cpp" found in the master branch using a compiler of choice. We used [MinGW](https://sourceforge.net/projects/mingw-w64/) and the *g++* command.

```
git clone https://github.com/conocolo/CIS7FinalProject/
cd /User/User/Documents/GitHub/CIS7FinalProject/

dir

g++ Project.final_version.cpp
```

## Runnning The Program

The menu is pretty straight forward. It will ask for a keyword and input a keyword of choice. 

```
CIS-7 Class Project, Fall 2018
Coded by Randy Son and Devan Vegiga


This program demonstrates Vignere Encryption and Decryption!


Creating Vignere class...
Calling Vignere::menu...

Welcome! Please enter a Keyword: PANDA

Keyword set to: PANDA
```

After entering you keyword, it will be stored and used throughout the program until changed. Press **1** to change the KEYWORD. The menu is programmed to display the current keyword.

```
Please select an option:
1) Change Keyword
   >>Current Key: PANDA
2) Encrypt
3) Decrypt
4) Exit
>>Enter Option:  
```
With your keyword set, you are ready to encrypt or decrypt. Select **2** for Encryption or **3** for decryption. After entering your plaintext (or ciphertext when decrypting) the program will produce the corresponding result. 

```
Please select an option:
1) Change Keyword
   >>Current Key: PANDA
2) Encrypt
3) Decrypt
4) Exit
>>Enter Option: 2


********ENCRYPTION********
Please enter plaintext to be encrypted: flyingspaghettimonster

Encrypting...

Plaintext: FLYINGSPAGHETTIMONSTER
Keystream: PANDAPANDAPANDAPANDAPA
>>>Ciphertext: ULLLNVSCDGWEGWIBOAVTTR <<<


Returning to menu...
```

The program will continue until the user presses **4** to exit. 

```
Please select an option:
1) Change Keyword
   >>Current Key: PANDA
2) Encrypt
3) Decrypt
4) Exit
>>Enter Option: 4

Exiting program...

```
## Documentation

*By Devan V.*

On Day 1 of the project Randy and I reviewed the cases and immediately had our eyes set on Case 3: The Vignere Cipher. I wanted to tackle the encryption algorithm and have it operate like the Enigma Machine, an encryption machine used by Nazi Germany during World War II. We scrapped that idea and ended up formulating our encryption/decryption based off the [IMAGE](https://www.geeksforgeeks.org/wp-content/uploads/Vigen%C3%A8re_square_shading.png) shown in the rubric. 

During our first meeting, we composed our psuedocode on a piece of paper. We wanted to incorporate a menu based command-line interface and have it loop until the user stops the program. That way the user is not constantly starting up the program. Our menu would include options for both encryption and decryption. Randy got to work on coding the encryption algoritm and I began the writing the menu. I based the menu off a another project I wrote in the Python Language. From there everything came to place with every iteration of work. We got the encryption and decryption algorithms working within the program. All that was left was some housekeeping where we tidied up our menu to make it flow better and cleaned up the code. I then went on to type up the documentation. 

We had ideas of creating a "more secure" encryption algoritm shown below: 

* Salting the keystream with random letters 
* Creating keystreams of random characters based off the length of a key
* Complex input validation

These functions never made it into the final program. However, you can find the code we toyed around with in the "Master" branch of this repository. 

### GitHub Repository

This repository was created by Randy. Randy has prior knowledge with GitHub and taught me what I know. I was able to create branches and upload my submissions via a Command-Line intereface. He also taught me how to create the README.md file you're reading right now!

### Closing Thoughts

All and all this project was a success. We were able to solve our case and produce (what I feel is) an above average program. This was a great expereience and we look forward to projects to come!

### Known Issues

While our program satisfies the objective, there are a few known issues.

* ~Plaintext/Ciphertext entries cannot have a space~. **(FIXED)**
* Entering letters in the menu breaks the program.
* Key is changed into the keystream after the first encrytion/decryption, if the user's plaintext/ciphertext is longer than the key. Check your key when encrypting/decrypting numerous times. 

Any other issues not listed will be retained as this project will not be worked after final submission. 

## Built With

* [repl](https://repl.it/) - Primary IDE
* [Visual Code](https://code.visualstudio.com/) - Secondary IDE
* [MinGW](https://sourceforge.net/projects/mingw-w64/) - Compiler used in conjunction with Microsoft Visual Code.
* [Google](https://google.com) - An absolute great resource for any programmer!

## Authors

* **Randy Son** - *Software Developer/ C++ Master Mind/Stranger from the street* - [Conocolo](https://github.com/conocolo)
* **Devan Vegiga** - *Junior Software Developer/Project Coordinator/Homeless* - [dvegiga](https://github.com/dvegiga)

## License

This project is licensed under the GNU License - see the [GNU General Public license](https://www.gnu.org/licenses/gpl.html) website for details.

```
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
```

## Acknowledgments

* Thank you Dr. Nguyen for the amazing support and encouragement. Your knowledge and passion for the computer/information sciences is highly motivating. 
