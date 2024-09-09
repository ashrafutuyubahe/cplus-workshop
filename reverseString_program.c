#include<stdio.h>
#include<string.h>


 void reverseName(char studName[10], char reversedStudentName[10]){
 	
 	 int lenght= strlen(studName);   


   for(int a=0;a<lenght;a++){
   
	reversedStudentName[a]=studName[lenght-a-1];   
}

  studName[lenght]="\0";
 }

int main(){
 
 char studName[10];
 int userAge;
 char  isuserCurrentlocationExists[10];
 char reversedStudentName[10];
  
  printf("please enter your name : \n");
  scanf("%9s",&studName);
  
  reverseName(studName,reversedStudentName);
 
 printf("hey %s ,here is your reversed name %s",studName,reversedStudentName);  

 
    return 0;
}