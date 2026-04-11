// File Handling in C program to write in a file


#include<stdio.h>
int main()
{
    FILE *p;
    char ch;
    p=fopen("file.txt","w");
    if(p==NULL)
    {
        printf("ERROR: File doesn't Exist");
        return 1;
    }
    fprintf(p,"HELLO WORLD");
    fclose(p);
    return 0;

}
