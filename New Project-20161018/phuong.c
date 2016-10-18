#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
double findside(double a, double b, double alpha){
    double m,n;
    n=PI*alpha/180;
    m=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(n));
    
    return m;
}

/*double triangleArea( double a,double b, double c ){
    double result,x,p;
    
    p=(a+b+c)/2;
    x=p*(p-a)*(p-b)*(p-c);
    return sqrt(x);
}*/
void main(){
/*double alphaDeg = 45,
alpha = PI*alphaDeg/180; // угол в радианах
printf("alphaDeg = %.0lf, alpha = %lf\n", alphaDeg, alpha);
printf("sin(alpha) = %lf\n", sin(alpha));
printf("cos(alpha) = %lf\n", cos(alpha));
printf("tan(alpha) = %lf\n", tan(alpha));
printf("atan(tan(alpha)) = %lf\n", atan(tan(alpha)));
printf("floor(alpha) = %lf\n", floor(alpha)); // окр. вниз
printf("ceil(alpha) = %lf\n", ceil(alpha)); // окр. вверх
double a = 5, b = 3;
printf("exp(a) = %lf\n", exp(a)); // вычисление экспоненты
printf("log(a) = %lf\n", log(a)); // натуральный логарифм
printf("log10(a) = %lf\n", log10(a)); // лог. по осн. 10
printf("pow(a,b) = %lf\n", pow(a,b)); // возв. a в степень b
printf("sqrt(a) = %lf\n", sqrt(a)); // корень числа a
printf("fabs(-alpha) = %lf\n", fabs(-alpha)); // модуль вещ.
double a,b,c, result1;
/*scanf("%lf %lf %lf",&a,&b,&c);
result1 = triangleArea(a,b,c);
printf("%lf \n",result1);*/

/*double x,y,alpha, result2;
scanf("%lf %lf %lf",&x,&y,&alpha);
result2=findside(x,y,alpha);
printf("%lf \n",result2);*/
double t=5,k;
k=log(pow(t,7));
printf("%lf\n",k);


}
