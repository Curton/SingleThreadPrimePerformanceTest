// This is not the main program
// Only for test the progress bar
#include<stdio.h>
#define N 20
void mBar(float fBar)
{

    int i = 0;
    int j = 0;
    int k = 0;
    int m = 0;
    for ( i=0;i<N+6;i++ )
    {
        printf("\b");
    }
    k=N*fBar;
    m=fBar*100;
    printf("[");
    for ( i=0;i<k;i++ )
    {
        printf("=");
    }
    for ( j=0;j<N-k;j++ )
    {
         printf(" ");
    }

    printf("]%3d%%",m);
}

void delay(int n)
{
      int i =0;
      int j = 0;
      int k = 0;
      for ( i=0;i<n;i++ )
      {
          for ( j=0;j<0x07fff;j++ ) k++;
      }
}

void main()
{
    float x;
    int i;
    for ( i=0,x=0;i<100;i++,x+=0.01 ) { mBar(x); delay(1024); }
    mBar(1);
    return 0;
}
