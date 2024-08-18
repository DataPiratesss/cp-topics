
#include <stdio.h>
#include <math.h>

int mod_exp(int a,int b, int c) {
	int result= 1;
	a = a%c;
	while(b>0) {

		if(b%2==1) {

			result=(result*a)%c;
		}
		a = (a*a)%c;
		b = b/2;
	}
	
	printf("%d\n",result);
}

// extended gcd 

int extended_gcd(int x,int y,int *a,int *b){
    if(y==0){
        *a=1;
        *b=0;
        return x;
    }
    
    int a1,b1;
    int gcd = extended_gcd(y,x%y,&a1,&b1);
    *a =b1;
    *b =a1 - (x/y)*b1;
    
    return gcd;
    
}



int main()
{
	int t,a,b,c,x,y;
	scanf("%d",&t);
	if(t==0) {
		scanf("%d %d %d",&a,&b,&c);
		 mod_exp(a,b,c);
		
	}
	
	else {
		scanf("%d %d",&x,&y);

		int a ,b;
	int gcd = extended_gcd(x,y,&a,&b);
	
	printf("%d %d\n", gcd, gcd == 1 ? (a % y + y) % y : 0);
	
	}
		
	return 0;
}

	

