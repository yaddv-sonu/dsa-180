/*
2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

*/

# include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the value of number"<<endl;
    cin>>number;
    if(number%2==0 && number>=0) {
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }

    return 0;
}