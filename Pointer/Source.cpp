#include<stdio.h>
void xeoj(char*);
int main()
{
	char str[50];
	char* pstr;
	scanf_s("%s", str, 49);
	pstr = str;
	xeoj(pstr);
	return 0;
	
}
void xeoj(char* pstr)
{
	while (*pstr != '\0')
	{
		if (*pstr >= 'a' && *pstr <= 'z')
		{
			printf("%c", *pstr - 'a' + 'A');
		}
		else if (*pstr >= 'A' && *pstr <= 'Z')
		{
			printf("%c", *pstr - 'A' + 'a');
		}
		pstr++;
	}
}
