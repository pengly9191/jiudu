#include<stdio.h>

int main(){
	int n,x,y,z;
	
	while(scanf("%d",&n)!=EOF){	

		for(x=0;x<n/5;x++){
			for(y=0;y<n/3;y++){
				for(z=0;z<3*n;z++){
					if(15*x+9*y+z<=3*n && x+y+z==100){
						printf("x=%d,y=%d,z=%d\n",x,y,z);

					}								
				}					
			}		
		}
	}
	
	return 0;

}

