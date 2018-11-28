#include<iostream>
using namespace std;

void get_array(float array[][20],int n)
{
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n+1;j++)
        cin>>array[i][j];
}
}
void display(float array[][20],int n)
{
    for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n+1;j++)
        cout<<"array[i][j]"<<"\n";

}
 
}
void change_array(float array[][20],int n)
{
    float m,x[100];
 
  for(int i=1;i<=n-1;i++)
  {
      if(array[i][i]==0)
      {
          int j=i+1;
          while(j<=n)
          {
              if(array[j][i]!=0)
                break;
              j++;
 
          }
     for(int k=1;k<=n+1;k++)
     {
         array[i][k]=array[j][k];
 
     }
      }
  for(int j=i+1;j<=n;j++)
  {
    m=-array[j][i]/array[i][i];
    for(int k=i;k<=n+1;k++)
    {
        array[j][k]=array[j][k]+array[i][k]*m;
 
    }
 
  }
 
 
      }
      display(array,n);
for(int i=n;i>=1;i--)
{
    float S=0;
    for(int j=i+1;j<=n;j++)
    {
        S+=array[i][j]*x[j];
 
    }
    x[i]=(array[i][n+1]-S)/array[i][i];
 
 
}
cout<<"nghiem cua phuong trinh:\n";
for(int i=1;i<=n;i++)
{
    cout<<i<<x[i]<<"\n";
}
 
}
int main(){
int n;
float array[20][20];
cout<<"input n:";
cin>>n;
get_array(array,n);
change_array(array,n);
cout<<"\n";
return 0;
}
