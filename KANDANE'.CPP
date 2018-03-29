#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,j,k,a[10],max_sum,cur_sum;
cout<<"enter no of ele in array:" ;
cin>>n;
cout<<"enter ele:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
max_sum=a[0];
cur_sum=0;
for(k=0;k<n;k++)
{
  for(j=k;j<n;j++)
    {
      for(i=0;i<n-j;i++)
	{
	   cur_sum+=a[i];
	 }
       if(cur_sum>max_sum)
	 {
	     max_sum=cur_sum;
	 }
	 cur_sum=0;
      }
   }
   cout<<"Maximum sum of substring:"<<max_sum;
   getch();
   }