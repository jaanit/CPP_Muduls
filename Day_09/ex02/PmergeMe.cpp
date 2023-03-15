#include "PmergeMe.hpp"

void    merge(std::vector<int>& arr,std::vector<int>& left,std::vector<int>& right)
{
    size_t l = 0,r = 0,i = 0;
    while(l<left.size() && r<right.size())
    {
        if (left[l] < right[r])
        {
            arr[i] = left[l];
            l++;
        }
        else
        {
            arr[i] = right[r];
            r++;
        }
        i++;
    }
    while(l<left.size())
    {
        arr[i] = left[l];
        i++;
        l++;
    }
    while(r<right.size())
    {
        arr[i] = right[r];
        i++;
        r++;
    }
}

void    insertionSort(std::vector<int>& arr)
{
    int n = arr.size();
    for (int i = 1; i<n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j + 1] = arr[j];
            j-=1;
        }
        arr[j + 1] = key;
    }
}

void    mergeInsert(std::vector<int>& arr)
{
    int mid;
    if (arr.size() == 1)
        return;
    if (arr.size() <10)
        insertionSort(arr);
    else
    {
        mid = arr.size() /2;
        std::vector<int> left(arr.begin(), arr.begin() + mid);
        std::vector<int> right(arr.begin() + mid, arr.end());
        mergeInsert(left);
        mergeInsert(right);
        merge(arr,left,right);
    }
}