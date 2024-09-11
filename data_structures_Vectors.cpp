#include<iostream>
#include<vector>

using namespace std;

int main(){
 
 //vectors in c++
  vector<string> studNames={"john","luck","mathew"};
    string t_name;
  	
  
   	 for(string name: studNames){
   	   	cout << name <<endl;
	}
	
	
	for(int a=0;a<2;a++){
		cout<< "Enter  the" <<a+1  <<" names of name list" << endl;
		getline(cin,t_name);
            studNames.push_back(t_name);     //    	 getline(cin,studNames[a]);
		} 
	   cout << "your name list contain " <<studNames.size() <<" elements and here is list" <<endl;
	   
	  for(string name: studNames){
   	   	cout << name <<endl;
	}
	
	
	return 0;
}
