#include <stdio.h>
#include <string.h>
int main(void)
{
   int i;
   char str[6] = "hello";
   char reverse_str[6] = "";
   printf("%s\n", str); 
   for (i = 0; i < 5; i++)
        reverse_str[4-i] = str[i]; 
   printf("%s\n", reverse_str);
   printf("%d\n", i);
   printf("%d\n", strlen(reverse_str));
   return 0;
}
