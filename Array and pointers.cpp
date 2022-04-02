
/*#include <iostream>
#include <string>
using namespace std;
class Human
{
protected:
    string name;
    //int age;
    //int roll_no;

public:
    void setName(string iname) { name = iname; }
};
/*
class Man : public Human
{
public:
    void display()
    {
        cout << "Name is " << name << endl;
    }
};*/
/*
int main()
{
    Human anil;
    anil.name("Jayraj");
}
*/












/*
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
/*
int main()
{
    cout << "enter the number" << endl;
    int num;
    cin >> num;
    factorial(num);

    cout << factorial(num) << endl;
}

int main()
{
    string name = "Shlok";
    string last_name = "Gangatirkar";
    string full_name = name + " " + last_name;
    cout << full_name;
}
//auto
/*
int main()
{
    auto number =10;
    cout<<number<<endl;
}
//Unions
/*
union employee
{
    int salary;
    int ID_num;
};

int main()
{
    employee e1;
    employee e2;
    e2.ID_num=908;
    e2.salary=0;
    e1.ID_num=90899;
    e1.salary=900;
    cout<<e1.ID_num<<endl;
    cout<<e2.salary<<endl;

    cout<<e2.ID_num<<endl;
}
*/
//Nested Structures

/*
struct Address
{
    int house_no;
    string house_name;
    string street;
};
struct Student_data
{
    int roll_no;
    string name;
    char gender;
    Address add;

};

int main()
{
    Student_data student;
    Student_data *studentptr;
    studentptr =&student;

    studentptr->roll_no=153;
    studentptr->name="Shlok";
    studentptr->gender ='M';

   studentptr->add.house_name="Abc";
   studentptr->add.house_no=90;
   studentptr->add.street="Jnb";

    cout<< studentptr->roll_no<<endl;
    cout<<studentptr->name<<endl;
    cout<<studentptr->gender <<endl;
    cout<<endl;
    cout<<studentptr->add.house_name<<endl;
    cout<<studentptr->add.house_no<<endl;
    cout<<studentptr->add.street<<endl;


}











//Function and arrow operator
/*
struct student {
    int rollno;
    char gender;
    string name;
    int age;
};


void display(student s);
void show(student *s);


int main()
{
    student jim= {12,'m',"Shlok",24};
    show(&jim);

    cout <<endl;

    display(jim);

    return 0;
}

void display(student s){
    cout << s.rollno <<endl;
    cout << s.gender <<endl;
    cout<<s.name<<endl;
    cout << s.age <<endl;
}

void show(student *s){
    cout << s->rollno <<endl;
    cout << s->gender <<endl;
    cout<<s->name<<endl;
    cout << s->age <<endl;


}
*/

//Arrow operator
/*
struct Student
{
    int rollno;
    string name;
    string gender;
    int number;
};
int main()
{
    Student anil;
    Student *shlokptr;
    shlokptr=&anil;

    anil.rollno=90;
    shlokptr-> name="Jenny";
    shlokptr->gender="M";
    anil.number=990;

    cout<<anil.name<<endl;
    cout<<shlokptr->rollno<<endl;
    cout<<shlokptr->gender<<endl;
    cout<<anil.gender<<endl;
}
*/
//Struct
/*
struct Studentdata
{
    int age;
    string name;
    int rollno;
    string email;
};
int main()
{
    Studentdata r, s ;
    s.age=17;
    s.name="Shlok";
    s.rollno=23;
    s.email="abc.gamil.com";

    r.name ="Rahul";
    r.age=18;
    r.rollno=78;
    r.email="bcd.gmail.com";
    cout<<"Name"<<" |"<<"Age"<<" | "<<"Roll no."<<" | "<<"Email"<<endl;
    cout<<endl;
    cout<<s.name<<" |"<<s.age<<" | "<<s.rollno<<"| "<<s.email<<endl;
    cout<<r.name<<" | "<<r.age<<" | "<<r.rollno<<"| "<<r.email<<endl;
}
*/
//printing specific range of numbers of arrays using functions
/*
void display(int *start,int *ends)
{
    for (int *ptr=start;ptr!=ends;ptr++)
    {
        cout<<*ptr<<endl;
    }
}
int main()
{
    int number[3]={11,22,33};
    display(number,number+3);
}
/*
int main()
{
    int number[3]={2,98,689};
    cout<<number[*number]<<endl;
    cout<<*(number+2);
}
*/
//Pass by Reference
/*
void display(int *ptr);
int main()
{
    int num =90;
    cout<<num<<endl;
    display(&num);
    cout<<num<<endl;

}
 void display(int *ptr)
 {
    *ptr = 790;
 }
*/

/*
// printing values of arrays
void    Array(int numberarray[],length);
{
    for(int i=1;i<=length;i++)
    {
        cout<<numberofarray[i]<<endl;
    }
}
int main()
{

}

*/

//Basics
/*
int main()
{
 int age1=98;
 string a="Hello";
 int *age1ptr;
age1ptr=&age1;

 string *aptr;
aptr=&a;

 cout<<"Age Memory Address"<<age1ptr<<" "<<age1<<endl;

 cout<<"String Memory Address"<<aptr<<" "<<a;
}
*/
