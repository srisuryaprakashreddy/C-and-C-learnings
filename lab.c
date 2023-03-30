# include <stdio.h>
int s[5] ;
int  top = -1 ;
void push(  ){
    if(top == 5 ){
        printf("stack is full ");
    }
    else{
        int el;
        printf("elenter the emlemnt to insert");
        scanf(" %d" , &el);
        s[++top] = el;
    }
}
void pop() {
    if (top == -1) {
        printf(" stack is empty ");
    } else {
        top--;
        printf("element poped is %d", s[top]);
    }
}
void display()
     {
         if(top == -1 ){
             printf(" stack is empty ");
         }

         else{
             for(int i =  0 ; i< top ; i++){
                 printf("stack %d element is %d \n", i , s[i]);
             }
         }
     }
     void pali(){
    int i , j ,flag ;
    int num[5] , rev[5] ;
     int t=top;
    for (i=0 ; i<top; i++, t-- ){
        num[i]=rev[t]=s[i];
    }
    for(j = 0 ; j<top ; j++){
        if( num[i] != rev[j]){
            printf("it is not a palindrme");
             flag = 0;
        }
        else{
              flag = 1;
        }

    }

    if( flag == 1){
        printf("stack is in palendrome");
    }
}
int main(){
pop();
push();
push();
push();
push();
push();
push();
push();
push();
push();
display();
pali();



return 0;

}
