 #include <stdio.h> 
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n,i,j,temp; //temp=gecicisaklama
	printf("n degeri gir:");
	scanf("%d",&n);
	
	int dizi[n];
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d.dizinin elman degerini gir:",i+1);
		scanf("%d",&dizi[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
	}
	
	printf("\n");
	
    for(i=0;i<n;i++)
    {
		printf("%d \n",dizi[i]);
	}
    
}

