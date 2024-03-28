#include <stdio.h>

int main(){
	int L;
	scanf("%d", &L);    
	int N;
	scanf("%d", &N); 
	int W, H;
	for(int i = 0; i<N ;i++){
		scanf("%d%d", &W,&H);
		if(W<L || H<L){
			printf("UPLOAD ANOTHER\n");
			}
		else if(W>=L && H>=L){
			if(W==H)
				printf("ACCEPTED\n");
			else
				printf("CROP IT\n");
		}    
	}
}
