#include<iostream>
using namespace std;

	  struct patronDetails{
	  	
	 string patronName;
	  int patronId;
	  string patronAddress;
	  	
	  };
class Patron{
	
//	private:
//	  string patronName;
//	  int patronId;
//	  string patronAddress;
//	  

	  
	  //setters
	   
//	  public void setpatronDetails(int *patronId, string *patronName, string *patronAdress){
//	  	
//	  	struct patronDetails setdetails;
//	  	 setdetails.patronAddress= *patronAdress;
//		   setdetails.patronId=*patronId;
//		   setdetails.patronName=*patronName;
//		   
//	  	
//	  }	


private:
		struct patronDetails setdetails;
 public:
   void setPatronName( const string  &patronName){  	
  		setdetails.patronName= patronName;
  		
  }
  
   void setPatronAddress(string &patronAddress){  
  	setdetails.patronAddress=patronAddress;
  	
  } 
  
  
   void setPatronId( int &patronId){
   	setdetails.patronId=patronId;
  }
	   
	 	
	  
	  
	  
	  //getters
   void getPatronDetails() const{
	         
     cout<< " patron name: " << setdetails.patronName   << ","

     << "patron id: " << setdetails.patronId  << " and address is:  " << setdetails.patronAddress << endl;    
	     
	  	
  }			
};



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
 
 
 void  promtToAddPatron( string &patronName,string &patronAddress,int &patronId){
 	 Patron patronObj;
 	 
 	
    cout << "1. Add a patron  name:  \n";
    cin>> patronName;
    patronObj.setPatronName(patronName); 
    cout << "2.  Add patron ID:  \n";
    cin>> patronId;
     patronObj.setPatronId(patronId);
    cout << "3. Add patron address:  \n";
    cin>>patronAddress;
    patronObj.setPatronAddress(patronAddress);
    
   cout << "Patron added successfully:\n";
    patronObj.getPatronDetails();
   
   
 };
 

int main(){
	int userChoice;	
	cout << "     ********************Library management system*************************" <<endl;
	cout << " ";
	printOnConsole(&userChoice);
	struct patronDetails setdetails;
	Patron patronClass;
	
	
	
    switch(userChoice){
    	
    	case 1:
    	promtToAddPatron(setdetails.patronName,setdetails.patronAddress,setdetails.patronId);    	
    	break;
    	
    	case 2:
    	cout<< "sdgf";
    	break;
    	
    	case 3:
    	cout<< "sdgf";
    	break;
    	
    	case 4:
    	cout<< "sdgf";
    	break;
    	
    	case 5:
    	cout<< "sdgf";
    	break; 	
    	
    	
    	
    	default:
         cout<< " your choice is incorrect";
	}
	
	
	
	return 0;

  }

