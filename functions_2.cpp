#include "easy_list.h"

void its_rev_list(vector <int> & mass)
{
    unsigned int maxi = mass.size();
    vector <int> res(maxi);
    for (unsigned int i = 0; i < maxi; i++)
    {
        res[i] = mass[maxi - 1 - i];
    }
    mass = res;
}

void itc_rev_par_list(vector <int> & mass)
{
    for (unsigned int i = 0; i < mass.size() - 1; i += 2)
    {
        get_swap(mass[i], mass[i + 1]);
    }
}

void itc_rshift_list(vector <int> & mass)
{
    for (unsigned int i = mass.size() - 1; i > 0; i--)
    {
        get_swap(mass[i], mass[i - 1]);
    }
}

void itc_lshift_list(vector <int> & mass)
{
    for (unsigned int i = 0; i < mass.size() - 1; i++)
    {
        get_swap(mass[i], mass[i + 1]);
    }
}

void itc_super_shift_list(vector <int> & mass, int n)
{
    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            itc_rshift_list(mass);
        }
    }
    else
    {
        get_abs(n);
        for (int i = 0; i < n; i++)
        {
            itc_lshift_list(mass);
        }
    }
}
