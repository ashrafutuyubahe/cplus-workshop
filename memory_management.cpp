#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	//	memory allocation in c++
	
	int *ptr;
	
	ptr= (int*)malloc(sizeof(*ptr));
	
	*ptr=2;
	
	cout << ptr << endl;
	cout << *ptr <<endl;
	cout << "we gonna learn memory management" << endl;
	
	
return 0;
}