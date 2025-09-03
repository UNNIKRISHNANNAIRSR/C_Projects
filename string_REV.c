#include<stdio.h>
#include<string.h>
void main()
{
    char stack[100],str[100],str1[100];
    int top=-1,i,len;
    printf("Enter a string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        top++;
        stack[top]=str[i];
    }
    for(i=0;i<len;i++){
        str1[i]=stack[top];
        top--;
    }
    printf("Stack:\n");
    for(i=0;i<len;i++){
        printf("%c\n",str1[i]);
        str1[len]='\0';
    }
    if(strcmp(str,str1)==0)
    {
        printf("%s is palindrome",str);
    }
    else
    {
        printf("%s is not palnidrome",str);
    }
}