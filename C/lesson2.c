#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){
    //问题1：对于一千万个不重复、无序的无符号整数进行排序，要求尽可能的块
    //输入：大量、随机排列、整数
    //时间上要块
    //输出：做一个排序
    //问题规模：
    int i=0;
    int * a;
    a=(int*)malloc(sizeof(int)*N);
    for(;i<N;i++){
        //降序
        a[i]=N-i;
    }
    for (i=0;i<N;i++){
        printf("%d,",a[i]);
    }
    //利用qsort算法来作升序排序
    qsort(a,N, sizeof(int));

    //释放内存
    free(a);
    return 0;
}