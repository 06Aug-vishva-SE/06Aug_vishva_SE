
#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    FILE *file;
    file = fopen("temp.txt","w");
    fprintf(file,"hello student!");
    fclose(file);
}

