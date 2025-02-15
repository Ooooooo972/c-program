

float f (float x)
{
      return (1/(1+x*x));
}
int main()
{
     int i,n;
     float x0,xn,h,s;
     printf("enter the value of x0,xn,n");
     scanf("%f%f%f",&x0,&xn,&n);
     h=(xn-x0)/n;
     s=f(x0)+f(xn);
     for(i=1;i<=(n-1);i++)
     {
                          s+=2* f(x0+i*h);
     }
     printf("the value of the i. is %6.4f \n " ,(h/2)*s);
     }