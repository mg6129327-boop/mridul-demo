#include<stdio.h>
int printelement(int n,int a[n],int i){
	if(i==n){
		return;
	}
	printf("%d ",a[i]);
	printelement(n,a,i+1);
}
int maxelement(int n,int a[n],int i,int max){
	if(i==n){
		return max;
	}
	if(a[i]>max){
		return maxelement(n,a,i+1,a[i]);
	}else{
		return maxelement(n,a,i+1,max);
	}
}
int sumofelement(int n,int a[n],int i,int total){
	if(i==n){
		return total;
	}
	return sumofelement(n,a,i+1,total+a[i]);
}
int evencounter (int n,int a[n],int i,int even){
	if(i==n){
		return even;
	}
	if(a[i]%2==0){
		return evencounter(n,a,i+1,even+1);
	}else{
		return evencounter(n,a,i+1,even);
	}
}
int oddcounter (int n,int a[n],int i,int odd){
	if(i==n){
		return odd;
	}
	if(a[i]%2!=0){
		return oddcounter(n,a,i+1,odd+1);
	}else{
		return oddcounter(n,a,i+1,odd);
	}
}
int reversearray(int n,int a[n],int i,int rev){
	if(i==n){
		return; 
	}
	reversearray(n,a,i+1,rev);
	printf("%d",a[i]);
}
int main(){
	int n,i=0,max=0,total=0,even=0,odd=0,rev=0;
	printf("Enter number : ");
	scanf("%d",&n);
	printf("\n");
	int a[n];
	printf("Enter element : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	if(n>0){
		printf("Array element is : ");
		printelement(n,a,0);
		printf("\n\n");
		int r = maxelement(n,a,0,max);
		printf("Maximum element of your array is : %d\n\n",r);
		int k = sumofelement(n,a,0,total);
		printf("sum of element of your array : %d\n\n",k);
		int b = evencounter(n,a,0,even);
		printf("Even : %d\n\n",b);
		int m = oddcounter(n,a,0,odd);
		printf("Odd : %d\n\n",m);
		printf("Reverse array is : ");
		reversearray(n,a,0,rev);
	}else{
		printf("Please Enter positive size of array\n");
	}
}
