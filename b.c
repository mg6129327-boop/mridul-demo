#include<stdio.h>
int main (){
	int n;
	printf("Enter number of students : ");
	scanf("%d",&n);
	int marks[n],i;
	printf("Enter marks of %d students : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&marks[i]);
	}
	int tmarks=0,average;
	for(i=0;i<n;i++){
		tmarks=tmarks+marks[i];
	}
	average=tmarks/n;
	printf("Average marks of your class : %d\n",average);
	for(i=0;i<n;i++){
		if(marks[i]<=100 && marks[i]>=90){
			printf("%d marks : A\n",marks[i]);
		}
		if(marks[i]<90 && marks[i]>=80){
			printf("%d marks : B\n",marks[i]);
		}
		if(marks[i]<80 && marks[i]>=70){
			printf("%d marks : C\n",marks[i]);
		}
		if(marks[i]<70 && marks[i]>=60){
			printf("%d marks : D\n",marks[i]);
		}
		if(marks[i]<60){
			printf("%d marks : F\n",marks[i]);
		}
	}
	int count=marks[0];
	for(i=1;i<n;i++){
		count++;
		if(marks[i]>count){
			marks[i];
		}
	}
}
