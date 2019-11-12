/* 程式功能：選擇排序法(selection sort)：輸入數個數值，並以選擇排序法由小至大將數值排序*/
/* 輸入：data[1], data[2], ..., data[n]，共n個資料*/
/* 輸出：data[1], data[2], ..., data[n]；其中i < j，data[i] <= data[j] */

#include <stdio.h>      /* Selection Sort */

void main(void) {
    int data[50];
    int i, j, n, temp, min, k; /* min 代表數列中最小的值 ; k 代表目前 min 的位址 */

    printf("輸入數值的個數： ");    /*輸入n */
    scanf("%d" ,&n);
    printf("\n");

    for (i=1;i<=n;i++) {      /*輸入n個數值 */
        printf("請輸入數值：");
        printf("data[%d]=",i);
        scanf("%d",&data[i]);
    }

    for (i=1; i<n; i++) {
        min = data[i];  /* 紀錄 min 為 data[i] */
        k = i;                  /* 紀錄 min 的位址為 k */
        for(j=i+1; j<=n; j++) {
            if (data[j]<min) { /* 比較 data[j] 是否小於 min */
                min = data[j];  /* 將 min 紀錄為 data[j] */
                k = j;          /* 將 min 的位址 k 改為 j */
            }
        }
        temp = data[i];   /* 將 min 與 data[i] 互換 */
        data[i] = data[k];
        data[k] = temp;
    }
    printf("\n資料排序後為\n");     /* 列出排序好的結果 */
    for(i = 1; i <= n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}
