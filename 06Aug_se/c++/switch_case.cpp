#include<iostream>
using namespace std;
int num1,num2;

void addition()
{
    
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;
    cout<<"Addition:"<<num1+num2;

}

void subtraction()
{
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;
    cout<<"Subtraction:"<<num1-num2;
}

void multiply()
{
        cout<<"Enter number 1:"<<endl;
        cin>>num1;
        cout<<"Enter number 2:"<<endl;
        cin>>num2;
        cout<<"Multiplication"<<num1*num2;
}
void division()
{
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;
    cout<<"Division"<<num1/num2;
}

int main()
{
    // int num1,num2;
    int choice;

    cout<<"========================="<<endl;
    cout<<"Press 1 for Addition"<<endl;
    cout<<"Press 2 for Subtraction"<<endl;
    cout<<"Press 3 for Multiplication"<<endl;
    cout<<"Press 4 for Division"<<endl;
    cout<<"========================="<<endl;

    cout<<"Enter Your Choice:"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiply();
        break;
    case 4:
        division();
    default:
        cout<<"Error! Invalid Choice";
        break;
    }
}
