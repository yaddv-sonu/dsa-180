/*

5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z

*/

# include<iostream>
using namespace std;
int main(){
    char name='A';
    char small='a';
    while (name <= 'Z')
    {
        cout<<name<<" ";
        name++;

    }
    cout<<endl;

    while (small<='z')
    {
        cout<<small<<" ";
        small++;
    }
    
    

    return 0;
}