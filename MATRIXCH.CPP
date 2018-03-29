#include<iostream.h>
#include<conio.h>
#include<limits.h>
int matrixmul(int a[],int n)
{ int k,l,m[10][10],s[10][10],q,i,j;
   for(i=1;i<n;i++)
   {
     m[i][i]=0;
   }
    for(l=2;l<n;l++)
    {
     for(i=1;i<(n-l+1);i++)
     {
       j=i+l-1;
       m[i][j]=INT_MAX;
       for(k=i;k<=j-1;k++)
       {
	 q=m[i][k]+m[k+1][j]+(a[i-1]*a[k]*a[j]);
	 if(q<m[i][j])
	  {
	    m[i][j]=q;
	    s[i][j]=k;
	  }
       }
    }
}
   for(i=1;i<n;i++)
   {
	 for(j=1;j<n;j++)
	 {
	  cout<<m[i][j]<<"\t";
	  }
	  cout<<endl;
	  }
	      return m[1][n-1];
    }
void main()
{
clrscr();
int a[10],n,i;
cout<<"enter no order of matrix :";
cin>>n;
cout<<"enter in array";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Maximum multiplication ="<<matrixmul(a,n);

getch();
}

