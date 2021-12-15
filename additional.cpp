#include "easy_list.h"

void print_vector(vector <int> & mass)
{
	for (unsigned int i = 0; i < mass.size(); i++)
		cout << mass[i] << " ";
}

void get_swap(int & a, int & b)
{
    int tmp = a;
    a = b; b = tmp;
}

void get_abs(int & a)
{
    if (a < 0)
        a *= -1;
}
