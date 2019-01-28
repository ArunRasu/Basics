#include<stdio.h>
#include<string.h>
int main()
{
	char src[100] = {0}, dest[100] = {0};

	
	printf("Enter the Source String\n");
	scanf("%s", src);
	strncpy(dest , src + 2, 4);
	dest[2] = 0x00;

	

	printf("Src [%s], dest [%s]\n", src, dest);

	return 0;
}

