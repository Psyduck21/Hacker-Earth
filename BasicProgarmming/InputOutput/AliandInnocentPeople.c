#include <stdio.h>

int main(){
	char s[9];
	scanf("%s", &s);
	for(int i = 0; i < 9 ; i++){
		if((s[2]=='A'||s[2]=='E'||s[2]=='I'||s[2]=='O'||s[2]=='U'||s[2]=='Y')&&(s[2]<='Z' && s[2]>='A')){
            printf("1 pass");
			printf("invalid");
            break;
        }
		else if( ((s[0]+s[1])%2!=0) || ((s[3]+s[4])%2!=0) || ((s[4]+s[5])%2!=0) || ((s[7]+s[8])%2!=0)){
            printf("2 pass");
			printf("invalid");
            break;}
		else{
			printf("valid");
            break;}
	}
}
