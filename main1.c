//九九乘法表
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=1;
    
    while (i<=9) {
        
        int j=1;
        while (j<=i) {
            
            printf("%d*%d=%d\t",j,i,(i*j));
            
            ++j;
        }
        
        ++i;
        printf("\n");
    }
    
    return 0;
}
