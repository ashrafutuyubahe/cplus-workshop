#include<stdio.h>

int main(){
 
int studNames[]= {"kamali","jogn","luc","musa"};

 for ( int i = 0; i <sizeof(studNames); i++)
 {
            if(studNames[i] == "kamali")
            printf(studNames[i]);
 }
 
    return 0;
}