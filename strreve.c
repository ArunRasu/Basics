#include<stdio.h>
#include<string.h>

int main() {
   char str[100], dest;
   int i, j = 0;

   printf("\nEnter the string :");
   fgets(str, 100, stdin);

   i = 0;
   j = strlen(str) - 1;

   while (i < j) {
      dest = str[i];
      str[i] = str[j];
      str[j] = dest;
      i++;
      j--;
   }

   printf("\nReverse string is :%s", str);
   return (0);
}
