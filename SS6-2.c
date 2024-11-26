#include<stdio.h>
int main(){
	int a, i;
	int le=0, chan=0;
	for(i=0; i<5; i++){
		printf("moi nhap so:");
		scanf("%d", &a) ;
		if(a%2 !=0){
			le+=1;
		}else if(a%2==0){
			chan+=1; 
		} 
	} 
	printf("co: %d so le\n", le);
	printf("co: %d so chan\n", chan);
	return 0; 
} 
