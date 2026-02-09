# Week 1: C

> **Topics:** C, Source Code, Machine Code, Compiler, Correctness, Design, Style, Syntax, Header Files, Libraries, Types, Conditionals, Variables, Loops, CLI, Operators, Integer Overflow, Floating-Point Imprecision

## Lecture Notes

- machines use binary code and humans use source code, the connector being a compiler which takes source code and converts it into binary
- escape sequences (\n, \r, \", etc.):
    - \n: go to a new line
    - \r: carriage return character (move cursor back to the start of the current line)
    - \": indicate that we want to use " as a quotation mark instead of to define a string
    - \': similar to above except with a single quotation
    - \t: insert a tab space (generally 4 spaces)
    - \\: print a literal \
    - \0: marks the end of a string in memory (aka Null terminator)
    - \a: alert/bell, makes the terminal beep
    - \b: moves cursor back one character (backspace)
- note that code compiles in order from top to bottom
- scope is the accessibility of certain things at a level in the code, indicated by indentation
- Correctness: does the code take input and return the desired output
- Design: Is the code time and space efficient
- Style: Is the code readable and ordered "correctly"

## Key Concepts

- Most programming languages are line based, meaning that they are compiled line by line
- CLI keywords allow you to navigate around and configure things within the computer quickly without using the mouse
- Integer overflow occurs when you try to make an integer which is larger than the storage allocated to it, this is because computers have a finite number of bits to store numbers


### C Basics

- code in C needs to be compiled before it can be run, there is no auto compiling
- if code in C changes without re compilation the changes wont go into effect until the next compilation of the file
- C also has header files(libraries) which hold other people's code and allows you to use the functions that are included in that header file
- C is the universal layer language for source code, most languages compile into C which then compiles into binary
- format specifiers: placeholders inside strings to tell C 'a value of this type goes here':
    - %i or %d : int : ex. 42
    - %li or %ld : long : ex. 5000000000
    - %f : float/double : ex. 3.1400
    - %c : char : ex. 'A'
    - %s : string/char * : ex. "hello"
    - %p : pointer(address for a value) : ex. 0x7fff5c3a1
- scanf function (in stdio lib) allows us to implement user input in C
     - To use scanf you must first initialize the variable as its type e.g. "int x;"
     - The following line should be the question or line that the user can see when making a decision using the printf function e.g. "What number is X? "
     - Then the scanf function is used to indicate that a user response is required and then the response is saved back into the specified variable e.g. scanf("%i", &x)
     - Note that the & operator is used to link the value to the variable through a pointer
- Prototypes can be used to define functions that exist within the file below the point at which it is called
- functions in C are created in the form void <funcname>(arguments) {}




### Types & Variables

- Operators:
    - '=' is an assignment operator for variables, setting something to be this value
    - '<' is the less than operator which will return a boolean (t/f)
    - '<=' is the less than OR equal to operator, returns bool
    - '>', greater than operator, returns bool
    - '>=', greater than OR equal to operator, returns bool
    - '==' evaluates if two passed values are the same, returns a bool
    - '!=' is the inverse of '==' and evaluates if two passed values are not the same, returns a bool
    - '||' is the or operator which allows you to evaluate two scenarios and return True if at least one is true
    - '&&' operator allows you to evaluate two scenarios and return True only if both are True

- Types:
    - bool : true or false
    - char : characters of text (a, n, e, etc.)
    - float : 32 bit stored value (can include decimal, e.g. 3.12)
    - double : 64 bit version of a float (more storage per value, therefore allowing more precision)
    - int : integer number (e.g. 3, 5, 7), typically 32bit
    - string : sequence of characters (e.g. "hey")
    - long : store larger integers (outside of -2 to 2 billion range), 64bit

- Variables store a value of a certain type or data structure for use within code in an effort to make the code more readable and streamlined

### Conditionals & Loops
- conditionals include if and else statements
- loops include for loops & while loops

### Command Line

- code <file> will open a new file with the name of the file
- ./<file> will run the file if it exists within your current directory
- 'clear' keyword will clear terminal for cleaner visual aesthetic
- 'style50 <file>' highlights differences between current formatting and the expected style (essentially a spell checker for code formatting)
- 'check50 <file>' 
- To compile C code we use the clang/gcc -o <name of compiled program> <source file>
    - the -o flag means "output", so the next word after that is telling clang what to name the compiled program
    - Without the -o flag, clang defaults to naming the output a.out which stands for "assembler output"
    - After running clang to compile you can use the ./ prefix to run the locally compiled program
- 'cd' allows you to navigate through file directories
    - 'cd' by itself will allow you to go back to your home directory
    - 'cd ..' allows you to go back one folder
    - 'cd <file>' allows you to enter the directory of the selected file in the terminal
    - Note that you can only cd into files within your current directory
- 'ls' allows you to see all of the files within your current directory
- 'rm <file>' allows you to remove a file from your current directory
- 'mkdir <name>' allows you to create a directory/folder for the input file name
- 'mv <file> <destination>' allows you to move a file from one directory to a certain destination directory

## Shorts / Supplementary

- **Data Types:** 
- **Operators:** 
- **Conditional Statements:** 
- **Loops:** 
- **Command Line:** 
- **Magic Numbers:** 

## Questions & Reflections

<!-- What stood out? What was confusing? What do you want to revisit? -->
