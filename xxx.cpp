#include<stdio.h>

int main(){
	
	int n;
	while(scanf("%d",&n)!=EOF && n>=1&&n<=10000)
	{
		int i=0;
		while(n !=1){
			if(n%2==0){
				n=n/2;
				
			}else{
				n=(3*n+1)/2;
				
			}
			i=i+1;
			

		}
		printf("%d\n",i);

	}

	return 0;

}



