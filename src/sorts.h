#ifndef SORTS
#define SORTS

#include <vector>

namespace Sorts
{
    template<typename T>
    void merge_sort(std::vector<T>& source);

    template<typename T>
    void merge_helper(std::vector<T>& source, int low, int high);

    template<typename T>
    void merge(std::vector<T>& source, int low, int mid, int high);
}

template<typename T>
void Sorts::merge_sort(std::vector<T>& source)
{
    merge_helper(source, 0, source.size() - 1);
}

template<typename T>
void Sorts::merge_helper(std::vector<T>& source, int low, int high)
{
    if (high <= low)
    {
        return;
    }
    int mid = (high + low) / 2;
    merge_helper(source, low, mid);
    merge_helper(source, mid + 1, high);
    merge(source, low, mid, high);
}

template<typename T>
void Sorts::merge(std::vector<T>& source, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;

    std::vector<T> aux(source.size());
    for (int k = low; k <= high; k++)
    {
        aux[k] = source[k];
    }
    for (int k = low; k <= high; k++)
    {
        if (i > mid)
        {
            source[k] = aux[j++];
        }
        else if (j > high)
        {
            source[k] = aux[i++];
        }
        else if (aux[j] < aux[i])
        {
            source[k] = aux[j++];
        }
        else
        {
            source[k] = aux[i++];
        }
    }
}

#endif
