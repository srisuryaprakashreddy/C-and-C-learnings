//recursive function
 #include<stdio.h>
 #include<math.h>
 //using static variables
 float e(float x,float n){
    static float p=1,f=1;
    float r;
    if(n==0)
    return 1;
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
 }
 int main()
 {
    float d=e(1,10);
    printf("%f ",d);
    return 0;
 }