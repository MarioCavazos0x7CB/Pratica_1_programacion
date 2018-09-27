#include <stdio.h>

int main(int argc,char*argv[]){
	
    double x,cscix,num,den;
	int i,j,n;
	scanf("%lf",&x);
	scanf("%d",&n);
	
	for(i=0,cscix=1/x,num=1,den=x;i<(n-1);i++){
		
		for(j=0,i=2;j<=i;j++){
			num*=(j+2);
				}
    den*=(i*2)*(i+2)*(x*x);
   	cscix+=num/den;  
	}
	printf("csc inversa(%lf)=%lf\n",x,cscix);
	
	return 0;
}

