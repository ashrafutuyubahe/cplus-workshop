 
#include<stdio.h>
#include<string.h>
# define MAX_LENGHT 40

  struct fileDetails{
  	  char userName[40]; 	  
  	   double accountNumber; 	
  };




 void writeToFile( FILE *fptr, struct fileDetails *fileDetails){
 	  if(fptr==NULL){
 	  	 printf("Error opening file!\n");
        return;
	   }
  	   
  
    fprintf(" user name : %s  ",fileDetails->userName);
    fprintf("  account number : %d  ",fileDetails->accountNumber);   
  fclose(fptr);
  
 	
 }
 
 
 void readAccountDetailsFile( struct fileDetails *fileDetails){
 	
 	   struct fileDetails dataFromAccount_detailsfile; 
 	   
 	   
 	File FileOpenPtr= fopen("account_details.txt","r");
 	
 	 if(FileOpenPtr==NULL){
 	  	 printf("Error opening file!\n");
        return;
	   }
 	
 	
          fscanf("user name: %s",dataFromAccount_detailsfile.userName);   
		   fscanf(" account number: %s",dataFromAccount_detailsfile.accountNumber);    // 	fgets(dataFromAccount_detailsfile,100,dataFromAccount_detailsfile);
 	
 	printf(" your user name is  %s   and your account number is %d",dataFromAccount_detailsfile.userName,dataFromAccount_detailsfile.accountNumber);
	 	
   fclose(FileOpenPtr);
    
 	
 }
 
  
  

void createAccount(char *userName, double *accountNumber, struct fileDetails *fileDetails){
 
	
    printf("Enter your User Name:  \n");
    scanf("%s",userName);
   
    
       printf("Enter your Account Number: \n");
     scanf("%lf",accountNumber);

      
     printf("you have successfully created account\n %s and %lf  are your account credentials and all data are documented in a file  \n",userName,*accountNumber); 


 }
 
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

 
 


