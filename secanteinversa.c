#include <stdio.h>

int main(int argc,char*argv[]){
	
	double x,secix,num,den,fact,pi=3.14159;
	int i,j,n;
	scanf("%lf",&x);
	scanf("%d",&n);
	
	for(i=0,fact=1/x,num=1,den=x;i<(n-1);i++){
		
		for(j=0,i=1;j<=i;j++){
			num*=(j+2);
				}
    den*=(i*2)*(i+2)*(x*x);
    fact+=num/den;
   	secix=(pi/2)-fact;
	}
	printf("sec inversa(%lf)=%lf\n",x,secix);
	
	return 0;
}

