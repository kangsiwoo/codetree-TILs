#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 1, b = 2, c = 3;
    int sum=0;
    sum += a;
    sum += b;
    sum += c;
    a = sum;
    b = sum;
    c = sum;
    printf("%d %d %d", sum, sum, sum);

    return 0;
}