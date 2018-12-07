# CIS Final Project (Fall 2018)

For our final project, we chose to tackle Case No. 3, The Vignere Cipher. The Vigenère cipher is a method of encrypting alphabetic text by using a series of interwoven Caesar ciphers, based on the letters of a keyword. It is a form of *polyalphabetic* substitution. Our program takes plaintext and a keyword from the user and utilizes the Vigenere cipher to produce ciphertext. Users also have the option to decrypt ciphertext that was encrypted using the Vignere cipher. Our program is written in C++ and took about 1 week to complete.

## Getting Started

You will need a web-based IDE such as [repl](https://repl.it/) or [cpp.sh](cpp.sh). Copy the contents of "Project.final_version.cpp" into the IDE and compile.

Alternatively you can clone this repository using [Git](https://git-scm.com/) and run the "Project.final_version.cpp" found in the master branch using a compiler of choice. We used [MinGW](https://sourceforge.net/projects/mingw-w64/) and the *g++* command.

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
Loaded...

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

Please enter plaintext to be encrypted: FLYINGSPAGHETTIMONSTER
Passed your plaintext, FLYINGSPAGHETTIMONSTER, to get encrypted...
Plaintext length: 22
Keyword length: 5
New keyword: PANDAPANDAPANDAPANDAPA
Cipher text: ULLLNVSCDGWEGWIBOAVTTR
```

The program will continue until the user presses **4** to exit. 

```
Please select an option:
1) Change Keyword
   >>Current Key: PANDAPA
2) Encrypt
3) Decrypt
4) Exit
>>Enter Option: 4

Exiting program...

```
### Approach



### Known Issues

* Plaintext entries cannot have a space.
* Menu does not work well when you enter letters.

## Built With

* [repl](https://repl.it/) - Primary IDE
* [Visual Code](https://code.visualstudio.com/) - Secondary IDE
* [MinGW](https://sourceforge.net/projects/mingw-w64/) - Compiler used in conjunction with Microsoft Visual Code.

## Authors

* **Randy Son** - *Software Developer/ C++ Master Mind* - [Conocolo](https://github.com/conocolo)
* **Devan Vegiga** - *Project Coordinator/Junior Software Developer* - [dvegiga](https://github.com/dvegiga)

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
