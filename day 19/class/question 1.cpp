/*
convert samll leter to big latter of
*/

#include <iostream>
using namespace std;

char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cout << "enter the name" << endl;
    cin >> name;
    cout <<convert(name);

    return 0;
}