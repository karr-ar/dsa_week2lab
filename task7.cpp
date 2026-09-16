#include <iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter number of students:";
    cin>>n;
    //dynamically allocating array of size n
    int *marks = new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter marks#"<<i+1 << ":";
        cin>>*(marks+i);
    }
    //taking new marks as input
    int additionalMarks;
    cout<<"Enter additional marks:";
    cin>>additionalMarks;
    // creating new array dynamically to store new marks
    int *moreMarks = new int[n+1];
    //copying values from previous into new array
    for(int i=0;i<n;i++){
        *(moreMarks+i)= *(marks+i);
    }
    //storing new marks into last position of new array
    moreMarks[n]= additionalMarks;
    //de-allocating old array
    delete []marks;
    // allocating previous pointer to newly created array
    marks = moreMarks;
    //incrementing size variable
    n++;
    //displaying all values
    for(int i=0;i<n;i++){
        cout<<"marks#"<<i+1<<":"<<marks[i]<<endl;
    }

    //releasing final block
    delete []marks;
    marks = nullptr;


    moreMarks = nullptr;

    return 0;
}