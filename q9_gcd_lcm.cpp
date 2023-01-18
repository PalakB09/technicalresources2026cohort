#include<iostream>

using namespace std;

int main(){
    int a,b,num1,num2,lcm,m;
    cout<<"Enter a(greater number)";
    cin>>a;
    cout<<"Enter b(smaller number)";
    cin>>a;
    num1=a;
    num2=b;
    while((a%b)>0){
        m=a%b;
        a=b;
        b=m;
    }
    cout<<"gcd is"<<b<<endl;
    lcm=(num1*num2)/b;
    cout<<"lcm is"<<lcm<<endl;
    
    return 0;
}
