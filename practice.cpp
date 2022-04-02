#include <iostream>
#include <conio.h>
#include <string.h>
#include<stdio.h>
using namespace std;

int main()
{
    char str1[100],str2[100];
    cout<<"Enter the first string : ";
    gets(str1);

    cout<<"Enter the second string : ";
    gets(str2);

    if(strcmp(str1,str2)==0)
    {
        cout<<"both are equal"<<endl;
    }
    else{cout<<"Both are not equal";}
}
/**
int main()
{
    cout<<"Conversion of miles to kilometers"<<endl;
    double m;
    cout<<"Enter the Miles you want to convert :";
    cin>>m;

    double k = m/1.609;
    cout<<"The required kilometers are "<<k<<endl;
}**/

