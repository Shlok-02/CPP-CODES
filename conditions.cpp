#include <iostream>
#include<string>
#include<cmath>

using namespace std;
/*
int main()
{
    int age =27;
    if (age >60){
        cout<<"u are old"<<endl;
    }else{
        cout<<"you are mad";
    }
    return 0;
}
*/
/*
int main()
{

    int a;
    int choice;
    cout<<"Enter the Number :"<<endl;
    cin>>a;
     if ( choice >27)
     {
         cout<<"hi";
     }else{
            cout<<"bye"<<endl;
     }
     return 0;
}*/
/*
int main()
{
    int a;
    int b;
     cout<<"Enter the number A:";
     cin>>a;
     cout<<"Enter the number B:";
     cin>>b;

     if (a>b){
        cout<<"A is Greater Than B";

     }else{
        cout<<"B is Greater Than A";

        }
        return 0;
}*/
/**
int main()
{

    int a;
    while (a<=25){
        cout<<"s "<<a<<endl;
        a = a+9;
    }
    return 0;
}**/
/**
int main()
{
    int a =1;
    int number;
    int total =0;
    while (a<=5){
            cout<<"Enter the number :"<<endl;
            cin>>number;
            total = total + number;
            a = a+1;

    }
    cout<<"The square of total  is :"<<total*total<<endl;
    return 0;
}
*/
/**
int main()
{
    int age;
    int Total = 0;
    int numberofpeople =0;


    while (age!=-1){
        cout<<"Enter the persons age or press -1 to exit :";
        cin>>age;
        Total = Total + age;
        numberofpeople ++;


    }
    cout<<"Number of Enteries:"<<numberofpeople<<endl;
    cout<<"Average age is:"<<Total/numberofpeople<<endl;
    return 0;
}*/
/**
int main()
{
    int marks;
    int total = 0;
    int enteries = 0;

    while (marks != -1)
    {
        cout<<"Enter the marks OR types -1:"<<endl;
        cin>>marks;
        total = total + marks;
        enteries ++;
    }
    cout<<"The average of class is:"<<total/enteries<<endl;
    cout<<"Total students:"<<enteries<<endl;
    return 0;

}**/
/**
int main()
{

    int marksofmaths;
    int marksofphysics;
    int marksofchem;
    int marksofbio;

    cout<<"Enter the marks of Maths:";
    cin>>marksofmaths;

    cout<<"Enter the marks of Physics:";
    cin>>marksofphysics;

    cout<<"Enter the marks of chemistry:";
    cin>>marksofchem;

    cout<<"Enter the marks of Bio:";
    cin>>marksofbio;

    int total = marksofbio+marksofchem+marksofmaths+marksofphysics;
    cout<<"Total is : "<<total<<" Out of 400 "<<endl;

    int average = total / 4;
    cout<<"The avg is :"<<average<<endl;
}*/
/**
int main()

    int a;
    float p=1200;
    float r = 0.013;

    for (int day;day<(356*5);day++)
    {
        a = p *pow(1+r,day);
        cout<<"Day"<<day<<"-------------"<<a<<endl;
    }
    return 0;
}**/
/**
int main()
{
    int number;
    cout<<"Enter Your lottery number :"<<endl;
    cin>>number;


    switch(number)

    {
    case 12:

        cout<<"You are first"<<endl;
        break;
    case 84:
        cout<<"You are second"<<endl;
        break;
    case 79:
        cout<<"You are Third"<<endl;
        break;
    default:
        cout<<"You loose"<<endl;

    }
}*/
/**
int main()
{

    int age;
    int money;
    cout<<"Enter the amount of money you have: "<<endl;
    cin>>money;

    cout<<"Enter your Age:"<<endl;
    cin>>age;

    if (age >21 && money >> 1500)
    {
        cout<<"Congrats  Your age and Money balance is okay ";
           }
           else{
            cout<<"You are not allowed !!!!!";
           }
}**/
/**
int area(int l, int b`)
{
    return l*b;
}

int volume(int l, int b,int h)
{
    return l*b*h;
}

int main()
{    cout<<area(2,3 );
    cout<<"\n";
    cout<<volume(19,90,89);
    return 0;
}**/
/**
string  name =  "Shlok";
int main()
{
    string   name = "Myra";
    cout<< ::name<<endl;
    cout<<name<<endl;
}**/


/**
void printnumber(int x)
{
    cout<<"You have printed an integer :"<<x<<endl;
}
void printnumber(float y)
{
    cout<<"You have printed a float: "<<y<<endl;
}
int main()
{

    int a=90;
    float b =8900.98790908;
    int c=988;
    float d=90.89;


    printnumber(a);
    printnumber(b);
    printnumber(c);
}**/




