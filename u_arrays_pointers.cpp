#include<iostream>
using namespace std;
int main()
{
    int value =90;
    int *nvalue = &value;
    cout<<"Original address"<<value<<endl;
    cout<<"Secondary address"<<nvalue<<endl;
}
