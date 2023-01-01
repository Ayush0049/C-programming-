//character is an alphabet or not
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
if(ch>='a'&& ch<='z'){
printf("character is alphabet\n");
}
else if(ch>='A'&& ch<='Z'){
printf("character is alphabet\n");
}
else{
    printf("not an alphabet\n");
}
return 0;
}