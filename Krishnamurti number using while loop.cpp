#include<stdio.h>
int main()
{
	int n,p,r,fact,i,sum=0;
	printf("\n\t\t---***PEARSON OR KRISHNAMURTHY NUMBER***---\n");
	printf("\nEnter the number: ");
	scanf("%d",&n);
	p=n;
	if(n<0)
	{
		printf("Negetive value is not supported");
	}
	else
	{
	   while(n!=0)
	   {  
	      r=n%10;
	      fact=1;
	      for(i=1;i<=r;i++)
	      {
	      	fact=fact*i;
	      }
		  sum=sum+fact;
		  n=n/10;
	   }
	   if(sum==p)
	   {
	   	printf("Krishnamurti number");
	   }
	   else
	   {
	   	printf("Not a Krishnamurti number");
	   }
    }
	return(0);
}
