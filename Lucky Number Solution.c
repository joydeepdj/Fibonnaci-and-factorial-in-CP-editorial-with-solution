//
// By- Joydeep Biswas - 20/04/2020
//
//solution for 100 points
//

#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   long long int n;
	    scanf("%lld",&n);
		long long int c=0;
		c=log(n)/log(2);
	    if(c<4)
	    printf("%d\n",c);
	    else
	    {
	        if(c%4==0)
	        printf("0\n");
	        else if(c%4==1)
	        printf("9\n");
	        else if(c%4==2)
	        printf("2\n");
	        else if(c%4==3)
	        printf("3\n");
	    }
	}
	return 0;
}

