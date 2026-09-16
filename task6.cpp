#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of students:";
    cin>>rows;
    cout<<"Enter number of subjects:";
    cin>>cols;

    int *arr = new int[5];
    delete []arr;
    //double pointer initialized
    int **marks = new int*[rows];
    for(int i=0;i<rows;i++){
        *(marks+i)= new int[cols];
    }

    //taking input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"Enter marks(0-100) for student#"<<i+1<<" , Subject#"<<j+1 <<":";
            cin>> *(*(marks+i)+j);
        }
    }
    //displaying matrix
    cout<<"matrix:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<< *(*(marks+i)+j) << " ";
        }
        cout<< endl;
    }

    //displaying each students total
    cout<<"displaying each students total:" <<endl;
    int maxTotal =0;
    int studentWithMaxTotal =1;
    for(int i=0;i<rows;i++){
        cout<<"student#"<<i+1<<"'s total = ";
        int total =0;
        for(int j=0;j<cols;j++){
            total+= *(*(marks+i)+j);
        }
        cout<<total <<endl;
        if(total> maxTotal){
            maxTotal= total;
            studentWithMaxTotal = i+1;
        }
    }
    cout<<"top student:"<< studentWithMaxTotal<<endl;
    cout<< "top students marks :" << maxTotal<<endl;

    //deleting all rows
    for(int i=0;i<rows;i++){
        delete []*(marks+i);
    }
    //deleting row pointer array
    delete []marks;

}