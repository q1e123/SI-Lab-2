#pragma once
#include <vector>
#include <algorithm>
#include <ctime>
#include <set>

namespace ListManager
{
	std::vector<int> generate(const size_t n);
	void sort(std::vector<int> &v);
	std::set<int> merge(std::vector<int> v1, std::vector<int> v2);
	void print(std::vector<int> v);
};

