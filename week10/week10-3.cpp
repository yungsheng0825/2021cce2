#include <stdio.h>
class Student {
public:
    char name[30];
    int grade;
};
Student student[100];
int main()
{
    FILE * fin= fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);

    for(int i=0;i<n;i++){
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }
    for(int k=0;k<n-1;k++){
        for(int i=0;i<n;i++){
            if(student[i].grade<student[i+1].grade){
               Student temp=student[i];
               student[i]=student[i+1];
               student[i+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
