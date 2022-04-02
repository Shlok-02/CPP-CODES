#include <iostream>
using namespace std;
class Data
{
private:
    string *first_name;
    string *last_name;
    int *age;
    int *roll_no;

public:
    Data(string fname, string lname, int iage, int iroll)
    {
        *first_name = fname;
        *last_name = lname;
        *age = iage;
        *roll_no = iroll;
    }
    void display()
    {
        cout << "Full name is :" << *first_name << " " << *last_name << " "
             << "Age is :" << *age << " "
             << "Roll no. is : " << *roll_no << endl;
    }
    ~Data()
    {
        delete first_name;
        delete last_name;
        delete age;
        delete roll_no;
        cout << "Destructor is used to de allocate the memories" << endl;
    }
};
int main()
{
    Data *student = new Data("Shlok", "Gangatirkar", 19, 153);
    student->display();
    delete student;
}
/*
class name
{

public:
    name()
    {
        int age;
        cout << "Constructor is used here" << endl;
    }
};
int main()
{
    name anil;
}
/*
class age
{
private:
    int age;
public:

    int setage(int value)
    {
        return age = value;
    }
       void displayage()
    {
    cout<< age <<endl;
    }
};
int main()
{
    age young;
    young.setage(23);
    young.displayage();
}
/*
class Data
{
public:
    string name;
    string surname;
    string Place;
    int age;
    int roll_no;
    void input();
};
void Data::input()
{
    cout<<"Enter the name :";
    cin>>name;
    cout<<endl;
    cout<<"Enter the surname : ";
    cin>>surname;
    cout<<endl;
    cout<<"enter your age : ";
    cin>>age;
    cout<<endl;
    cout<<"Enter your roll no : ";
    cin>>roll_no;

    cout<<endl;
     cout<<"Your full name is : "<<name <<" "<<surname<<" "<<" ; "<<"Age is :"<<age<<" "<<" ; "<<"Roll no. is : "<<roll_no<<endl;

}
int main()
{
    Data entry1;
    entry1.input();

    Data entry2;
    entry2.input();
}
/*
using namespace std;
class Human
{
public:
    string name;

    void display()
    {
        cout<<"Your Name is "<<name<<endl;
        /*
        cout<<"Enter your name ";
        cin>>name;
        cout<<"Your name is "<<name<<endl;
    }
};
int main()
{
    Human man;
    man.name="Shlok";

    man.display();
}
/*
class Humanbeing
{
private:
    int choice;
public:
    void selection()
    {
    cout<<"Enter ur choice";
    cin>>choice;
    cout<<choice;
    }
};
int main()
{
    Humanbeing man;
    man.selection();
cout<<endl;
//object using pointers
    Humanbeing *woman = new Humanbeing();
    woman->selection();

}
*/
