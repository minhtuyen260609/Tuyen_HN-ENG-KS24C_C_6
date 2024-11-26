#include<stdio.h>
int main(){
	int n=100;
	while(n<1000){
		int tmp=0,N=n;
		while(N!=0){
			tmp+=(N%10)*(N%10)*(N%10);
			N/=10;
		}
		if(tmp==n){
			printf("%d\n ",tmp);
		
		} n++;
	}
	return 0;
}
