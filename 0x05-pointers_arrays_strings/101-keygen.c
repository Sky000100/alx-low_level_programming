#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * random_char - Generates a random character between min and max.
 * @min: The minimum character value.
 * @max: The maximum character value.
 * Return: The generated random character.
 */
char random_char(char min, char max)
{
	return (min + rand() % (max - min + 1));
}

/**
 * generate_password - Generates a random password of a given length.
 *
 * @length: The desired length of the password.
 */
void generate_password(int length)
{
	char lowercase_letters[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char digits[] = "0123456789";
	char special_characters[] = "!@#$%^&*";

	char password[length + 1];
	int charset_size, charset_choice;

	srand(time(NULL));

	for (int i = 0; i < length; i++)
	{
	charset_choice = rand() % 4;

	if (charset_choice == 0)
		charset_size = sizeof(lowercase_letters) - 1;
	else if (charset_choice == 1)
		charset_size = sizeof(uppercase_letters) - 1;
	else if (charset_choice == 2)
		charset_size = sizeof(digits) - 1;
	else
		charset_size = sizeof(special_characters) - 1;

	password[i] = random_char(lowercase_letters[0],
				lowercase_letters[charset_size - 1]);
	}

	password[length] = '\0';

	printf("%s", password);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int password_length = 27;

	generate_password(password_length);
	putchar('\n');
	return (0);
}
