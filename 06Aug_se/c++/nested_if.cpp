#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,m4;
    int total;
    float per;

    cout<<"Enter marks of subject 1:-";
    cin>>m1;
    cout<<"Enter marks of subject 2:-";
    cin>>m2;
    cout<<"Enter marks of subject 3:-";
    cin>>m3;
    cout<<"Enter marks of subject 4:-";
    cin>>m4;
    
    if(m1>=40 && m2>=40 && m3>=40 && m4>=40)
    {
        total = m1+m2+m3+m4;
        cout<<"Total:-"<<total<<endl;
        per = total/4;
        cout<<"Percentage:-"<<per<<"%"<<endl;

        if(per>=70){
        cout<<"Result:A+";
        }

        else if(per>=60){
        cout<<"Result:A";
        }

        else if(per>=50){
        cout<<"Result:B";
        }

        else if(per>=40){
        cout<<"Result:C";
        }
    }
    else{
        cout<<"Result:FAIL";
    }

    return 0;
}
