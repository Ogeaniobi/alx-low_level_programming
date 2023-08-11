#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_number - Checks if a string consists of only digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string consists of only digits, 0 otherwise.
 */
int is_number(char *str)
{
int i = 0;
while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Multiplies two positive integers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
int main(char *num1, char *num2)
{
int result = atoi(num1) * atoi(num2);
return (result);
}

int main(int argc, char *argv[])
{
if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
return (98);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = multiply(argv[1], argv[2]);

printf("%d\n", result);
return (0);
}
