#include <stdio.h>
int main() {
    int a = 26; 
    int b; 
    while(a!=b){
    	printf("Nhap mat khau: ");
    	scanf("%d", &b);
    		if (a == b) {
        	printf("Mat khau dung\n");
    	} else {
        	printf("Mat khau sai\n");
    }
	}
    
    
    return 0;
}

