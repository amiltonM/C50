#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x=get_int("x:");
    int y=get_int("y:");
    printf("%i\n", x + y);
    // da erro quando valores muito altos
}


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x=get_long("x:");
    int y=get_long("y:");
    printf("%li\n", x / y);
    // da erro quando valores muito altos
}

// truncation put 1 and 3 
// mudamos a formatacao

int main(void)
{
    int x=get_long("x:");
    int y=get_long("y:");
    printf("%f \n", x / y);
    // da erro quando valores muito altos
}

int main(void)
{
    int x=get_long("x:");
    int y=get_long("y:");
    float z=x/y;
    printf("%f\n",z);
    
    // da erro quando valores muito altos
}

int main(void)
{
    int x=get_long("x:");
    int y=get_long("y:");
    float z=float(x)/float(y;
    printf("%.20\n,z);
    
}

///floating-point imprecision


int main(void)
{
    int x=get_long("x:");
    int y=get_long("y:");
    double z=doube(x)/doube(y);
    printf("%.20f\n",z);
    
}