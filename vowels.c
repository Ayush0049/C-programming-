#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A'||ch=='E'|| ch=='I'||ch=='O'||ch=='U'){
    printf("character is vowel\n");
}  
else{
    printf("character is consonant\n");
}  
return 0;
}