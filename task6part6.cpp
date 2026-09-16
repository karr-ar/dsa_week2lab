#include <iostream>
using namespace std;
int main(){
    int rows = 3;
    int cols = 2;

    int ** marks = new int*[rows];

    *(marks+0) = new int[cols];
    *(marks+1) = new int[cols];
    *(marks+2) = new int[cols];

    *(*(marks+0)+0)= 60;  //marks[0][0]
    *(*(marks+0)+1)= 70;  //marks[0][1]

    *(*(marks+1)+0)= 12;  //marks[1][0]
    *(*(marks+1)+1)= 99;  //marks[1][1]

    
    *(*(marks+2)+0)= 22;  //marks[2][0]
    *(*(marks+2)+1)= 33;  //marks[2][1]

    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"marks["<<i<<"]["<<j<<"] ="<<*(*(marks+i)+j)<<endl;
        }
    }

    return 0;
}