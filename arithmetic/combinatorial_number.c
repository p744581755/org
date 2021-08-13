/** 紫书程序4-1**/
#include<stdio.h>
long long factorial_function(int num ,int num_end)
{
  int i = 0 ;
  long long sum = num+1;
  for( i =  num+2 ; i < num_end ; i++)
    {
      sum *= i;
        printf(" \n sum = %lld  i = %lld",sum, i);

    }
        printf(" \n sum = %lld ",sum);
  return sum;
}
long long factorial(int n){
  long long m = 1;
        int i;
  for( i = 1; i <= n; i++)
  {
        m *= i;
    printf(" %d \n" ,m);
  }

  return m;

}

int main()
{
  int m,n;
  factorial(25);
  scanf("%d %d",&n,&m);

  long long sum = factorial_function(m,n) /factorial_function(1,n-m);
  printf("123456");
  printf(" \n sum = %d ",sum);
  while(1);
  return 0 ;
}
