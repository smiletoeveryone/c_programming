#include<stdio.h>
int main(){
	int n, t1=0, t2=1, nextterm;
	printf("please input the number of trems\n");
	scanf("%d.\n", &n);
	printf("fibonacci series is \n");

	for(int i=1; i<n; i++){
		printf("%d.\n", t1);
		nextterm = t1 + t2;
		t1 = t2;
		t2 = nextterm;
	}
	
	return 0;}
