

#include<stdio.h>
#include<stdlib.h>


#if 0
typedef struct student{
	char id[6];
	char name[8];
	int score;
}student;

student stu[100000];

void sortid(student stu,int n){
	int i,j;
	 for( i = 0; i < n; i++)
        {
                int flag = 0;
                for( j = n - 1; j > i; j--)
                {
                        if(strcmp(stu[j].id,stu[j-1].id))
                        {
                                student temp;
                                temp = stu[j];
                                stu[j] = stu[j - 1];
                                stu[j - 1] = temp;
                                flag = 1;
                        }
                }
                if(flag == 0)
                        break;
        }

}



void sortname(student stu,int n){
	int i,j;
	 for( i = 0; i < n; i++)
        {
                int flag = 0;
                for( j = n - 1; j > i; j--)
                {
                        if(strcmp(stu[j].name,stu[j-1].name))
                        {
                                student temp;
                                temp = stu[j];
                                stu[j] = stu[j - 1];
                                stu[j - 1] = temp;
                                flag = 1;
                        }
                }
                if(flag == 0)
                        break;
        }

}




void sortscore(student stu,int n){
	int i,j;
	 for( i = 0; i < n; i++)
        {
                int flag = 0;
                for( j = n - 1; j > i; j--)
                {
                        if(strcmp(stu[j].score,stu[j-1].score))
                        {
                                student temp;
                                temp = stu[j];
                                stu[j] = stu[j - 1];
                                stu[j - 1] = temp;
                                flag = 1;
                        }
                }
                if(flag == 0)
                        break;
        }

}


#endif


typedef struct Student{
	char id[7];
	char name[9];
	int score;
}student;

student stu[1000000];

int cmp1(student s1,student s2)
{
	return strcmp(s1.id,s2.id);
}

int cmp2(student s1,student s2)
{
	return strcmp(s1.name,s2.name);
}

int cmp3(student s1,student s2)
{
	return s1.score>s2.score;
}

int main(){
	int n,c;
	int i;
	int sum=0;
	while(scanf("%d%d",&n,&c) !=EOF && n && c){
		for(i=0;i<n;i++){			
			scanf("%s%s%d",&stu[i].id,&stu[i].name,&stu[i].score);	
			
		}
	
		switch (c){
		case 1:
		
			qsort(stu,n,sizeof(stu[0]),cmp1);
			break;
		case 2:
			
			qsort(stu,n,sizeof(stu[0]),cmp2);
			break;
		case 3:
			
			qsort(stu,n,sizeof(stu[0]),cmp3);
			break;
		}
		sum++;
		printf("case %d:\n",sum);
		for(i=0;i<n;i++){
			printf("%s %s %d\n",stu[i].id,stu[i].name,stu[i].score);
		}


		
	}
	
	return 0;
}


	





