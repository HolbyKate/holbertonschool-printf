<h1 align="center"> Hi Holberton 👋 </h1> <br>
<p align="center">

  
![https://github.com/HolbyKate/holbertonschool-printf/blob/main/Sources/printf%20img.png?raw=true](https://github.com/HolbyKate/holbertonschool-printf/blob/main/Sources/printf%20img.png?raw=true)
           


## Introduction

The Printf project is a customized implementation of the printf function in the C language. The printf function is a standard library function used to display formatted messages on standard output (usually the console).

## Objective

The objective of this project is to create a simplified version of the printf function to understand the underlying concepts related to variable arguments and format specifiers in C.

        
## 🧑🏻‍💻 Compilation
```js
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
       
## 🛠️ Tech Stack

<img width="50px" height="50px" src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png">
        
        
## 🧐 Features   

A few of the things we did before checking the task:

- Rephrase  the task in our own words.
- Verify expected behavior by getting example inputs and outputs.
- Whiteboard both solution with words.
- Walk through the solution with an example.
- Whiteboard your solution with code.
- Correct our solution.
- Write our code on your computer.
- Test our code on your computer.
- Debug if necessary.
That it! 👏


## 🛠️ Requirements

General

- All our files were compiled on Ubuntu 20.04 LTS
- Our code use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Not global variables was used.
- There are no more than 5 functions per file
- The prototypes of all our functions is included in our header file called main.h
- All our header files are include guarded
            

## 💾 More info

Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## 📂 Files description

| main.h | contains the main structure and the function prototypes | 
| -------- | -------- | 
| functions.c    | contains print functions   | 
| format.c   | to check the specifier character   | 
| my_printf.c   | project    | 
|man_3_printf | manual for printf functions
| README.md | The README.md file
| Sources | source images

## 💾 Specifiers

| symbol| meaning|
| -------- | -------- | 
| %%   | print a percent   | 
| %c   | print a single character   | 
| %s  | print a null-terminated string  | 
|%i | print an an int number
| %d | print a decimal number

## 🤷‍♂️ Project instructions

[Tasks](https://intranet.hbtn.io/projects/2167)


## 📊 Process



![https://github.com/HolbyKate/holbertonschool-printf/blob/main/Sources/Colorful%20Get%20Things%20Done%20Flowchart%20Infographic%20Graph.png?raw=true](https://github.com/HolbyKate/holbertonschool-printf/blob/main/Sources/Colorful%20Get%20Things%20Done%20Flowchart%20Infographic%20Graph.png?raw=true)    
                
   
## 📌	Examples and testing
```js 
input
#include "main.h"

int main(void)
{
        char *s = "January";
        char c = 'H';
        int i = 55;

        _printf("My name is %carry I got %d and we are in %s\n", c, i, s);

        return (0);
}
```
```js
Output
My name is Harry I've got 55 and we are in January
```

## Man page

```
man ./man_3_printf
```

## 📝	Feedback

Feel free to send us feedback at cathyaugustin@holbertonstudents.com 
Feature requests are always welcome.

If there's anything you'd like to chat about, please feel free to join our 

<a href="https://www.freepnglogos.com/pics/discord-logo-png" title="Image from freepnglogos.com"><img src="https://www.freepnglogos.com/uploads/discord-logo-png/discord-logo-logodownload-download-logotipos-1.png" width="100" alt="discord logo logodownload download logotipos" /></a>
Discord Group : les délégués


## ❤️ Peers 

Thank you to all the helper peers for our kindness and professionalism 🙏 

 ## 📚	Sources     
        
[The secret of printf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230727%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230727T082612Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=a5cc030d481639c2655e58558831677907ee840c727ba9f3d44d5b14e6b6c5fb)

## 🙇 Authors
#### Cathy Augustin
- Github: https://github.com/HolbyKate
#### Yoann Rivet
- Github: https://github.com/SpStigma
