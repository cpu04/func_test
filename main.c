#include <stdio.h>
#include "sub.h"

int main(void)
{
    int ans = 0;
    int i, y = 0;
    printf("숫자를 입력해주세요 \n");
    scanf("%d %d", &i,&y);
    ans = add(i,y);

    printf("makefile 테스트 \n");
    printf("makefile로 테스트하여 얻은 숫자값은 %d 입니다. \n", ans);
    return 0;
}