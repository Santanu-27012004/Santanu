#include <stdio.h>
#include <math.h>
int sizee(int a);
int sizee(int a){
    int x = 0;
    while(a>0){
        a/=10;
        x++;
    }
    return x;

}
int main() {
    
    int num,exp,rem,armstrong = 0;
    int copy;
    printf("Enter the number : ");
    scanf("%d", &num);
    copy = num;
    exp = sizee(num);
    printf("The sizee is : %d\n",exp);
    while (copy>0)
    {
        rem = copy % 10;
        rem = pow(rem,exp);
        armstrong = armstrong + rem;
        copy/=10;

    }
    num = (int) num;
    printf("The armstrong number is %d\n",armstrong);
    if (armstrong == num)
    {
        printf("%d is a armstrong number",(int) num);
    }
    else{
        printf("%d isn't a armstrong number",(int)num);
    }
    
 
    return 0;
}