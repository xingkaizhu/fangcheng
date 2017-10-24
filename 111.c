#include <stdio.h>
int main (){
		float a,b,c,d,e,f,x,y;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	x=(f*b-c*e)/(b*d-e*f);
	y=(f*a-c*d)/(e*a-b*d);
	printf("x is %f ,y is %f ",x,y);

	return 0;
}



	
