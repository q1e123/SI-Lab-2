#include "List.h"
#include <iostream>

std::vector<int> ListManager::generate(const size_t n)
{
	std::srand(unsigned(std::time(nullptr)));
	std::vector<int> list(n);
	std::generate(list.begin(), list.end(), std::rand);
	return list;
}


void ListManager::sort(std::vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++) {
		for (int j = i; j < (vec.size()); j++) {
			if (vec[i] > vec[j]) {
				std::swap(vec[i], vec[j]);
			}
		}
	}
}

std::set<int> ListManager::merge(std::vector<int> v1, std::vector<int> v2)
{
	std::set<int> merged_set;
	for (int element : v1) {
		merged_set.insert(element);
	}
	for (int element : v2) {
		merged_set.insert(element);
	}
	return  merged_set;
	
}

void ListManager::print(std::vector<int> v) {
	for (int element : v) {
		std::cout << element << " ";
	}
	std::cout << std::endl;
}