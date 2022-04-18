//Program to print possible permutations
#include <stdio.h>
#include <string.h>

void swap(char *x,char *y)
	{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
	}
void permute(char *a, int l,int r)
{
	int i;
	if(l == r){
		printf("%s\n",a);
	}
	else
	{
		for(int i = l;i <= r; i++)
		{
			swap((a+l),(a+i));
			permute(a,l+1,r);
			swap((a+l),(a+i));
		}
	}
}

int main()
{
	char str[] = "ABC";
	int n = strlen(str);
	permute(str,0,n-1);
	return 0;
}

//Program to calculate P & C of given n and r values
#include <stdio.h>
long factorial(int);
long find_npr(int,int);
long find_ncr(int,int);

int main()
{
	int n,r;
	long npr, ncr;
	printf("Enter the value of n and r respectively");
	scanf("%d%d",&n,&r);
	npr = find_npr(n,r);
	ncr = find_ncr(n,r);
	printf("Combinations: \t%dC%d = %ld\n",n,r,ncr);
	printf("Permutations: \t%dP%d = %ld\n",n,r,npr);
	return 0;
}

long find_ncr(int a, int b)
{
	return(factorial(a)/factorial(b)*factorial(a-b));
}

long find_npr(int a ,int b)
{
	return (factorial(a)/factorial(a-b));

}
long factorial(int c )
{
	if(c == 1 || c == 0)
		return 1;
	else
		return c*factorial(c-1);
}
