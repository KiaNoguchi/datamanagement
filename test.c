#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, j, n;
    char a[256];

    srand((unsigned)time(NULL));

    printf("What is your name?\n");
    scanf("%s", &a);
    printf("こんにちは、%s", a);
    printf("サイコロを振ってみると...\n");

    i = rand() % 6 + 1;
    printf("Die1：%d\n", i);
    j = rand() % 6 + 1;
    printf("Die2：%d\n", j);

    printf("total value：%d\n", i + j);
    printf("%s won!\n",a);

    return 0;
}
