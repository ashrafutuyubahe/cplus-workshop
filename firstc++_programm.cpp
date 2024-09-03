#include<iostream>
#include<cmath>
    using std::cout; //	 using namespace std  bcz  there are many entities for std;
    using std::cin;
//    using   std::string;
   
    
//  typedef std::string text_t;  //creating an alias  for std::string

//ways  of creatikng templates(using is most popular)	
  using numberDataType_t= int; ////  typedef int numberDataType_t;  
  using  text= std::string;

 

//using namespace for entities
namespace firstX{
  int x=3;
}

namespace secondX{
  int x=6;
}
  
int main(){
	
//	string name="brocode";
//	cout << name;
//	
//  int num1=2;
//  int num2=3;
//    
//  const  double pi=12.3;
//  float radius= 1.23;
//  int circumferece= (int) (pi* radius*radius);
//  cout<< circumferece << "\n";
//  
//making use of namespace

//  std::cout<< firstX::x << "\n" ; 
//    using namespace firstX;  
//    cout <<x << "\n";
    
//using the template of typedef

//numberDataType_t age=3;
//cout << age << "\n";
//  
//using the text template

//text greeting = "hello, my dear  c++ entusiasts"  " it's amazing";
//cout << greeting;
  
    
  
  //double declaration
  double price= 12.34;
  double jpa= 23.345;
  bool isEnough= true;
  
  
  //loops in c++
  
//  while(isEnough){
//  if(price>12){
//  std::cout << jpa << "\n";	
//  price-=0.004;
//    }
//    
//    isEnough= true;
//  }

  
  
  //string in c++
//   std::string name="Eric";
//   
//   for (int i=0;i<3;i++){
//   	
//   std::cout << "hello "<<"" << name;
//  
//   }
  
//  std:: cout<< price << "\n" << jpa;
  
//   char nameArray[3] ={"john","hackim","mary"};
//  int sum= num1+ num2;  
//	std::cout << sum << "\n";
//    std::cout << sum;


//tracking user intput in c++
//
//text userName;
//numberDataType_t  marks;
//cout << "Enter your  the  marks  you got this term:   ";
//cin >> marks ;
//
//cout <<"Enter your  full  name please: ";
//
////cin >> userName;
////reading the string with spaces and escaping the space left by integer buffer
//  std::getline(std::cin>> std::ws,userName);
//
//
//
//cout <<"your name is " <<userName << " and your marks is " <<marks ;

//w0rking with math function

double z= 23.45;
double m=2;
double P;

// P	= std::min(z,m);
// P = std::max(z,m);
//
// P= round(z);
// P = ceil(z);
// P =floor(z);
// P= abs(-23);
// P = sqrt(9);
// P= pow(2,3);
//cout<< P <<"\n";

//finding the hypothenus of right angles=d triangle

//double height;
//double base;
//double hypo;
//
//cout<< "Enter the heigth " << "\n";
//cin >> height;
//
//cout<< "Enter the base " << "\n";
//cin >> base;
//
//
//hypo= sqrt( pow(base,2) + pow(height,2));
//cout<< hypo <<"\n";
//


//simple c++ calculator

double num1;
double num2;
char inPutOperator;


cout<< "  "  <<"*********************Calculator***********************" << "\n" << "\n";

cout << "Hey what's up!!! how are you doing? Hope u are fine." << "\n " << "\n";

cout << "Pleae choose the operation u wanna make among  ( +,-,\ and *) : "  << "\n";
cin>>inPutOperator;

cout << "please Enter the first number : " << "\n" ;
 cin >> num1;
 
 cout << "please Enter the second number : " << "\n";
  cin >> num2;
 
 switch(inPutOperator){
  	case '+':
  
 	 cout<<  "the result of addition is " <<num1+ num2 << "\n"  "\n"  "\n";
 	 break;
 	 
 	 	case '-':
 	 cout<<  "the result of addition is " <<num1-num2  <<"\n"  <<"\n" <<"\n";
 	 break;
 	 
 	 	case '*':
 	 cout<<  "the result of multiplication is " <<num1*num2 <<"\n"  <<"\n" <<"\n";
 	 break;
 	 	case '/':
 	 cout<<  "the result of division is " <<num1/ num2;
 	 break;
 	 
 	 default:
 	 	cout<< "nothing to show bcz  the  input don't much";
 	 
 }
 
 
 cout << "\n" <<"  *************************** End Of Calculator************";




	
	
 return 0;	
}