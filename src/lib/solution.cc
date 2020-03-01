#include "solution.h"
#include <iostream>

std::vector<int> Solution::Rearrangevector(const std::vector<int> &input, const int &index)
{
  std::vector<int> result_l, result_r;
  if (index < 0 || input.size() == 0 || index >= (int)input.size())
    return input;

  for (unsigned int i = 0; i < input.size(); i++)
  {
    if ((int)i == index)
      continue;

    if (input[index] < input[i])
    {
      result_r.push_back(input[i]);
    }
    else {
     result_l.push_back(input[i]);
    }
  }

  result_l.push_back(input[index]);
  result_l.insert(result_l.end(), result_r.begin(), result_r.end());

  return result_l;
}