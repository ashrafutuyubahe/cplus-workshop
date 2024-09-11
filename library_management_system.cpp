#include<iostream>
using namespace std;

	  struct patronDetails{
	  	
	 string patronName;
	  int patronId;
	  string patronAddress;
	  	
	  };
	  
	  struct bookDetails{
	  	
	  	string bookTitle;
		 string bookAuthor;
		 string bookISBN;
		 bool isAvailable= true;
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


class LibraryItem {
public:
    virtual void checkout() = 0;
    virtual void returnItem() = 0;
};



class Book : public LibraryItem {
private:
    string bookTitle;
    string bookAuthor;
    string bookISBN;
    bool isAvailable = true;

public:
    void checkout() override {
        if (isAvailable) {
            cout << "Checking out book: " << bookTitle << endl;
            isAvailable = false;
        } else {
            cout << "Book is not available" << endl;
        }
    }

    void returnItem() override {
        cout << "Returning book: " << bookTitle << endl;
        isAvailable = true;
    }

    void setBookTitle(const string &title) {
        bookTitle = title;
    }

    void setBookAuthor(const string &author) {
        bookAuthor = author;
    }

    void setBookISBN(const string &isbn) {
        bookISBN = isbn;
    }

    void getBookDetails() const {
        cout << "Book title: " << bookTitle
             << ", Author: " << bookAuthor
             << ", ISBN: " << bookISBN << endl;
    }
};

class Magazine : public LibraryItem {
public:
    void checkout() override {
        cout << "Checking out magazine" << endl;
    }

    void returnItem() override {
        cout << "Returning magazine" << endl;
    }
};


void promptBookDetails(string &bookTitle, string &bookAuthor, string &bookISBN) {
    Book setBookDetails;

    cout << "1. Add a Book title: \n";
    cin >> bookTitle;
    setBookDetails.setBookTitle(bookTitle);

    cout << "2. Add book author: \n";
    cin >> bookAuthor;
    setBookDetails.setBookAuthor(bookAuthor);

    cout << "3. Add book ISBN: \n";
    cin >> bookISBN;
    setBookDetails.setBookISBN(bookISBN);

    cout << "Book added successfully:\n";
    setBookDetails.getBookDetails();
}





 void printOnConsole( int *userChoice){
 	cout << "  __________________Welcome to the Library Management System_______________  " <<endl <<endl;
	  	
    cout << "Please choose an option:  \n";
    cout << "1. Add Patron\n";
    cout << "2.  Add Book \n";
    cout << "3. Check Out Book\n";
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
	Book bookClass;
	struct bookDetails detailOfBook;
	
	
	
    switch(userChoice){
    	
    	case 1:
    	promtToAddPatron(setdetails.patronName,setdetails.patronAddress,setdetails.patronId);    	
    	break;
    	
    	case 2:
    	promptBookDetails(detailOfBook.bookTitle,detailOfBook.bookAuthor,detailOfBook.bookTitle);
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

