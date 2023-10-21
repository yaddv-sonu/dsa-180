/*
Reverse a number n using Function, Constraints: -5000<=n<=5000

*/

# include <iostream>
using namespace std;
int reverse(int n){
    if(n<1){
        return false;
    }

    int ans=0,rem;
    while(n>0){
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }

    return ans;
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    cout<<reverse(n);

    return 0;
}