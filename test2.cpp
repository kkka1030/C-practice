#include <iostream>
#include <utility> // std::swap
#include <vector>

void increment(int x) {
    x = x + 1;
    std::cout << "Inside function: " << x << std::endl;
}
void increment2(int* x) {
    *x = *x + 1;
}
void increment3(int& x) {
    x = x + 1;
}

int main() {
    int a = 5;
    increment(a);
    std::cout << "After function: " << a << std::endl;
    increment2(&a);
    std::cout << "After function2: " << a << std::endl;
    increment3(a);
    std::cout << "After function3: " << a << std::endl;
    std::cin.get();

    int x = 10;
    int y = 20;
    std::swap(x, y);
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cin.get();

    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2;
    v2 = std::move(v1); // v1 的内容被“移动”到 v2 中
    std::cout << "v1 size: " << v1.size() << std::endl;
    std::cout << "v2 size: " << v2.size() << std::endl;

}