#include<stdio.h>
int printmarks(int n,int marks[n],int i){
	if(i==n){
		return;
	}
	printf("%d ",marks[i]);
	printmarks(n,marks,i+1);
}
int highestmarks(int n,int marks[n],int i,int high){
	if(i==n){
		return high;
	}
	if(marks[i]>high){
		return highestmarks(n,marks,i+1,marks[i]);
	}else{
		return highestmarks(n,marks,i+1,high);
	}
}
int lowestmarks(int n,int marks[n],int i,int low){
	if(i==n){
		return low;
	}
	if(marks[i]<low && marks[i]<marks[i+1]){
		return lowestmarks(n,marks,i+1,marks[i]);
	}else{
		return lowestmarks(n,marks,i+1,low);
	}
}
int averagemarks(int n,int marks[n],int i,int average){
	if(i==n){
		return average;
	}
	return averagemarks(n,marks,i+1,average+marks[i]);
}
int passcounter(int n,int marks[n],int i,int pass){
	if(i==n){
		return pass;
	}
	if(marks[i]>=40){
		return passcounter(n,marks,i+1,pass+1);
	}else{
		return passcounter(n,marks,i+1,pass);
	}
}
int failcounter(int n,int marks[n],int i,int fail){
	if(i==n){
		return fail;
	}
	if(marks[i]<40){
		return failcounter(n,marks,i+1,fail+1);
	}else{
		return failcounter(n,marks,i+1,fail);
	}
}
void sortarray(int marks[], int n) {
    if (n == 1) return; // Base case
	int i;
    for (i = 0; i < n - 1; i++) {
        if (marks[i] > marks[i + 1]) {
            int temp = marks[i];
            marks[i] = marks[i + 1];
            marks[i + 1] = temp;
        }
    }

    // Recursive call for remaining array
    sortarray(marks, n - 1);
}
int linearsearch(int n,int marks[n],int i,int find){
	if(marks[i]==find){
		return i;
	}else{
		linearsearch(n,marks,i+1,find);
	}
}
int main(){
	int n,i=0,high=0,low=100,average=0,pass=0,fail=0;
	printf("Enter number of student : ");
	scanf("%d",&n);
	printf("\n");
	int marks[n];
	printf("Enter marks of student : ");
	for(i=0;i<n;i++){
		scanf("%d",&marks[i]);
	}
	printf("\n");
	if(n>0){
		printf("Marks of student is : ");
		printmarks(n,marks,0);
		printf("\n\n");
		int r = highestmarks(n,marks,0,high);
		printf("Highest marks : %d\n\n",r);
		int k = lowestmarks(n,marks,0,low);
		printf("Lowest marks : %d\n\n",k);
		int b = averagemarks(n,marks,0,average);
		printf("Average marks of students is : %d\n\n",b/n);
		int m = passcounter(n,marks,0,pass);
		printf("Pass : %d\n\n",m);
		int v = failcounter(n,marks,0,fail);
		printf("Fail : %d\n\n",v);
		printf("Sort array : ");
		sortarray(marks,n);
		for(i=0;i<n;i++){
			printf("%d ",marks[i]);
		}
		printf("\n\n");
		int find;
		printf("Enter element : ");
		scanf("%d",&find);
		printf("\n");
		int mv = linearsearch(n,marks,0,find);
		printf("Search for marks %d : found at index %d",find,mv);
	}else{
		printf("Please write positive number of student\n\n");
	}
	return 0;
}
