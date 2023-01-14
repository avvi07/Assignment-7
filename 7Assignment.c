// 1. Write a program to find the Nth term of the Fibonnaci series.

// #include<stdio.h>
// int main()
// {
//     int i,f1 = 0,f2 = 1,nt = 0,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     if (x == 0 || x == 1)
//     {
//         printf("%d", x);
//     }
//     else
//     {
//         nt = f1 + f2;
//     }

//     for ( i = 3; i <= x; ++i)
//     {
//         f1=f2;
//         f2=nt;
//         nt=f1+f2;
//     }
//     printf("%d",f2);
//     return 0;
// }

// 2. Write a program to print first N terms of Fibonacci series

// #include<stdio.h>
// int main()
// {
//     int i,f1 = 0,f2 = 1,nt = 0,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     printf("%d\n%d",f1,f2);

//     for ( i = 3; i <= x; ++i)
//     {
//         nt=f1+f2;
//         printf("\n%d",nt);
//         f1=f2;
//         f2=nt;
//     }
//     return 0;
// }

// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

// #include<stdio.h>
// int main()
// {
//     int i,f1 = 0,f2 = 1,nt = 0,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     if (x == 0 || x == 1)
//     {
//         printf("It is in fibonacci series.");
//     }

//     for ( i = 3; 1 ; ++i)
//     {
//         f1=f2;
//         f2=nt;
//         nt=f1+f2;

//         if(nt==x)
//         {
//             printf("It is in fibonacci series.");
//             break;
//         }

//         if (nt>x)
//         {
//             printf("It is not in fibonacci series.");
//             break;
//         }

//     }
//     return 0;
// }

// 4. Write a program to calculate HCF of two numbers

// #include<stdio.h>
// int main()
// {
//     int a,b,i,hcf=1;
//     printf("Enter two number: ");
//     scanf("%d %d",&a,&b);

//     int min = a < b ? a : b ;
//     for ( i = 1; i <= min; i++)
//     {
//         if ((a%i==0) && (b%i==0))
//         {
//             hcf = i;
//         }

//     }
//     printf("%d",hcf);

//     return 0;
// }

// 5. Write a program to check whether two given numbers are co-prime numbers or not

// #include <stdio.h>
// int main()
// {
//     int a, b, i, hcf = 1;
//     printf("Enter two number: ");
//     scanf("%d %d", &a, &b);

//     int min = a < b ? a : b;
//     for (i = 1; i <= min; i++)
//     {
//         if ((a % i == 0) && (b % i == 0))
//         {
//             hcf = i;
//         }
//     }
//     if (hcf > 1)
//     {
//         printf("%d and %d is not a co-orime number.\n", a, b);
//     }
//     else
//     {
//         printf("%d and %d is a co-prime numbers.\n", a, b);
//     }
//     return 0;
// }

// 6. Write a program to print all Prime numbers under 100

// #include <stdio.h>
// int main()
// {
//     int i, x, flag = 0;

//     for (x = 1; x <= 100; x++)
//     {
//         flag = 0;
//         for ( i = 2; i <= x/2; i++)
//         {
//             if (x % i == 0)
//             {
//                 flag = 1;
//             }
            
//         }
//         if (flag == 0)
//         {
//             printf(" %d ",x);
//         }
        
//     }

//     return 0;
// }

// 7. Write a program to print all Prime numbers between two given numbers

// #include<stdio.h>
// int main()
// {
//     int i,j,a,b,flag=0;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     for ( i = a; i <= b; i++)
//     {
//         flag = 0;
//         for (  j= 2; j <= i/2; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag = 1;
//             }
            
//         }
//         if (flag == 0)
//         {
//             printf(" %d ",i);
//         }
        
//     }
    
//     return 0;
// }

// 8. Write a program to find next Prime number of a given number

// #include<stdio.h>
// int main()
// {
//     int i,j,a,flag=0;
//     printf("Enter a number: ");
//     scanf("%d", &a);

//     for ( i = a; 1 ; i++)
//     {
//         flag = 0;
//         for (  j= 2; j <= i/2; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag = 1;
//             }
            
//         }
//         if (flag == 0)
//         {
//             printf(" %d ",i);
//             break;
//         }
        
//     }
    
//     return 0;
// }

// 9. Write a program to check whether a given number is an Armstrong number or not

// #include<math.h>
// #include<stdio.h>
// int main()
// {
//     int i,n,a;
//     double res,rem,p;

//     printf("Enter three numbers: ");
//     scanf("%d", &n);

//     a = n;
    
//     for ( a = n; a!=0; ++p)
//     {
//         a=a/10;
//     }
    
//     for ( a=n ; a!=0; i++)
//     {
//         rem = a % 10;
        
//         res = res + pow( rem , p);

//         a = a / 10;
//     }
    
//     if (res == n)
//     {
//         printf("%d is a Armstrong number.",n);
//     }
//     else
//     {
//         printf("%d is not a Armstrong number.",n);
//     }

//     return 0;
// }

// 10. Write a program to print all Armstrong numbers under 1000

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i,c = 0,a;
//     double result,rem ;
    
//     for ( i = 1; i< 1000; i++)
//     {
//         a = i;
//         while (a != 0)
//         {
//             a = a / 10;
//             ++c;
//         }
//         a = i;

//         while (a != 0)
//         {
//             rem = a % 10;

//             result = result + pow(rem, c);

//             a = a / 10;
//         }

//         if (result == i)
//         {
//             printf("%.0f ", result);
//         }

//         c = 0;
//         result = 0;
//     }
    
//     return 0;
// }

