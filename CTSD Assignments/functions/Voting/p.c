#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void vote(int n){
    if ( n > 18 ) printf("Eligible for vote");
    else printf("Not Eligible");
}
int main(){
    int n;
    scanf("%d", &n);
    vote(n);
    return 0;
}