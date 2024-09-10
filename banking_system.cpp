#include<stdio.h>
#include<string.h>
# define MAX_LENGHT 40

void printOnConsole(){
	 printf("1.Create account \n");
	 printf("2.Deposit Money \n");
	 printf("3. Withdraw Money \n");
	 printf("4.Check balance. \n"); 
	 printf("5.Exit. \n"); 
	
}

 void createAccount(char *userName, double *accountNumber){
 
	
    printf("Enter your User Name:  \n");
    scanf("%s",userName);
   
    
       printf("Enter your Account Number: \n");
     scanf("%lf",accountNumber);
    
      
     printf("you have successfully created account\n %s and %lf  are your account credentials.  \n",userName,*accountNumber); 


 }


 double depositMoney(double *depositAmount,double *balance){
 	printf("Enter the amount you wanna deposit:   \n");
 	scanf("%lf",depositAmount);
 	
 	double balanceInNumber= *balance;
 	int depositAmountInNumber= *depositAmount;
 	 balanceInNumber += depositAmountInNumber;
 	    *balance=balanceInNumber;
 	printf("you have successfulluy deposited %d  and now your current balance is %lf  \n",depositAmountInNumber,*balance);
 	
 	return *balance;

 }
 
 void  checkYour_balance(double *balance){
 	
 	printf("your current balance is %lf",*balance);
 	
 }
 
 void withdrawAmount(double *withdrawAmount,double *balance){
 	
 	printf("what amount would you like to withdraw: \n");
 	
   	scanf("%lf",withdrawAmount);
 
 	
 	if(*withdrawAmount<*balance){
 	   int  newBalance=	*balance - *withdrawAmount;
 	   
 	   *balance=newBalance;
 		
 		printf("you can now withdraw %lf and your are remaining  with %lf ",*withdrawAmount,*balance);
	 } else{
	 	
	  printf("you don't have a enough money in your account'");
	 }
	 
 	
 }
 
 
 
 
int main(){
	
	char  userName[MAX_LENGHT];
	double accountNumber;
	int userInput;
	double  depositAmount;
	double  amountToWithdraw;
 double balance=10.0;
	
	
	printf("              ************************************Banking System*****************************        \n");
	printOnConsole();
	scanf("%d",&userInput);
	
	switch(userInput){
		
		case 1:
		   createAccount(userName,&accountNumber);
			break;
		case 2:
		    depositMoney(&depositAmount,&balance);
			break;
			
	   	case 3:
		   withdrawAmount(&amountToWithdraw,&balance);
			break;
			
		case 4:
		    checkYour_balance(&balance);
			break;	
			
			default:
			 printf("invalid input,.please try again");
			 	printOnConsole();
			 		
	}
	
	  

	
	return 0;
}