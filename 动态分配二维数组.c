//这是去博纳讯动公司面试的时候遇到的
//虽然听说过这个题在面试c的时候可能会考，但我又不找c开发，所以也没看过
//当时我答的是方法1，那个人说“这肯定不对”，由于对c不算熟悉，所以当时没说什么，现在想想好气
//不过想想那个人肯定也是网上看了方法2，背下了，对于其它的答案都觉得不对。还好这种人没当我领导

#include <stdio.h>
#include <stdlib.h>

void* malloc_int_array(int line, int row){
    return malloc(sizeof(int)*line*row);
}

void* malloc_int_array1(int line, int row){
    int **p = malloc(sizeof(int*)*line);
    for(int i=0;i<line;i++)
        *(p+i) = malloc(sizeof(int)*row);
    return p;
}

int main(int argc, char* argv[]){
    int line;
    int row;
    printf("input line number:");
    scanf("%d", &line);
    printf("input row number:");
    scanf("%d", &row);
    int total = 0;
    //int (*p)[row] = malloc_int_array(line, row);
    int **p = malloc_int_array1(line, row);
    for(int i=0;i<line;i++){
        for(int j=0;j<row;j++){
            p[i][j] = total;
            total += 1;
        }
    }
    for(int i=0;i<line;i++){
        for(int j=0;j<row;j++){
            printf("%d ",  p[i][j]);
        }
        printf("\n");
    }
    free(p);
    return 0;
}
