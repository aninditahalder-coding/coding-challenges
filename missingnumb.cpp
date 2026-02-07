#include<stdio.h>
int main(){

	int n,i;
	int arr[100];
	int sum=0,total;
	printf("enter the number of elements= ");
	scanf("%d",&n);
	printf("enter the number of elements= ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	total=n*(n+1)/2;
	printf("missing number is= %d\n",total-sum);
	return 0;
}
