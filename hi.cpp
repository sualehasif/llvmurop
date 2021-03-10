#include <vector>
#include <cilk/cilk.h>
#include <iostream>

int functionwithuniquename() {
    int sum = 0;
    /*for (auto x : v) {
        sum += x;
    }*/
    cilk_for (int i = 0; i < 1000; i++) {
	    sum += i;
    }
    return 0;
}

int main()
{
	std::vector<int> v;
    for(int i = 0; i<100; i++){
    	v.push_back(i);
    }
    int x = functionwithuniquename();

    std::cout << x << std::endl;

    return 0;
}
