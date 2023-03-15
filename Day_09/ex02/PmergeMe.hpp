#ifndef PMERGEME
#define PMERGEME

#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <ctime>
#include <algorithm>

void    merge(std::vector<int>& arr,std::vector<int>& left,std::vector<int>& right);
void    insertionSort(std::vector<int>& arr);
void    mergeInsert(std::vector<int>& arr);

void mergeInsert(std::deque<int>& arr);
void insertionSort(std::deque<int>& arr);
void merge(std::deque<int>& arr, std::deque<int>& left, std::deque<int>& right);


#endif