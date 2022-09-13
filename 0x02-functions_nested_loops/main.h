#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * print_alphabet - Prints all the alphabet in lowercase followed by a new line
 *
 * Return: none
 */

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);

#endif /* _MAIN_H_ */

int _islower(int c);
int _isalpha(int c);
