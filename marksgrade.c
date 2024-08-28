#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,res,ad;
    printf("marks of 5 subjects\n physics:");
    scanf("%d",&s1);
    printf("chemistry :");
    scanf("%d",&s2);
    printf("mathematics :");
    scanf("%d",&s3);
    printf("Biology :");
    scanf("%d",&s4);
    printf("English :");
    scanf("%d",&s5);
    ad=s1+s2+s3+s4+s5;
    res=ad/5;
    printf("%d\t",res);
    if(res>=90){
        printf("Ex");
    }
    else if (res>=80)
    {
        printf("A");
    }
    else if (res>=70)
    {
         printf("B");
    }
    else if (res>=60)
    {
         printf("c");
    }
    else if (res<60)
    {
        printf("Fail");
    }
    
    
    
    
    return 0;
}