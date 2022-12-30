//character is vowel or consonant
#include<stdio.h>

int main ()
{
   char ch;
   printf("Enter the alphabet: ");
   scanf("%c",&ch);

   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')// a,e,i,o,u are vowels other all are consonants
      
   {
    printf("character is vowel\n");
   }
    else{
        printf("character is consonant\n");
    }
return 0;
}
