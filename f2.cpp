#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1,num2;
    cout<<"Enter the numbers"<<endl;
    cin>>num1>>num2;

    cout<<"Before swaping num1 is "<<num1<<" and num2 is "<<num2;

    swap(&num1,&num2);
    cout<<"\nAfter swaping num1 is "<<num1<<" and num2 is "<<num2;
    
    return 0;
}
