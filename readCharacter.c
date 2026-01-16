#include <stdio.h>
#include <stdbool.h>

void clearBuffer(void);

int main()
{
	char c = ' ';

	printf("..............................\n");

	printf("Enter a char : ");
	c = getchar();
	printf("Entered char : ");
	putchar(c);
	printf("\n");
	clearBuffer();
	printf("Enter a char : ");
	// //The leading space in the format string tells scanf to skip any whitespace
	// scanf(" %c", &c);
	scanf("%c", &c);
	printf("Entered char : %c\n", c);

	return 0;
}

void clearBuffer(void)
{
	char ch = ' ';

	ch = getchar();

	//EOF signals an end of an input stream or input error
	while((ch != '\n') && (ch != EOF))
	{
		ch = getchar();
	}

}