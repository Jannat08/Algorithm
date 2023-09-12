# include <stdio.h>

int main()
{
 int i, Number, Sum = 0 ;

 printf("Enter a number\n") ;
 scanf("%d", &Number) ;

 for(i = 1 ; i < Number ; i++)
  {
   if(Number % i == 0)
     Sum = Sum + i ;
  }

 if (Sum == Number)
    printf("%d is a Perfect Number\n", Number) ;
 else
    printf("%d is not a Perfect Number\n", Number) ;

return 0 ;
}
