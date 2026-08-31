#include <stdio.h>

int main()
{
    int i = 2;
    float f = 8.2;
    double d = 658347584;
    long int li = 759834;
    long double ld = 74837293;
    char ch = 'a';

    printf("Integer is: %d\n", i);
    printf("Float is: %.1f\n", f);
    printf("Double is: %lf\n", d);
    printf("Long Integer is: %ld\n", li);
    printf("Long Double is: %Lf\n", ld);
    printf("Char is: %c\n", ch);

    return 0;
}
