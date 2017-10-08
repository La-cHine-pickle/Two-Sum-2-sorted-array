#include <stdio.h>
int main(void)
{
    int sorted[]={1,3,7,9,11,14,16,18,21,35,42,78,80,88};
    int target=83;
    int left;
    int right=sizeof(sorted)/sizeof(int)-1;
    for (int i = 0; i < sizeof(sorted)/sizeof(int); i++) {
        int temp=target-sorted[i];
        left=i+1;
        while (sorted[i]<target&&left<=right) {
            int mid =(left+right)/2;
            if (sorted[mid]<temp) {
                left=mid+1;
            }
            else if(sorted[mid]>temp){
            right=mid-1;
            }
            else {
                printf("%d,%d\n",i,mid);
                return 0;
                 }
        }
    }
    return 0;
}
