#include <stdio.h>
#include <string.h>

int stringLength(char s[]) {
   int i=0;

   while(s[i]!='\0')
      i++;

   return i;    
}

void string_reverse(char st[]) {
   int i,j,len;
   char ch;

   j = len = stringLength(st) - 1;
   i = 0;

   while(i < j) {
      ch = st[j];
      st[j] = st[i];
      st[i] = ch;
      i++;
      j--;
   }
}

int main (void) {
   char line[] = "C program to reverse line string";
  
   int i, j, n;


   n = stringLength(line);
    char reverse[n] , temp[n];
    reverse[n]="";

   for(i = n-1; i >= 0; --i) {

      for(j = 0; i >= 0 && line[i] != ' '; --i,++j)
         temp[j] = line[i];

      temp[j] = '\0';

      string_reverse(temp);
      
      strcat(reverse,temp);
      strcat(reverse," ");
   }

   printf("Original - %s\n", line);
   printf("Reversed - %s\n",reverse);

   return 0;
}
