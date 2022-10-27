#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: char pointer
 */
char *cap_string(char *str)
{
	char *sep = ",;.!?\"(){} \n\t\0";
	int i = 1, j = 0;
	int bool = 0; /*acts as a boolean*/
	char ch;

	if (str[0] >= 'a' && ch <= 'z')
		str[0] -= 32;

	while (str[i] != '\0')
	{
		ch = str[i];
		if (ch >= 'a' && ch <= 'z')
		{
			ch = str[i - 1];
			bool = 0;
			j = 0;
			while (bool == 0 && sep[j] != '0')
			{
				if (ch == sep[j])
					check = 1;
				j++;
			}
			if (bool == 1)
				str[i] -= 32;
		}

		i++;
	}

	return (str);
}