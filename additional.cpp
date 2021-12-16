#include "easy_list.h"

void get_swap(int & a, int & b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void get_abs(int & a)
{
    if (a < 0)
        a *= -1;
}
