#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter a number: ");
	scanf("%d",&a);
	for(b=2;b<=a/2;b++){
		if(a%b==0){
			c++;
			break;
		}	
	}
	if(c==0 && a!=1){
		printf("%d is a prime number.",a);
	}
	else{
		printf("%d is not a prime number.",a);
	}
}