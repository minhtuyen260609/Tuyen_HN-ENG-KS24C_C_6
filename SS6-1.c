#include<stdio.h>
int main(){
	int a, i;
	int sum = 0;
	for(i=0; i<5; i++){
		printf("moi nhap so:");
		scanf("%d", &a) ;
		if(a%2 !=0){
			sum+=a;
		}
	} 
	printf("tong cac so le da nhap bang: %d", sum);
	return 0; 
} 
