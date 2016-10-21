#include<stdio.h>

int main(){
	int n,i;
	int sum=0;
	while(scanf("%d",&n)!=EOF){	
		
		if(n>1){
			for(i=2;i<n;i++){
				if(n%i==0){
					sum =1;
					break;
				}
			}
		}
		if(n<2||sum)
			printf("no\n");
		else
			printf("yes\n");

	}
	
	return 0;

}
