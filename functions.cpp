#include <iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}

void hello(){
    cout<<"You have got the sum right there"<<endl;
}

int main()
{
    int num1,num2;
    cout<<"Enter num1"<<endl;
    cin>>num1;
    cout<<"Enter num1"<<endl;
    cin>>num2;
    
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    hello();
    
    return 0;
}
