#include<iostream>

using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks out of 100\n";
    cin>>marks;
    if(marks>90){
        cout<<"Excellent";
    }
    if(marks>80 && marks<= 90){
        cout<<"Good";
    }
    if(marks>70 && marks<=80){
        cout<<"Fair";
    }
    if(marks>60 && marks<=70){
        cout<<"Meets expectations";
    }
    if(marks<=60){
        cout<<"below par";
    }
    return 0;
}
