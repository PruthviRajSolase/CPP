#include <iostream>

using namespace std;

int main()
{
    int marks[]={20,13,19,32};
    int* p = marks;

    cout<<"The value of p is "<<p<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of p is "<<*(p+1)<<endl;
    cout<<"The value of p is "<<*(p+2)<<endl;
    cout<<"The value of p is "<<*(p+3)<<endl;

    return 0;
}
