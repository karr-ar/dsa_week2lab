#include <iostream>
void swapValue(int *pa, int *pb){
    //dereferencing a and storing it in temp variable
    int temp = *pa;
    // storing value of pb that its point to in the value pa to which pa is pointing
    *pa = *pb;
    //storing  temp into value pb is pointing to
    *pb = temp;
    return;
}
//overloaded
void swapValue(int **ppa, int **ppb){
    //double dereferencing a and storing it in temp variable
    int temp = **ppa;
    // doing same here just double dereference
    **ppa = **ppb;
    **ppb = temp;
    return;
}
int main(){
    int a= 10 , b = 20 ,* pa = &a , *pb = &b , **ppa= &pa , **ppb= &pb;
    std::cout<<"Before swap : a ="<< a<<" , b="<<b<<std::endl;
    swapValue(ppa,ppb);
    std::cout<<"After swap : a ="<< a<<" , b="<<b<<std::endl;
    return 0;
}