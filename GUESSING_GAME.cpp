#include<stdio.h>

int main(){
	int arr[5]={1,3,4,5,6}, *ptr,k,l;
	
	k=arr[4];
	
	for(l=4;l>=0;l--){
		ptr= &arr[l];
		
		if(*ptr>k)
		k=(*ptr);
	}
	
	printf("%d \n",k);
	
	
for(l=0;l<5;l++){


printf("%d \n",l);
}

return 0;
}
