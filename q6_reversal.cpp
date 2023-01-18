#include<iostream>

using namespace std;

int main(){
    int num,count,c;
    cout<<"Enter number";
    cin>>num;
    for(int i=0;num!=0 &&num>0;i++){
        c=num%10;
        cout<<c<<endl;
        
        num=num/10;
    }
    return 0;
}
