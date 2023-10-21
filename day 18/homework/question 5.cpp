/*
5: Print “Hello Coder Army” n times using Function.

*/

# include<iostream>
using namespace std;

void print(int n){

    for(int i=0; i<=n; i++){
        cout<<"hello coder army"<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    print(n);
    return 0;
}