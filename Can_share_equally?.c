/* package codechef; // don't place package name! */

#include<stdio.h>



    int main()
    {
        
            
            int x;
            int y;
            scanf("%d%d",&x,&y);
            if (x == 0 && y % 2 == 0){
                printf("YES");
            }
            else if (x == 0 && y % 2 != 0){
                printf("NO");
            }
            else if ((x + (2 * y)) % 2 == 0){
            printf("YES");
            }
            else {
                printf("NO");
            }
            
        
    }
