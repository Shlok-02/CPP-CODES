#include <iostream>

using namespace std;

int add()
{


    int a;
    int b;

    cout<<"Enter the first number :";
    cin>>a;

    cout<<"Enter the second number :";
    cin>>b;

    cout<<"The ans is :"<<a+b<<endl;

}
int subt()
{


    int a;
    int b;

    cout<<"Enter the first number :";
    cin>>a;

    cout<<"Enter the second number :";
    cin>>b;

    cout<<"The ans is :"<<a-b<<endl;

}
int multiply()
{


    int a;
    int b;

    cout<<"Enter the first number :";
    cin>>a;

    cout<<"Enter the second number :";
    cin>>b;

    cout<<"The ans is :"<<a*b<<endl;

}
int divide()
{


    int a;
    int b;

    cout<<"Enter the first number :";
    cin>>a;

    cout<<"Enter the second number :";
    cin>>b;

    cout<<"The ans is :"<<a/b<<endl;
    cout<<"The remainder is :"<<a%b<<endl;

}

int main()
{

    int choice;

    cout<<"Choose from the following choice \n 1.add \n 2.subtract \n 3.multiply \n 4.divide\n ";
    cout<<"Enter your choice :";
    cin>>choice;

    if (choice==1){
        cout<<add();

    };
     if (choice==2){
        cout<<subt();
    };
    if (choice==3){
        cout<<multiply();
    };
   if (choice==4){
    cout<<divide();
    };


    return 0;
}
