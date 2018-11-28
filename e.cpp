#include<stdio.h>
 
 
int main()
{
    int n;float c;
float x[100]={},y[100]={};
printf("nhap n");
scanf("%d",&n);
printf("nhap c");
scanf("%f",&c);
printf("nhap x\n");
for(int i=0;i<=n;i++)
{
    scanf("%f",&x[i]);
}
printf("nhap y\n");
for(int j=0;j<=n;j++)
{
    scanf("%f",&y[j]);
}
float w=1,s=0,d;
for(int i=0;i<=n;i++)
{
   w*=c-x[i];
   d=c-x[i];
   for(int j=0;j<=n;j++)
   {
       if(i!=j)
       d*=x[i]-x[j];
 
   }
s+=y[i]/d;
}
printf("f(%f)=%f",c,s*w);
 
return 0;
}
 
