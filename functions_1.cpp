#include "easy_list.h"

void itc_even_index_list (const vector <int> & mass, vector <int> & mass2)
{
	for (unsigned int i = 0; i < mass.size(); i++)
	{
		if (i % 2 == 0)
			mass2.push_back(mass[i]);
	}
}

void itc_even_parts_list (const vector <int> & mass, vector <int> & mass2)
{
    for (unsigned int i = 0; i < mass.size(); i++)
	{
		if (i % 2 != 0)
			mass2.push_back(mass[i]);
	}
}

int itc_positive_list(const vector <int> & mass)
{
    int cnt = 0;
    for (unsigned int i = 0; i < mass.size(); i++)
    {
        if (mass[i] >= 0)
            cnt++;
    }
    return cnt;
}

int itc_sl_list(const vector <int> & mass)
{
    int cnt = 0;
    for (unsigned int i = 0; i < mass.size() - 1; i++)
    {
        if (mass[i + 1] > mass[i])
            cnt++;
    }
    return cnt;
}

bool its_same_parts_list(const vector <int> & mass)
{
    if (mass.size() > 1)
    {
        for (unsigned int i = 0; i < mass.size() - 1; i++)
        {
            if ((mass[i] >= 0 && mass[i + 1] >= 0) || (mass[i] < 0 && mass[i + 1] < 0))
                return true;
        }
    }
    return false;
}
