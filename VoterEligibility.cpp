#include <iostream>
using namespace std;

int main ()
{
    int age=0;
    cout<<"\n Welcome to the Voter Checkpoint!"<<"\n Enter your age to check if you are eligible for voting or not.\n";
    cin>>age;
    if (age>=18)
    {
        cout<<"\n Congratulations! You are eligible for voting. :)";
    }
    else
    {
        cout<<"\n Sorry you are not eligible to vote. Try again after "<<18-age<<" years.";
    }
    return (0);
}
