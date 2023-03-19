#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/*Print all the letters except q and e*/

int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
if (i != 4 && i != 16)
{
putchar (alphabet[i]);
}
putchar ('\n');
return (0);
}
