#include<iostream>

using namespace std;

int main(){
    int n,num;
    int m=0;
    cout<<"Enter the number of inputs\n";
    cin>> n;
    for(int j=1;j<=n;j++){
        cout<<"enter num"<<j;
        cout<<endl;
        cin>> num;
    if(num==0||num==1){
        m==1;
    }
    for(int i=2;i<(num/2);i++)
    {
        if(num %i==0){
            m=1;
            break;
        }
    
    }
    if(m==1){
        cout<<"it is not a prime number";
        cout<<endl;

    }
    else if(m==0){
        cout<<"it is a prime number";
        cout<<endl;
        
    }
    
    }

        
        
    return 0;
}
