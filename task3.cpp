#include <iostream>
int main(){
    int list[5]={3,6,9,12,15};
	int *pArr= list;
// here im using pointer arithmetic 
//+i will move the pointer by multiples of int cuz pointer is of type int
    for(int i=0;i<5;i++){
        std::cout << *(pArr+i) <<std::endl;
    }

    return 0;
}