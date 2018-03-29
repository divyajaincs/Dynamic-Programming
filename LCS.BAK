#include<iostream.h>
#include<conio.h>
#include<string.h>
int max(int a,int b)
{
return (a>b)?a:b;
}
int lcs(char *x,char *y,int m,int n)
{
int i,j,l[10][10];
for(i=0;i<=m;i++)
{
  for(j=0;j<=n;j++)
  {
    if(i==0||j==0)
    {
     l[i][j]=0;
     }
    else if(x[i-1]==y[j-1])
    {
    l[i][j]=l[i-1][j-1]+1;
    }
    else
    {   l[i][j]=max(l[i-1][j],l[i][j-1]) ;
    }
  }
}
int k=l[m][n];
char l1[10];
l1[k]='\0';
i=m;
j=n;
while(i>0 && j>0)
{
  if(x[i-1]==y[j-1])
  {
  l1[k-1]=x[i-1];
  i--;
  j--;
  k--;
  }
  else if(l[i][j-1]>l[i][j-1])
   i--;
   else
   j--;
  }
  cout<<"lcs is:" <<l1<<endl;
return l[m][n];
}
void main()
{
clrscr();
char x[100],y[100];
int m,n;
cout<<"enter first sequence:";
cin>>x;
cout<<"enter second sequence:";
cin>>y;
m=strlen(x);
n=strlen(y);
cout<<"Length of longest common subsequence:"<<lcs(x,y,m,n);
getch();
}