#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
class sth {
public:
    // 成员变量和成员函数可以使用类型T
    T data;
    
    sth(T d) : data(d) {}
    
    void display() {
        std::cout << "Data: " << data << std::endl;
    }
};

template <typename T1, typename T2>
class Point {
private:
    T1 x;
    T2 y;
public:
    Point(T1 x_val, T2 y_val) : x(x_val), y(y_val) {}
    
    void display() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

class MyClass {
public:
    int value;
    
    MyClass(int v) : value(v) {}
    
    // 重载小于运算符
    bool operator<(const MyClass& other) const {
        return value < other.value;
    }
    
    // 重载等于运算符
    bool operator==(const MyClass& other) const {
        return value == other.value;
    }
};

int main() {
    int x = 10, y = 20;
    double a = 5.6, b = 3.4;

    std::cout << max(x, y) << std::endl;  // 输出20，模板实例化为max(int, int)
    std::cout << max(a, b) << std::endl;  // 输出5.6，模板实例化为max(double, double)
    std::cin.get();
    
    sth<int> obj1(10);        // T 被替换为 int
    sth<double> obj2(3.14);   // T 被替换为 double
    obj1.display();  // 输出: Data: 10
    obj2.display();  // 输出: Data: 3.14
    std::cin.get();

    Point<int, double> p1(3, 4.5);
    p1.display();  // 输出: x: 3, y: 4.5
    std::cin.get();

    MyClass obj_1(10);
    MyClass obj_2(20);
    
    if (obj_1 < obj_2) {
        std::cout << "obj_1 is less than obj_2" << std::endl;
    }
    
    if (obj_1 == obj_2) {
        std::cout << "obj_1 is equal to obj_2" << std::endl;
    } else {
        std::cout << "ob_j1 is not equal to obj_2" << std::endl;
    }

    return 0;
}

