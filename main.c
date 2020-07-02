#include <stdio.h>

//MrHaddis
//https://github.com/MrHaddis/PAT1023

int main() {
    int a;
    //数字个数的数组
    int numberArray[10];
    //标志位
    int tag = 0;
    //循环接收
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a);
        //数组的顺序对应的刚好是从小到大输出的顺序
        //最小的数字组成 一定是开始往后数字的大小递增 才为最小。
        numberArray[i] = a;
    }
    for (int j = 0; j < 10; ++j) {
        //个数不为0的数字
        //且不能为0 因为第一位不能是0，所以判断是否是第一位
        if (numberArray[j] != 0 && j != 0) {
            //个数不为0  那么循环输出这个个数对应的数
            for (int i = 0; i < numberArray[j]; ++i) {
                if (i == 0) {
                    //在输出了第一个数字以后，需要去判断是否有0
                    printf("%d", j);
                    //因为这时候0才是最小
                    if (tag == 0) {
                        if (numberArray[0] != 0) {
                            //为0的数字
                            for (int i = 0; i < numberArray[0]; ++i) {
                                printf("0");
                            }
                            //更新标记位
                            tag = 1;
                        }
                    }
                } else {
                    //不是第一位就不用判断了 继续输出即可
                    printf("%d", j);
                }
            }
        }
    }
    return 0;
}
