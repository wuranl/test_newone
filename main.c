#include <stdio.h>
#include <string.h>
/*int main(void)
{
    const int score = 35;
    if(score < 60)
    {
        if(score < 30)
        {
            printf("read java");
        }
         else
         {
             printf("read c++");
         }

    }


}*/

/*int main(void)
{
    char c ;
    gets("c");
    switch(c){
        case 'A':
            printf("985");
            break;
        case 'B':
            printf("211");
            break;
        case 'C':
            printf("大专");
            break;
        default:
            printf("其他");
    }

}*/

/*int main(void){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == j) break;
            printf("%d,%d\n", i, j);
        }

    }
}*/

/*int main(void){
    int i = 100;
    do{
        printf("%d\n",i);
        i /= 3;
        if(i < 30) break;
    }while(i > 0);
}*/

/*int main(void){
    for (int i = 100; i < 1000 ; ++i) {
        int a = i % 10 , b = i /10 %10 ,c = i /100;
        if((a*a*a+b*b*b+c*c*c) == i)
            printf("%d\n",i);
        }
    }*/


/*int main(void){
    int target = 13;

    int dp[target];
    dp[0] = dp[1] = 1;
    for (int i = 2; i < 13; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    printf("%d",dp[target-1]);

}*/ //斐波那契数列

/*int main(void){
    int arr[] = {2,5,6,7,8,5}, size = 6, result;
    int dp[size];
    dp[0] = arr[0];
    dp[1] = arr[1] > arr[0] ? arr[1] : arr[0];
    for (int i = 2; i < 6; ++i) {
        dp[i] = dp[i-1] > dp[i-2] + arr[i] ? dp[i-1] : dp[i-2] + arr[i];

    }
    result = dp[size-1];
    printf("%d",result);
}*/ //打家劫舍，动态规划思想

/*int main(void){
    char str[60];
    gets(str);
    int len = strlen(str), left = 0, right = len - 1;
    _Bool flag = 1;
    while(left < right){
        if(str[left] != str[right]){
            flag = 0;
            break;
        }
        left++;
        right--;
    }
    puts(flag ? "yes" : "no");

}*/ //判断回文串

/*int main(void){
    char str1[60], str2[60];
    gets(str1);
    gets(str2);
    unsigned long len2 = strlen(str2), len1 = strlen(str1);
    _Bool flag = 1;
    for (int i = 0; i < len1; ++i) {
        flag = 1;
        for (int j = 0; j < len2; ++j) {
            if(str1[i+j] != str2[j]) {
                flag = 0;
                break;
            }
        }
        if(flag != 0)
            break;

    }
        puts(flag ? "yes" : "no");

}*/  //字符串匹配（暴力解法）



/*int main(void){
    char str1[60], str2[60];
    gets(str1);
    gets(str2);
    unsigned long len1 = strlen(str1), len2 = strlen(str2);
        int next[len2];
        next[0] = 0;
    for (int i = 1; i < len2; ++i) {
        int j = i - 1;
        while (1) {
            if (next[j] == 0 || str2[j] == str2[next[j] - 1]) {
                next[i] = next[j] + 1;
                break;
            }
            j = next[j] - 1;
        }
    }
    for (int i = 0; i < len2; ++i) {
        printf("%d ",next[i]);

    }
    int i = 0, j = 0;
    while(i < len1) {
        if (str1[i] == str2[j]) {
            i++;
            j++;
        } else {
            if (j == 0) {
                i++;
            } else {
                j = next[j] - 1;
            }
        }
        if (j == len2)
            break;
    }
    printf(j == len2 ? "yes" : "no");

}*/  //KMP算法解字符串匹配



/*int findmin(int arr[]);

int main(void){
    int arr[] = {1,4,9,2,-4,7};

    int min = findmin(arr);

    printf("%d",min);
}

int findmin(int arr[]){
    int len = 6;
    for (int i = 0; i < len; ++i) {
        if(arr[i] < 0) return arr[i];
        }
        return 0;
}*/


/*int test(int);

int main(void){
    int n,ChK;
    scanf("%d",&n);
    ChK = test(n);
    printf("%d",ChK);
}

int test(int n){
         if(n == 1) return 1;  //不能无限递归下去，加一个当n = 1 时做结束条件
         return test(n - 1) * n;  //每次都让n乘以其下一级的计算结果，下一级就是n-1
}*/ //递归实现阶乘


int fib(int n){
    if(n == 1 || n == 2) return 1;
    return fib(n-1) +  fib(n-2);
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
}



















