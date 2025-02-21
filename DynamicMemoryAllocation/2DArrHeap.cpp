#include<iostream>
using namespace std;

int main(){
	int rows,coloms;
	cout<<"------------------------------------"<<endl;
	cout<<"Enter Rows for 2d Array: ";
	cin>>rows;
	cout<<"Enter Coloms for 2d Array: ";
    cin>>coloms;


    //dynamic memory allocation of 2d Array / creating 2D Array dynamically
	int** arr2 = new int*[rows];
	
    for (int i = 0; i < rows; i++)
    {
    	arr2[i] = new int[coloms];
    }


	cout<<"------------------------------------"<<endl;
    //taking elements in 2D Array
    cout<<"Enter Values of 2D Array:"<<endl;
    for(int i = 0; i<rows; i++){
    	for (int j = 0; j < coloms; j++)
    	{
           cin>>arr2[i][j];
    	}
    }

	cout<<"------------------------------------"<<endl;
    //displaying 2D Array
    cout<<"2D Array:"<<endl;
    for(int i = 0; i<rows; i++){
    	for (int j = 0; j < coloms; j++)
    	{
           cout<<" "<<arr2[i][j];
    	}
    	cout<<endl;
    }
    cout<<"------------------------------------"<<endl;


    //deallocating 2D Array
    delete[] arr2;
return 0;
}