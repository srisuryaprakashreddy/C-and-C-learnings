 #include<stdio.h>
 #include<math.h>
  int power(int m,int n)
  { 
    if (n==0)
     return 1;
    else
     return pow(m,n-1)*m;
  }
   int power1(int m,int n)
   { int power=1;
    if(n==0){
      return 1;}
    else
    {for(int i=0;i<n;i++){
        power=power*m;

    }}
   }
  int main()
  {
    int x=power(3,4);
    printf("%d ",x);
    int y=power1(3,4);
    printf("%d ",y);
    return 0;
  }
