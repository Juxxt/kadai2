#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int index[16];
	int array[16];
	int i,n;
	
	srand((unsigned)time(NULL));
	
	for(i=0;i<16;i++){
		index[i] = 0;
	}
	
	for(i=0;i<16;i++){
		while(1){
			n = rand()%16;
			if(index[n] == 0){
				array[i] = n + 1;
				index[n] = 1;
				break;
			}
		}
	}
	
	for(i=0;i<16;i++){
		printf("%d\n",array[i]);
	}
	
	return 0;
}