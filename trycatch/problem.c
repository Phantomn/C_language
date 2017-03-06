#include <stdio.h>

int main(void)
{
   int count = 0;
   char str[1000000];
   int i;
   fgets(str, 1000000, stdin);

   for(i=0;i<1000000;i++)//aa aa aa aa' '
   {
      if(str[i] == '\0')
         break;
      else if(str[i] != ' ' && str[i+1] == ' ')
         if(str[i+1]=='\0')
            break;
         count++;
   }
   printf("%d\n",count);
   return 0;
}