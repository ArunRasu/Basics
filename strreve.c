#include<stdio.h>
#include<string.h>

int main() 
{
   char str[10], dest;
   int i, j = 0;

   printf("Enter the string :");
   fgets(str, 10, stdin);

   i = 0;
   j = strlen(str) - 1;

   while (i < j) {
      dest = str[i];
      str[i] = str[j];
      str[j] = dest;
      i++;
      j--;
   }

   printf("Reverse string is :%s", str);
   return 0;
}
