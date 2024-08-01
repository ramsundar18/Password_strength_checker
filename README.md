# Password Strength Evaluator

## Overview

The Password Strength Evaluator is a C-based tool designed to assess the strength of a password based on several criteria. The project consists of two main components:

1. **`password`**: The main program that interacts with the user to obtain a password and evaluates its strength.
2. **`passwordchecker`**: A library of functions used by the main program to calculate the password's strength based on various criteria.

## Components

### 1. Main Program (`password`)

The main program, named `password`, prompts the user to enter a password and then calculates and displays the password's strength rating. It uses the `passwordchecker` functions to perform various checks and score the password.

#### Features

- **Secure Password Input**: Uses `getpass` to securely read the password without displaying it on the terminal.
- **Password Evaluation**: Displays a rating for the password based on its strength.

#### Compilation

To compile the main program with the password checker, use the following command:

```sh
gcc -o password main.c passwordchecker.c

2. Password Checker (passwordchecker)

The passwordchecker component contains a set of functions that evaluate the strength of the password based on different criteria. It provides a score based on the following checks:

    Length: The password must be at least 8 characters long.
    Uppercase Letters: The password should contain at least one uppercase letter.
    Lowercase Letters: The password should include at least three lowercase letters.
    Special Symbols: The password must have at least one special symbol.
    Digit Sequences: Checks for sequences of consecutive digits and provides scores based on the sequence length.

Functions

    int pass_score(char *password): Computes the total strength score by summing up the scores from individual criteria.
    int strength(char *password): Evaluates the length of the password.
    int caps(char *password): Checks for the presence of uppercase letters.
    int low(char *password): Checks for at least three lowercase letters.
    int symbol(char *password): Determines if there is at least one special symbol.
    int seq(char *password): Analyzes sequences of consecutive digits.

Header File (passwordchecker.h)

The header file passwordchecker.h declares the functions provided by the passwordchecker component:

c

#ifndef PASSWORDCHECKER_H
#define PASSWORDCHECKER_H

int pass_score(char *password);

#endif // PASSWORDCHECKER_H

Usage

    Compile the Program

    sh

gcc -o password main.c passwordchecker.c

Run the Program

sh

    ./password

    Enter your password when prompted. The program will display the strength rating based on the evaluated criteria.

Example

sh

Enter the Password: myPassw0rd!

Output:

csharp

The Rating for the Password 'myPassw0rd!' is 8/10

Notes

    Secure Input: The getpass function is used for secure password input to avoid displaying the password in the terminal.
    Platform Compatibility: The getpass function may not be available on all platforms. If you encounter issues, consider using a different method for secure input.

Contributing

Contributions are welcome! If you have improvements or bug fixes, please submit a pull request. Ensure that your changes are well-tested and adhere to the project’s coding standards.
