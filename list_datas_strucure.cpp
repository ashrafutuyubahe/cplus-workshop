#include<iostream>
#include<list>

using namespace std;

int main(){
 //list in c++
 
 list<int> studGrades{12345,2345,234};
 
 for(int grade: studGrades){
 	cout << grade<<endl;
 }
	
	return 0;
	
	
}




