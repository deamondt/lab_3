#include <stdio.h>
#include <time.h>


int get_random_int(int max_rand)
{
    return rand() % max_rand;
}


int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}


main()
{
    int mas[100];
    int n = 30, i;
    int max_rand;

    srand(time(0));

    for (i = 0; i < n; i++) {
        mas[i] = get_random_int_min_max(-20, 20);
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", mas[i]);
    }
}
