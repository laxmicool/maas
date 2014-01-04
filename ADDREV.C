#include<stdio.h>
long int rev(long int);
long int rev(long int a)
{
     long int rev;
     rev=0;
     while(a)
     {
      rev=rev*10+a%10;
      a=a/10;
     }
     return rev;
}
int main()
{
    int n;
    long int num1,num2,res;
    scanf("%d",&n);
    while(n--)
    {
            scanf("%ld %ld",&num1,&num2);
            num1=rev(num1);
            num2=rev(num2);
            res=num1+num2;
            res=rev(res);
            printf("%ld \n",res);
    }
    return 0;
}
 
