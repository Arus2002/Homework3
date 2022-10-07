#include "ComplexNum.h"
#include <vector>
#include <algorithm>
#include <iostream>


int main()
{

	ComplexNum a{3 , 4};
	ComplexNum b{1 , 2};
        ComplexNum c{4 , 5};

	std::vector<double> vec;

	vec.push_back(a.getModuls());
	vec.push_back(b.getModuls());
	vec.push_back(c.getModuls());

	for(int i = 0 ; i < vec.size() - 1 ; ++i)
	{
		if(vec[i] > vec[i+1])
		{
		std::swap(vec[i] , vec[i+1]);
		}
	}

	for(int i = 0 ; i < vec.size()  ; ++i)
        {
          std::cout << vec[i] << " " ;
	}




}
