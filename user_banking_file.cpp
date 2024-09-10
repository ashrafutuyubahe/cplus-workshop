 
#include<stdio.h>
#include<string.h>
# define MAX_LENGHT 40





 void writeToFile( File *fptr, struct *fileDetails){
  	   
  struct fileDetails storeFileDetails;  
  fprintf(fptr,storeFileDetails);  
  fclose(fptr);
  
 	
 }
 
 
 void readAccountDetailsFile( struct *fileDetails){
 	   struct fileDetails dataFromAccount_detailsfile; 
 	File FileOpenPtr= fopen("account_details.txt","r");
 	
 	fgets(dataFromAccount_detailsfile,100,dataFromAccount_detailsfile);
 	
 	char retrievedUserName[50]=  dataFromAccount_detailsfile.userName;
 	
 	double retrievedAccountNumber= dataFromAccount_detailsfile.accountNumber;
 	
 	printf(" your user name is  %s   and your account number is %d",retrievedUserName,retrievedAccountNumber);
	 	
   fclose(FileOpenPtr);
    
 	
 }

  void printOnConsole();
  
  struct fileDetails{
  	  char userName[40]; 	  
  	   double accountNumber; 	
  };
  
 
  
  
  

int main(){
  char userName[MAX_LENGHT];
  int userInput;
  double accountNumber;
 

printOnConsole();

FILE *fptr=  fopen("account_details.txt","w");


switch(userInput){
	
	case 1:
		createAccount(&userName,&accountNumber);
     	writeToFile(fptr,&fileDetails);
		break;
	case 1:				
	  readAccountDetailsFile();
		break;
	default:
	  printf("invalid choice");
}
	
	
	return 0;
}

void printOnConsole(){
	 printf("1.Create account \n");
	 printf("2.view account details \n"); 
	
	
}

void createAccount(char *userName, double *accountNumber, struct *fileDetails){
 
	
    printf("Enter your User Name:  \n");
    scanf("%s",userName);
   
    
       printf("Enter your Account Number: \n");
     scanf("%lf",accountNumber);
     
       struct fileDetails details;
       
       details.accountNumber= *accountNumber;
       details.userName= *userName;   
    
      
     printf("you have successfully created account\n %s and %lf  are your account credentials and all data are documented in a file  \n",userName,*accountNumber); 


 }
 
 
 


