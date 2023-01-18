#include<iostream>

using namespace std;

int main(){
    int num,count;
    cout<<"enter number\n";
    cin>>num;
    for(int i=0;num!=0 && num>0;i++){
        num=num/10;
        count=count +1;
    }
    cout<<count;

    return 0;
}
