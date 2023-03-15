#include "PmergeMe.hpp"


void merge(std::deque<int>& arr, std::deque<int>& left, std::deque<int>& right)
{
    std::deque<int>::iterator itArr = arr.begin(), itLeft = left.begin(), itRight = right.begin();
    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft < *itRight)
        {
            *itArr = *itLeft;
            itLeft++;
        }
        else
        {
            *itArr = *itRight;
            itRight++;
        }
        itArr++;
    }
    while (itLeft != left.end())
    {
        *itArr = *itLeft;
        itArr++;
        itLeft++;
    }
    while (itRight != right.end())
    { 
        *itArr = *itRight;
        itArr++;
        itRight++;
    }
}

void insertionSort(std::deque<int>& arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

void mergeInsert(std::deque<int>& arr)
{
    int mid;
    if (arr.size() < 10)
        insertionSort(arr);

    else
    {
        mid = arr.size() / 2;
        std::deque<int> left(arr.begin(), arr.begin() + mid);
        std::deque<int> right(arr.begin() + mid, arr.end());
        mergeInsert(left);
        mergeInsert(right);
        merge(arr, left, right);
    }
}
