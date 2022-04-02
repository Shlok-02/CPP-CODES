#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World!"<<endl;
    cout<<"My nmae is Shlok"<<endl;
}


/**
int main()
{
    int name[5]={1,23,4,67,9};
    cout<<name[1]<<endl;
}*/
/**
int main()
{
    int name[9];
    for (int x ; x<9; x++)
    {
        name[x]=9;
        cout<<x<<"--------"<<name[x]<<endl;

    }
}*/
/**
int main()
{
    int add[4]={23,89,90,9};
    int sum;


    for (int x = 0; x<5;x++)
    {
        sum = sum + add[x];
    cout<<sum<<endl;
    }
}*/
/**
void displayarray(string nameArray[], int sizeofArray)
{
    for (int x ; x<sizeofArray ; x++){
        cout<<nameArray[x]<<endl;
    }
}
void display(int arrayc[],int sizeofarray)
{
    for (int x ; x<sizeofarray;x++)
    {
        cout<<arrayc[x]<<endl;
    }
}
int main()
{
   /* string name[2]={"a","b"};

    displayarray(name,2);

    int you[3]={34,98,90};
    display(you,3);

}
**/
/**
int main()
{
    int Array[2][3]={{1,2,3},{4,5,6}};
    cout<<Array[0][1]<<endl;
}**/
/**
int main()
{
    int name[3] [3]={{1,2,3},{23,45,56},{67,78,89}};
     for (int row=0; row<3;row++){
        for(int column=0 ; column <3; column++)
        {
            cout<<name[row][column]<<" ";
        }
        cout<<endl;
     }

}**/
/**
int main()
{
int fi;
int fish;
int *sh;
sh=&fish;
    int *pointer;
    pointer = &fi;

 cout<<sh<<endl;
    cout<<pointer<<endl;
}**/
/**
void passByreference(int x);
void passByvalue(int *x);

int main()
{
    int number1=98;
    int number2=78;

    passByreference(number1);
    passByvalue(&number2);

    cout<<"The number 1 value is:"<<number1<<endl;
    cout<<"The number 2 vvalue is:"<<number2<<endl;


}
void passByreference(int x)
{
    x=89;
        }

void passByvalue(int *x)
{
    *x=89;
}
**/
/**
int main()
{
    int fish;
    cout<<&fish<<endl;

    int *shark;
    shark = &fish;
    cout<<shark<<endl;
}**/
/**
int main()
{
    string c;
    cout<<sizeof(c)<<endl;
}**/
/**
int main()
{
    int a1[2][3]={{1,2,3},{45,89,90}};

    for (int i=0; i <3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<a1[i][j];

        }
        cout<<endl;
    }
}**/
/**
void passbyreference(int *x)
{
    *x=67;
}
void passbyvalue(int y)
{
    y=90;
}
int main()
{
int number1=90;
int number2=89;

    passbyreference(&number1);
    passbyvalue(number2);

    cout<<"Number 1:"<<number1<<endl;
    cout<<"Nnumber 2:"<<number2<<endl;
}
**/
