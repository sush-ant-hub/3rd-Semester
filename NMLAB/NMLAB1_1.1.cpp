//Half interval method
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) 6*x*x*x + 3*x*x - 16 
//#define f(x) log(x) - cos(x);

int main(){
	float f1, f2, f3, e, x1, x2, x3;
	int iteration = 1;
	up:
	printf("Enter two initial gueses:\n");
	scanf("%f %f",&x1, &x2);
	
	printf("Enter tolerable error:\n");
	scanf("%f", &e);
	
	
		f1 = f(x1);
		f2 = f(x2);
		
		if(f1 * f2 > 0.0){
		printf("Incorrect gueses:\n");
		goto up;
}
 printf("\nStep\t\tx1\t\tx2\t\tx3\t\tf(x3)\n");
	 do
	 {
		  x3 = (x1 + x2)/2;
		  f3 = f(x3);
		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",iteration, x1, x2, x3, f2);
		   if( f1 * f3 < 0)
		  {
			   x2 = x3;
			   f2 = f3;
		  }
		  else
		  {
			   x1 = x3;
			   f1 = f3;
		  }
		  iteration = iteration + 1;
	}
	while(fabs(f3)<e);
	{
		printf("\nRoot is %f\n",x3);
	
	printf("Number of iteration:%d\n",iteration);
	
	printf("Functional value at %f = %f",x3 ,f(x3));
	getch();
	}
}
