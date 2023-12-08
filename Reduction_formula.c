#include<stdio.h>
#include<string.h>
// Declaring some requried function
// Declaring Function for determining numerator of sinx
int sinnume(int);
// Declaring Function for determining denominator of sinx
int sindeno(int);
// Declaring Function for determining numerator of cosx
int cosnume(int);
// Declaring Function for determining denominator of cosx
int cosdeno(int);
// Declaring Function for determining denominator of sinx*cosx
int deno1(int);
void main(){
    int m,n;
    char lim[50];

    printf("Enter the limits of integral from below\n");
    printf("(0,pie/2),(0,pie),(0,2pie)\n");
    gets(lim);

    printf("Enter the power of sinx\n");//Taking import form user of sinx
    scanf("%d",&m);
    printf("Enter the power of cosx\n");//Taking import form user of sinx
    scanf("%d",&n);

    // For the limit of 0 to pie/2
    if(strcmp(lim ,"(0,pie/2)") == 0){
        if (m%2 == 0 && n==0)
        {
            printf("The solution of the integral whose limits is (0,pie/2) and power of sinx is %d is equal to %dpie/%d",m,sinnume(m-1),sindeno(m)*2);
        }

        else if (m%2!=0 && n==0)
        {
           printf("The solution of the integral whose limits is (0,pie/2) and power of sinx is %d is equal to %d/%d",m,sinnume(m-1),sindeno(m));
        }

        else if (n%2==0 && m==0)
        {
            printf("The solution of the integral whose limits is (0,pie/2) and power of cosx is %d is equal to %dpie/%d",n,cosnume(n-1),cosdeno(n)*2);
        }

        else if (n%2!=0 && m==0)
        {
            printf("The solution of the integral whose limits is (0,pie/2) and power of cosx is %d is equal to %d/%d",n,cosnume(n-1),cosdeno(n));
        }

        else if (m%2==0 && n%2==0)
        {
            printf("The solution of the integral whose limits is (0,pie/2) and power of sinx is %d cosx is %d is equal to %dpie/%d",m,n,sinnume(m-1)*cosnume(n-1),deno1(m+n)*2);
        }

        else if (m%2!=0 || n%2!=0)
        {
            printf("The solution of the integral whose limits is (0,pie/2) and power of sinx is %d cosx is %d is equal to %d/%d",m,n,sinnume(m-1)*cosnume(n-1),deno1(m+n));
        }

    }
    // For the limit of 0 to pie
    else if(strcmp(lim ,"(0,pie)") == 0){
        if (m%2 == 0 && n==0)
        {
            printf("The solution of the integral whose limits is (0,pie) and power of sinx is %d is equal to %dpie/%d",m,sinnume(m-1),sindeno(m));
        }

        else if (m%2!=0 && n==0)
        {
           printf("The solution of the integral whose limits is (0,pie) and power of sinx is %d is equal to %d/%d",m,2*sinnume(m-1),sindeno(m));
        }

        else if (n%2==0 && m==0)
        {
            printf("The solution of the integral whose limits is (0,pie) and power of cosx is %d is equal to %dpie/%d",n,cosnume(n-1),cosdeno(n));
        }

        else if (n%2!=0 && m==0)
        {
            printf("The solution of the integral whose limits is (0,pie) and power of cosx is %d is equal to 0",n);
        }

        else if (n%2==0)
        {
            printf("The solution of the integral whose limits is (0,pie) and power of sinx is %d cosx is %d is equal to %dpie/%d",m,n,sinnume(m-1)*cosnume(n-1),deno1(m+n));
        }

        else if (m%2!=0 || n%2!=0)
        {
            printf("The solution of the integral whose limits is (0,pie) and power of sinx is %d cosx is %d is equal to 0",m,n);
        }

    }
    // For the limit of 0 to 2*pie
    else if(strcmp(lim ,"(0,2pie)") == 0)
    {
            if (m%2 == 0 && n==0){
            printf("The solution of the integral whose limits is (0,2pie) and power of sinx is %d is equal to %dpie/%d",m,2*sinnume(m-1),sindeno(m));
        }

        else if (m%2!=0 && n==0)
        {
           printf("The solution of the integral whose limits is (0,2pie) and power of sinx is %d is equal to 0",m);
        }

        else if (n%2==0 && m==0)
        {
            printf("The solution of the integral whose limits is (0,2pie) and power of cosx is %d is equal to %dpie/%d",n,2*cosnume(n-1),cosdeno(n));
        }

        else if (n%2!=0 && m==0)
        {
            printf("The solution of the integral whose limits is (0,2pie) and power of cosx is %d is equal to 0",n);
        }

        else if (m%2==0 && n%2==0 )
        {
            printf("The solution of the integral whose limits is (0,2pie) and power of sinx is %d cosx is %d is equal to pie %d/%d",m,n,2*sinnume(m-1)*cosnume(n-1),deno1(m+n));
        }

        else if (m%2!=0 || n%2!=0)
        {
            printf("The solution of the integral whose limits is (0,2pie) and power of sinx is %d cosx is %d is equal to 0",m,n);
        }

    }

    else{
        printf("Invaild Limits");
    }

}
// Definig Function for determining numerator of sinx
int sinnume(int m)
{
    if (m==0 || m==1)
    {
        return 1;
    }
    return m*sinnume(m-2);
}
// Definig Function for determining denominator of sinx
int sindeno(int m)
{
    if (m==0 || m==1)
    {
        return 1;
    }
    return m*sindeno(m-2);
}
// Definig Function for determining numerator of cosx
int cosnume(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n*cosnume(n-2);
}
// Definig Function for determining denominator of cosx
int cosdeno(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    return n*cosdeno(n-2);
}
// Definig Function for determining denominator of sinx*cosx
int deno1(int z)
{
    if (z==0 || z==1)
    {
        return 1;
    }
    return z*deno1(z-2);
}