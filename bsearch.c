#include<stdio.h>
int main()
{
  int a[20],n,i,j,temp;
  
  //Accept array size
  printf("Enter the number of elements : \n");
  scanf("%d", &n);

  printf("Enter %d integers : ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d", &a[i]);
  }
  
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)
    { 
      if (a[j]>a[j+1])
      {
         temp=a[j];
	 a[j]=a[j+1];
	 a[j+1]=temp;
      }
    }
  }
   printf("The sorted array is....\n");
   for(i=0;i<n;i++) 
   {
      printf("%d\t",a[i]);
   }
      printf("\n");
      
	int first,last,mid,key;	
	printf("Enter key : ");
	scanf("%d",&key);
	first=0;
	last=n-1;
	
	while(first<=last)
	{ 
		//compute mid
		mid=(first+last)/2;
		if (key==a[mid])
		{
			printf("Key %d is found at location %d\n",key,mid+1);
			return 0;
		}
		else if (key>a[mid])
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
	        }
	}
	printf("Key not found \n");
	return 1;
}
