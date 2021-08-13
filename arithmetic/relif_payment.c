#include<stdio.h>
void go_around(int*p,int d,int t );

int n,k,m,a[25];
int main()
{
  int i;
    while(scanf("%d%d%d",&n,&k,&m) == 3 && n)
      {
        for(i = 1 ; i < 25  ; i++)
          {
            a[i] = i;
          }
        int left = n ;
        int p1 = n ,p2=1;
          while(left)
            {
              go_around(&p1,1,k);
              go_around(&p2,-1,m);
              printf("%3d,",p1),left--;
              if(p1 != p2)
                {
                  printf(" %3d" ,p2);
                  left--;
             

                }
                 a[p1]=a[p2]=0;
		
              if(left)
                printf(",");
	

            }
      }

  return 0;
}
void go_around(int *p,int d,int t )
{
  while(t--)
    {
      do{
       * p = (*p+d+n-1)%n+1;  //防止越过范围
      	printf("\n %d ,p",*p);
	  }
      while(a[*p] == 0);
      

    }
}
