#include<stdio.h>
int main(){
int i, j, count, temp, number[25];

printf("how many numbers are yuo going to enter?\n");
scanf("%d.\n", &count);
printf("enter %d. element:\n", count);

//input the elements that stored in the array
for(i=0; i<count; i++){
	scanf("%d.\n", &number[i]);
}
//loop for seletion sort algorithm
	for(i=0; i<count; i++){
		for(j=0; j<count; j++){
			if(number[i]>number[j]){
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
	printf("the elements is:\n");
	for(i=0; i<count; i++){
		printf("%d.\n", number[i]);
	}
	
	
	return 0;
}
