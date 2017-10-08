#include <stdio.h>
int main(void)
{
    int data[]={1,3,4,6,7,9,12,13,17,23,28,33,36,42,47,56,99};
    int head=0;
    int tail=sizeof(data)/sizeof(int)-1;
    int target=103;
    while(tail>head){
        if(data[head]+data[tail]>target){
            tail--;
        }
        else if (data[head]+data[tail]<target){
            head++;
        }
        else {
            printf("%d,%d\n", head,tail);
            return 0;
        }
    }

    return 0;
}
