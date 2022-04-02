#include <iostream>
using namespace std;
class Marks
{
private:
    int intmarks;
    int extmarks;

public:
    Marks()
    {
        intmarks = 0;
        extmarks = 0;
    }
    Marks(int im, int em)
    {
        intmarks = im;
        extmarks = em;
    }
    void display() { cout << intmarks << " " << extmarks << endl; }

    Marks operator + (Marks m)
    {
        Marks temp;
        temp.intmarks = intmarks + m.intmarks;
        temp.extmarks = extmarks + m.extmarks;
        return temp;
    }
};
int main()
{
    Marks m1(10, 20), m2(20, 30);
    Marks m3 = m1 + m2;
    m3.display();
}

/*
int calculator()
{
    int a;
    int b;

    int sum;
    int sub;
    int mul;
    int divide;

    cout << "Enter the value of first number :";
    cin  >> a ;

    cout << "Enter the second number :";
    cin >> b ;

    sum = a+b;
    cout << "The addition of the number is :" << sum << endl;

    sub = a-b;
    cout << "The subtraction of the number is :" << sub << endl;

    mul = a*b;
    cout << "The multiplication of the number is :" << mul << endl;

    divide = a/b;
    cout<<"The division of the number is : "<< divide << endl;

    cout<<"\n";


}

int comapre()
{
    int a;
    int b;
    cout<<"Enter the First Number :";
    cin>>a;
    cout<<"Enter the second Number :";
    cin>>b;

    if(a>b){
        cout<<"Number First is Greater Than Second";
    };
    if (b>a){
        cout<<"Number Second is Greater Than First";
    };
    if (a==b){
        cout<<"Both the Numbers are same";
    }
}*/



/*
int age()
{
    int current_year;
    int year_birth;

    cout<<"Enter the current year:";
    cin>>current_year;

    cout<<"Enter the year of birth : ";
    cin>>year_birth;

    cout<<"Your current age is :"<< current_year - year_birth<<endl;



}

int main()
{
    /*cout << "My name is Shlok \n " ;
    cout<<"Hello World!\n";
    cout<<"\n";

    calculator();
    comapre();
     age();






    return 0;}*/
/*
    int main()
    {
        string name;
        int age;
        cout<<"Plz enter ur name : \n";
        cin>> name;

        cout<<"Plz enter your age : \n";
        cin>>age;

        cout<<  "Sir " << name << " your age is " <<age <<endl;
        return 0;
    }*/
/**
class Name
{
private:
    string name;

public:
    Name(string z){
    se(z);
    }
    void se(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Name obj("My name is Shlok \n");
    cout<<obj.getName();

    Name obj2("tony");
    cout<<obj2.getName();

}**/
/**
int main()
{
    for ( int x=1; x<=10;x=x+1)
    {
        cout<<x<<endl;
    }
}*/
/**
void name()
{
    int a=1;
    int b;

    while (b!=1)
    {
        cout<<"shlok"<<a<<endl;
        a++;
        name();

    }
}
int main()
{
    name();
}*/


/**
int factorial(int x)
{
    if ( x ==1)
    {
        return 1;
    }
    else
    {
        return x *factorial(x-1);
    }
}
int main()
{   int y;
    cout<<"Enter the number for finding factorial: "<<endl;
    cin>>y;

    cout<<"The factorial of "<<y<<" is: "<<factorial(y)<<endl;

}
**/
/**
int main()
{
    double r;
    cout<<"Enter the Radius of circle: "<<endl;
    cin>>r;

    double area;
    area = 3.14*(r*r);
    cout<<"The area is :"<<area<<endl;
}**/
/**
int main()
{
    double l;
    double b;
    cout<<"Enter the length of rectrangle:";
    cin>>l;

    cout<<"Enter the breadth of rectrangle: ";
    cin>>b;

    double area;
    area = l*b;
    cout<<"The area of rectrangle is :"<<area<<endl;

}
**/
