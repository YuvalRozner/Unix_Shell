# MyShell Program
MyShell is a simple Unix shell program that allows users to execute commands and programs on a Unix system. This program is written in C programming language and uses various Unix system calls.

## Features
MyShell program provides the following features:

* Simple and intuitive command-line interface
* Ability to execute any Unix command or program
* Support for up to four command-line arguments
* Ability to execute programs from the current working directory

## Usage
To use MyShell, simply compile the program and run it on your Unix system. Once the program is running, you will see a prompt that looks like this:

```
MyShell> 
```
You can then enter any Unix command or program name followed by up to four command-line arguments. For example:

```
MyShell> ls -l
```
This will execute the ls command with the -l argument.

To exit the program, simply enter the exit command:
```
MyShell> exit
```

## Requirements
To compile and run MyShell program, you will need:

* A Unix system
* C compiler
* Standard Unix libraries

## Installation
To install MyShell program, simply clone the GitHub repository and compile the program:

```
$ git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY
$ cd YOUR-REPOSITORY
$ gcc -o MyShell MyShell.c
```


## License
This program is licensed under the MIT License. See the LICENSE file for details.