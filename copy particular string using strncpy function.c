// strncpy

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100];
    char str2[20] = "mahudoom naina";
    strncpy(str1,str2,4);
    printf("\n Str1: %s",str1);
}
