#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char myString[] = "My Name is Jason";

	char temp[50];

	strncpy(temp, myString, sizeof(temp) - 1);
	printf("The string is: %s", temp);

	char src[50], dest[50];

	strcpy(src, "This is source");
	strcpy(dest, "This is destination");

	strncat(dest, src, 15);

	printf("Final destination string : |%s|", dest);

	printf("strcmp(\"A\", \"A\")is ");
	printf("%d\n", strcmp("A", "A"));

	printf("strcmp(\"A\", \"B\")is ");
	printf("%d\n", strcmp("A", "B"));

	printf("strcmp(\"B\", \"A\")is ");
	printf("%d\n", strcmp("B", "A"));

	printf("strcmp(\"C\", \"A\")is ");
	printf("%d\n", strcmp("C", "A"));

	printf("strcmp(\"Z\", \"a\")is ");
	printf("%d\n", strcmp("Z", "A"));

	printf("strcmp(\"apples\", \"apple\")is ");
	printf("%d\n", strcmp("apples", "apple"));

	char str[80] = "Hello how are you - my name is - Jason";
	const char s[2] = "-";
	char *token;

	/* get the first token */
	token = strtok(str, s);

	/* walk through other tokens */
	while (token != NULL)
	{
		printf("%s\n", token);

		token = strtok(NULL, s);
	}
	char buf[100];
	// char *ptString = buf;
	int nLetters = 0;
	int nDigits = 0;
	int nPunct = 0;
	int nSpace = 0;

	printf("Enter an interesting string of less than %d characters:\n", 100);
	fgets(buf, sizeof(char) * 100, stdin);

	int i = 0;
	while (buf[i])
	{
		if (isalpha(buf[i]))
		{
			++nLetters;
		}
		else if (isdigit(buf[i]))
		{
			++nDigits;
		}
		else if (ispunct(buf[i]))
		{
			++nPunct;
		}
		else if (isspace(buf[i]))
		{
			++nSpace;
		}
		++i;
	}
	printf(
		"\nYour string contained %d letter(s), %d digit(s), %d punctuation(s), and %d space(s).\n",
		nLetters, nDigits, nPunct, nSpace);

	return 0;
}
