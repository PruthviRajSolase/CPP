#include <iostream>
using namespace std;

struct student
{
    int age;
    int roll_no;
    string Branch;
};

int main()
{
    struct student pruthviraj;
    pruthviraj.age = 18;
    pruthviraj.roll_no = 50;
    pruthviraj.Branch = "IT";

    cout<<"The Data for the student Pruthviraj is"<<endl;
    cout<<"age: "<<pruthviraj.age<<endl;
    cout<<"roll_no: "<<pruthviraj.roll_no<<endl;
    cout<<"Branch: "<<pruthviraj.Branch<<endl;
    
    return 0;
}
