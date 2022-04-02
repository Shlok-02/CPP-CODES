#include<iostream>
#include<string>
using namespace std;
/*
int celcius()
{
    int temp;
    cout<<"Enter the degree celcius temp :";
    cin>>temp;
    cout<<"The farhenit conversion is :"<< ( (temp *(9/5))+32 )<<endl;


}
int farhenite()
{

    int temp;
    cout<<"Enter the degree farhenite temp :";
    cin>>temp;
    cout<<"The celcius conversion is :"<< ( (temp - 32)*(5/9) )<<endl;

}


int main()
{

    int choice;
    cout<<"Choose from the following\n 1.Celcius to farhenite \n 2.Farhenite to Celcius \n";
    cout<<"Enter your choice:";
    cin>>choice;
    if (choice==1){
        cout<<celcius();
    }
    if(choice==2)
    {
        cout<<farhenite();
    }

    return 0;
}*/

/*
class number
{
public :
    int compare()
    {
        int a ;
        int b ;
        cout<<"enter the number of choice : \n";
        cin>>a;

        cout<<"enter the number of choice : \n";
        cin>>b;

        cout<<"Sum is :"<<a+b<<endl;
    }
};

int main()
{
    number cat;
    cat.compare();
    return 0;

}*/
/*
class name
{
public:
    void interest()
    {
        cout<<"My Interest Is in coding";

    }
};

int main()
{

    name foot;
    foot.interest();
    return 0;
}*/

class coding
{
public:
    void types(string x){
        name = x;
    };
    string gettypes(){
    return name;
    }


private:
    string name;
};

int main()
{

    coding cpp;
    cpp.types("object oriented \n procedural \n functional programming");
    cout<<cpp.gettypes();
    return 0;
}

