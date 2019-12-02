#include <stdio.h>
#include <math.h>

void update(int *a,int *b) 
{ *a += *b;            //a becomes a+b
*b = 2*(*b) - (*a);  //2b - (a+b) = -a+b      
*b = *b > 0 ? *b : -1*(*b);        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

