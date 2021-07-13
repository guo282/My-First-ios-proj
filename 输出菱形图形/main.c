/*输出菱形图形*/
#include <stdio.h>
int main() {
    int i,j,k;
    for(i=1;i<=5;i++)/*输出前五行*/
    {
        for(j=1;j<=5-i;j++){
            printf(" ");
        }/*输出每一行的空格*/
        for(k=1;k<=(2*i-1);k++){
            printf("0");
        }/*输出每一行对应的0*/
        for(j=1;j<=5-i;j++){
            printf(" ");
        }        printf("\n");
    }
    for(i=6;i<=9;i++)/*输出后四行的情况*/
    {
        for(j=1;j<=i-5;j++){
            printf(" ");
        }
        for(k=1;k<=(19-2*i);k++){
            printf("0");
        }
        for(j=1;j<=i-5;j++){
            printf(" ");
        }
        printf("\n");
    }    return 0;
}
