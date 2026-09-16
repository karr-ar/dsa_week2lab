#include <iostream>
using namespace std;
int main(){
    int n = 3;
    int* values = new int[n];
    for (int i = 0; i < n; i++)
        cin >> values[i];
    
    cout<<"Displaying:"<<endl;
    for(int i=0;i<n;i++){
        cout<<values[i]<<endl;
    }
    delete []values;
    values = nullptr;
    return 0;

}