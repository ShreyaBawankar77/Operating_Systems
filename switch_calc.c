#include <stdio.h>
int main(){
    int a,b,ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1.add 2.sub 3.mul 4.div\n");
    scanf("%d", &ch);
    if(ch == 1)
       printf("Add = %d\n", a+b);
    else if (ch == 2)
       printf("Sub = %d\n",a-b);
    else if (ch == 3)
       printf("Mul = %d\n", a*b);
    else if (ch == 4)
       printf("Div = %d\n", a/b);
    else
       printf("Invalid choice\n");
    return 0;
}

     
