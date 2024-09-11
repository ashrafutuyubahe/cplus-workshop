#include<iostream>
#include<vector>

using namespace std;

int main(){
 
  vector<string> studNames={"john","luck","mathew"};
  
   	 for(string name: studNames){
   	   	cout << name <<endl;
	}
	
	for(int a=0;a<2;a++){
		cout<< "Enter  the" <<a+1  <<" names of name list" << endl;
    	 getline(cin,studNames[a]);
		}
	   cout << "your name list is: " <<endl;
	   
	  for(string name: studNames){
   	   	cout << name <<endl;
	}
	
	
	return 0;
}
