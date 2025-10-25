#include<Stdio.h>
void evencounter(int n){
	if(n==0){
		return;
	}
	evencounter(n-1);
	if(n%2==0){
		printf("%d ", n);
	}
}
void oddcounter(int n){
	if(n==0){
		return;
	}
	oddcounter(n-1);
	 if(n%2!=0){
		printf("%d " ,n);
	}
}
int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
int sumofdigit(int n,int sum){
	if(n==0){
		return sum;
	}else{
		return sumofdigit(n/10,sum+n%10);
	}
}
int main(){
	int n,sum=0;
	printf("Enter number : ");
	scanf("%d",&n);
	if(n>0){
		printf("Even : ");
		evencounter(n);
		printf("\n");
		printf("Odd : ");
		oddcounter(n);
		printf("\n");
		int r = factorial(n);
		printf("Factorial of %d is : %d\n",n,r);
		int rj =sumofdigit(n,sum);
		printf("Sum of digit of your number %d is : %d\n",n,rj);
	}else{
		printf("Please Enter number postive number\n");
	}
}
