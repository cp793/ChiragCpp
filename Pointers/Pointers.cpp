#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int *ptr = &a;
    int *P = new int(40);
    cout<<"The value of a is: "<<*ptr<<endl;
    cout<<"The value at address P is: "<<*P <<endl;//This will show value at P
    cout<<"The value at address P is: "<<&P <<endl;//This will show address of pointer P itself
    cout<<"The value at address P is: "<<P <<endl;// This will show address stored at p

//Pointer to Pointer 
int *b = &a;
int **c = &b;
cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;
cout<<"The value at address c is "<<*c<<endl;
cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
return 0;
}