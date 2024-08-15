# include <stdio.h>

int main(void)
{
    char str[256];
    scanf("%s", &str[0]); /* 0番の要素のアドレス */
    printf("%s\n", str);

    char str2[256] = "DRAGON";
    scanf("%s", &str2[6]); /* 6番の要素のアドレス */
    printf("%s\n", str2);

    char str3[256] = "DRAGON";
    scanf("%s", &str3[3]); /* 6番の要素のアドレス */
    printf("%s\n", str3);
    return 0;
}
