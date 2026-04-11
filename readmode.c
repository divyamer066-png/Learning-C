// This program is to read the content of a file and print it on the console.



#include<stdio.h>
int main()
{
    FILE *p;
    char ch;
    p=fopen("div.txt","r");
    if(p==NULL)
    {
        printf("ERROR: FILE DOESN'T EXSIT");
        return 1;
    }
    while((ch=fgetc(p))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(p);
    return 0;
}

