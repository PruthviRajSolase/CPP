
#include <iostream>

using namespace std;

// In Unions at a time only one data can be obtained 
// This is used when only one data is used at a given time so that less memory can be used

union student
{
   int age;
   //string branch;
};


int main()
{    
    union student rohan;
    rohan.age = 18;
    cout<<rohan.age;
    
    return 0;
}
