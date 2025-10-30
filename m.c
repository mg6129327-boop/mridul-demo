#include<stdio.h>
#include<string.h>
void totalmarks(int marks[],int n,int total){
	int i;
	for(i=0;i<n;i++){
		total = total + marks[i];
	}
	printf("Total marks : %d\n",total);
}
int Averagemarks(int marks[],int n,int total,int average){
	int i;
	for(i=0;i<n;i++){
		total = total + marks[i];
	}
	average = total/n;
	printf("Average : %d\n",average);
	Grade(average);
}
void Grade(int average){
	if(average >= 91 && average <= 100){
		printf("Grade : Outstanding\n");
	}else if(average >= 81 && average <= 90){
		printf("Grade : A+\n");
	}else if(average >= 71 && average <= 80){
		printf("Grade : A\n");
	}else if(average >= 61 && average <= 70){
		printf("Grade : B+\n");
	}else if(average >= 51 && average <= 60){
		printf("Grade : B\n");	
	}else if(average >= 41 && average <= 50){
		printf("Grade : C\n");
	}else if(average <=40){
		printf("Grade : F\n");
	}
}
void reportcard(){
	char str[100];
	printf("Enter student name : ");
	fgets(str,100,stdin);
	int n,i,total=0,average=0;
	printf("Enter of subjects : ");
	scanf("%d",&n);
	int marks[n];
	for(i=0;i<n;i++){
		printf("Enter marks for subject %d : ",i+1);
		scanf("%d",&marks[i]);
	}
	printf("\n");
	printf("--- Report Card ---\n");
	printf("Name : %s",str);
	totalmarks(marks,n,total);
	Averagemarks(marks,n,total,average);
	printf("\n");
	getchar();
	char decision[4];
	printf("Do you want to enter another student?(y/n) : ");
	fgets(decision,sizeof(decision),stdin);
	printf("\n");
	if(decision[0]=='y' || decision[0]=='Y'){
		reportcard();
	}else{
		printf("Thank you. your program ended");
	}
}
int main(){
	reportcard();
	return 0;
}
