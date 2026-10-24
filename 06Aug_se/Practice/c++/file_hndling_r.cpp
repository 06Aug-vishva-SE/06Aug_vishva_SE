#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    FILE *file;
    char str[100];
    file=fopen("test.txt","r");
    
    while(fscanf(file,"%s",&str)!=EDF)
    {
    	cout<<str<<end1;
	}
}
