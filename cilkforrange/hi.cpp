#include <vector>
#include <iostream>
#include <cilk/cilk.h>

int functionwithuniquename(std::vector<int> v) {
    int sum = 0;
    cilk_for (auto x : v) {
        sum += x;
	std::cout << x << "\n";
    }
    /*
    cilk_for (int i = 0; i < v.size(); i++) {
	    std::cout << v[i] << '\n';
    }
    */
    return sum;
}

int main()
{
	std::vector<int> v;
    for(int i = 0; i<100; i++){
    	v.push_back(i);
    }
    int x = functionwithuniquename(v);

    std::cout << x << std::endl;

    return 0;
}
