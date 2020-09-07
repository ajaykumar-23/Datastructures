#include<stdio.h>

int main() {
   char str[100];
   int length;

   printf("\nEnter the String : ");
   scanf("%s",str);

   length = 0;  // Initial Length

   while (str[length] != '\0')
      length++;

   printf("Length of the String is : %d\n", length);
   return(0);
}
