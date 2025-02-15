

float f( float x)
{
	return (exp(x)-3*x );
	
}
float f2 (float x)
{
	return (exp(x)-3 );
}
int main()
{
	int i=0;
	float a,m,h;
	printf("entar the va");
	scanf("%f",&a);
	printf("\n  n x[n] x[n+1]");
	loop:
		h= (f(a)/f2(a));
		m=a+h;
		printf("\n %2d%f%f",i,a,m);
		if ( fabs (a-m)<=0.00001)
		goto ans;
		else 
		a=m;
		i=i+1;
		goto loop;
		ans:
		printf ("\n the root are ",a);
		return(0);	
}