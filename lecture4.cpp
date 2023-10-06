#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;

    cout<<"Input 2 integers a and b : ";

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    //statement a>b;
    cout<<((a>b)&&(c>d))<<endl;

    cout<<((a>b)||(c>d))<<endl;

    float a,b;
    cout<<"Give 2 floating point numbers as input: "<<endl;
    cin>>a>>b;
    if(a>0.01 && b>a){
        cout<<"The condition in if statement is correct."<<endl;
    }
    else{
        cout<<"The condition is false."<<endl;
    }

    
}

