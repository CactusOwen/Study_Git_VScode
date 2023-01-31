#include <iostream>
#include <vector>

template <typename Nums>
int sum_all(Nums& nums){
    int sum;
    for (auto num: nums){
        sum += num;
    }
    return sum;
}

template <int N>
struct Fac{
    static const int result = N * Fac<N-1>::result;
};

template <>
struct Fac<1>{
    static const int result = 1;
};

int main(){
    std::vector<int> vec;
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(34);
    vec.push_back(5);
    vec.push_back(14);
    std::cout << sum_all(vec) << std::endl;

    for(auto n: vec){
        std::cout << n << "'s Factorial: " << Fac<n>::result << std::endl;
    }

    int a{7};
    std::cout << a << "'s Factorial: " << Fac<a>::result << std::endl;
}