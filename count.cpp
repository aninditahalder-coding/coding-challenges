#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	int freq[256]={0};
	int i=0,count=0;
	printf("enter the string= ");
	scanf("%s",s);
	while(s[i]!='\0'){
		freq[s[i]]++;
		i++;
	}
	i=0;
	while(i<256){
		count+=(freq[i]*(freq[i]+1))/2;
		i++;
		
	}
	printf("Total substrings starting and ending with the same character=%d",count);
	return 0;
}
