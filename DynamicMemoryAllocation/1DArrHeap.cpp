#include<iostream>
using namespace std;

int main(){
	cout<<"------------------------------------"<<endl;
    int size;
	cout<<"Enter size of 1D Array: ";
	cin>>size;
    //dynamic memory allocation of 1D Array / creating 1D Array
	int* arr1 = new int[size];

	cout<<"------------------------------------"<<endl;
	//taking elements in 1D Array
    cout<<"Enter Elements in 1D Array: ";
	for(int i=0; i<size; i++){
		cin>>arr1[i];
	}

    cout<<"------------------------------------"<<endl;
    //displaying elements of 1D Array
    cout<<"Elements of 1D Array: ";
    for (int i = 0; i < size; i++)
	{
		cout<<""<<arr1[i]<<" ";
	}
	cout<<"------------------------------------"<<endl;

	//deallocating 1D Array
	delete arr1;


	return 0;
}
