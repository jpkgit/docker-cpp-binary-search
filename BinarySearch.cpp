#include <iostream>

int search (int a[], int v, int l, int r)
{
    while (r >= 1)
    {
        int m = (l+r) / 2;

        std::cout << "m / v / l / r " << m << " " << v << " " << l << " " << r << "\n" ;

        if (v == a[m])        
            return m;

        if (v < a[m])
            r = m - 1;
        else
            l = m + 1;
    }

    return -1;
}

int main (int argc, char const *argv[])
{
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int search_val = 5;

    int val = search(a, 5, 1, 9);
    std::cout << "search found value " << search_val << " at position " << val << "\n";
    return 0;
}

