#include <stdio.h>
#include <math.h>

double fpi(double);

int main(){
	double a[100],b[100],c=100.0, d=0;
	int i = 1, j=0;

	printf("Enter your inital guess\t");
	scanf("%lf", &a[0]);
	printf("\n\nThe values of iterations are : \n\n");
	printf("n\tx_n\t\tf(x_n)\t\tAbs Error\tRelative Error\n");
	while (c > 0.00000000001){
		a[j+1] = fpi(a[j]);
		c = a[j+1] - a[j];
		c = fabs(c);
		d = fabs((a[j+1] - a[j])) /fabs((a[j+1]));
		printf("%d\t%0.13lf\t%0.13lf\t%0.13lf\t%0.13lf\n", j, a[j],a[j+1],c,d);
		j++;
	}
	printf("\nThe root of the function is %0.13lf\n", a[j]);
}


double fpi(double x){
	
	double toReturn;
	toReturn = cos(pow(sin(x),2));
	return toReturn; 
}
