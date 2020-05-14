# Interpreter For Monty Bytecodes Files

<p align="center">
   <a href="http://montyscoconut.github.io/"><img src="http://montyscoconut.github.io/assets/ico/avatar.png">

<p align="center"> 
The Monty programming language
                
----
**Monty 0.98** is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it.The goal of this project is to create an interpreter for Monty ByteCodes files.

**Monty byte code files**
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

### Installation:

`$ git clone  https://github.com/julianramirezch/monty.git`

### Compilation:

`$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

### Interpreter:

`$ ./monty bytecodes/00.m `

### Opcodes:

| Opcode name | Description                    |
| ------------- | ------------------------------ |
| `add()`      | adds the top two elements of the stack.       |
| `div()`   | divides the second top element of the stack by the top element of the stack.     |
| `mod()`      | computes the rest of the division of the second top element of the stack by the top element of the stack.       |
| `mul()`      | multiplies the second top element of the stack with the top element of the stack.       |
| `nop()`      | doesn’t do anything.       |
| `pall()`      | prints all the values on the stack, starting from the top of the stack.       |
| `pchar()`      | prints the char at the top of the stack, followed by a new line.       |
| `pint()`      |  prints the value at the top of the stack, followed by a new line.       |
| `pop()`      | removes the top element of the stack.       |
| `pstr()`      | prints the string starting at the top of the stack, followed by a new line.       |
| `push()`      | pushes an element to the stack.  Usage: push <<n>>       |
| `rotl()`      | rotates the stack to the top.       |
| `rotr()`      | rotates the stack to the bottom.       |
| `sub()`      | subtracts the top element of the stack from the second top element of the stack.       |
| `swap()`      |  swaps the top two elements of the stack.       |

## Author: 
### Julian Ramirez <julianramirezch1@gmail.com>
----
[![Twitter Follow](https://img.shields.io/twitter/follow/JulianR_30.svg?style=social&label=Follow)](https://twitter.com/JulianR_30)

2020