/* print the pattern 
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5


*/

# include <iostream>
using namespace std;

int main(){

 int row, col;
  
  for(int row=1; row<=5; row=row+1){
    for(int col=1; col<=5; col=col+1){
        cout<<row<<" ";
    }

    cout<<endl;

  }


    return 0;
}


