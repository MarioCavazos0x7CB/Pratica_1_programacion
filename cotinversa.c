#include <stdio.h>

int main(int argc,char*argv[]){
	
    double x,cotix,num,den,fact,pi=3.1416;
	int i,n,sig;
	scanf("%lf",&x);
	scanf("%d",&n);
	
	for(i=0,cotix=x/1,sig=1,num=x,den=1;i<(n-1);i++){
	 
    	num*=(x*x);
		den*=(2*i+3);
		sig*=(-1);
        fact+=(sig*num)/den;
	    cotix=(pi/2)-fact;  
	}
	printf("cot inversa(%lf)=%lf\n",x,cotix);
	
	return 0;
}

