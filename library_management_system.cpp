#include<iostream>
using namespace std;




 void printOnConsole( int *userChoice){
 	cout << "  __________________Welcome to the Library Management System_______________  " <<endl <<endl;
	  	
    cout << "Please choose an option:  \n";
    cout << "1. Add Patron\n";
    cout << "2.  Add Book \n";
    cout << "3. ACheck Out Book\n";
    cout << "4. Return Book\n"; 
	cout << "5. Exit\n";
	
	cin>> *userChoice;


    
	 
 }

int main(){
	int userChoice;	
	cout << "     ********************Library managemet system*************************" <<endl;
	cout << " ";
	printOnConsole(&userChoice);
	
cout<< userChoice;
	
	
	
	
	
	
	
	
	return 0;
}

