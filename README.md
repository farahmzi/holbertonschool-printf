# holbertonschool-printf

A custom implementation of the C standard library printf function, created as part of the Holberton School curriculum.

## Description

This project implements a simplified version of the printf function that formats and prints data to the standard output stream (stdout). It uses the low-level write() system call and handles a limited set of conversion specifiers.

## Function Prototype

```c
int _printf(const char *format, ...);
```

## Return Value

Returns the number of characters printed (excluding the null byte used to end output to strings).

## Supported Conversion Specifiers

- `%c` : Character (prints a single character)
- `%s` : String (prints a null-terminated string)
- `%d` : Decimal (prints base-10 numbers)
- `%i` : Integer (prints integer values)
- `%%` : Percent sign (prints a literal %)

## Requirements

- All files compiled on Ubuntu 20.04 LTS using gcc
- Code follows Betty coding style
- No use of global variables
- No more than 5 functions per file
- All prototypes declared in main.h
- Header files include guards
- Uses write() system call for output

## Usage Example

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("Character: %c\n", 'A');
    _printf("Number: %d\n", 42);
    _printf("Integer: %i\n", -123);
    _printf("Percentage: 100%%\n");
    return (0);
}
```

**Output:**
```
Hello, World!
Character: A
Number: 42
Integer: -123
Percentage: 100%
```

## File Structure

```
holbertonschool-printf/
├── README.md
├── main.h
├── _printf.c
├── char_print.c
├── string_print.c
├── number_print.c
├── specifier_handler.c
└── test_files/
    └── main.c
```

## Core Functions

- `_printf(const char *format, ...)` - main printf function
- `char_print(char c)` - prints a single character using write
- `string_print(char *str)` - prints strings (with NULL safety)
- `number_print()` - handles integer/decimal output
- `specifier_handler()` - processes format specifiers

## Test Cases

Handles edge cases:
- NULL format strings
- NULL string arguments
- Multiple format specifiers
- Mixed data types
- Uninitialized values

## Code Quality

- Betty compliant
- No compiler warnings
- Proper error handling
- NULL pointer safe
- Modular, clean design

## Team

- **Farah Almozaini** - [@farahmzi](https://github.com/farahmzi)
- **Abdullah Alshebel** -  [@abo-ah-md](https://github.com/abo-ah-md)
