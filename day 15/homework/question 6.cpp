/*
Give a number n, find if it is prime or not, use a while loop and break here to solve it.

*/

# include<iostream>
# include<cmath>
using namespace std;
  
bool is_prime(int n){
    if(n==1){
        return false;
    }
    int i=2;
    while (i<=sqrt(n))
    {
        if (n%i==0)
        {
            return false;
        }
        i++;
        
    }
    return true;
    
}
 

 

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(is_prime(n)){
        cout<<"n is prime number";

    }
    else{
        cout<<"n is not prime";
    }
    return 0;
}