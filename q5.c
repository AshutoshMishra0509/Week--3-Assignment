/*C program to get the largest element of an array using the function*/ 
#include <stdio.h>
 
 int sumofarray(int a[],int n)
 {
 	int max,i;
 	max=a[0];
    for(i=1; i<n; i++)
    {
		   if(max<a[i])
		    max=a[i];       
    }
    
    printf("\nmaximum of array is : %d",max);
 }
int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sumofarray(a,n);
 
 
    
}