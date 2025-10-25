#include<stdio.h>
int reverse(int n,int rev){
	if(n==0){
		return rev;
	}else{
		return reverse(n/10,rev*10+n%10);
	}
}
int converter(int n){
		if(n==0){
			return;
		}
	int digit = n % 10;
	converter(n/10);
	switch(digit){
		case 0 : printf("Zero "); break;
		case 1 : printf("One "); break;
		case 2 : printf("Two "); break;
		case 3 : printf("Three "); break;
		case 4 : printf("Four "); break;
		case 5 : printf("Five "); break;
		case 6 : printf("Six "); break;
		case 7 : printf("Seven "); break;
		case 8 : printf("Eight "); break;
		case 9 : printf("Nine "); break;
	}
	n = n / 10;
}
int countdigit(int n,int count){
	if(n==0){
		return count;
	}
	int	 rem = n % 10;
	countdigit(n/10,count+1);
}
int digitinreverse(int n){
	if(n==0){
		return;
	}
	printf("%d ",n%10);
	digitinreverse(n/10);
}
int main(){
	int n,rev=0,count=0,digit=0;
	printf("Enter number : ");
	scanf("%d",&n);
	printf("\n");
	if(n>0){
		int r = reverse(n,rev);
		printf("Reverse of %d : %d\n\n",n,r);
		if(n==r){
			printf("Yes,it is Palindrome\n\n");
		}else{
			printf("No,it is not Palindrome\n\n");
		}
		converter(n);
		printf("\n\n");
		int s = countdigit(n,count);
		printf("Total digit of %d is : %d\n\n",n,s);
		int f = digitinreverse(n);
	}
}


