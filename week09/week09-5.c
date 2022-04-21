#include <stdio.h>
#include <string.h>
char name[100][80];
int grade[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d",name[i],&grade[i] );
	}
	for(int k=0;k<n-1;k++){
		for(int i=0;i<n;i++){
		if(grade[i]<grade[i+1]){
			int t=grade[i];
			grade[i]=grade[i+1];
			grade[i+1]=t;

			char tempname[80];
			strcpy(tempname,name[i] );
			strcpy(name[i],name[i+1] );
			strcpy(name[i+1],tempname );
		}
	}
}
	for(int i=0;i<n;i++){
		printf("%s %d\n",name[i],grade[i] );
	}
}
