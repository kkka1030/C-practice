#include <iostream>

class MyClass {
public:
    int* ptr;
    MyClass(int val) : ptr(new int(val)) {}
    // 拷贝构造函数
    MyClass(const MyClass& other) : ptr(new int(*other.ptr)) {
        std::cout << "Copy Constructor called" << std::endl;
    }
    //移动构造函数
    MyClass(MyClass&& other) noexcept : ptr(other.ptr) {
        other.ptr = nullptr; // 转移所有权
        std::cout << "Move Constructor called" << std::endl;
    }
    // 拷贝赋值运算符
    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            return *this; // 自我赋值检查
        }
        delete ptr; // 释放旧资源
        ptr = new int(*other.ptr); // 分配新资源
        std::cout << "Copy Assignment Operator called" << std::endl;
        return *this;
    }
    ~MyClass() {
        delete ptr;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1; // 拷贝构造函数被调用
    std::cout << "obj1.ptr: " << obj1.ptr << " *obj1.ptr: " << *(obj1.ptr) << std::endl;
    std::cout << "obj2.ptr: " << obj2.ptr << " *obj2.ptr: " << *(obj2.ptr) << std::endl;
    MyClass obj3 = std::move(obj1); // 移动构造函数被调用
    std::cout << "obj3.ptr: " << *obj3.ptr << std::endl;
    MyClass obj4(20);
    obj4 = obj2; // 拷贝赋值运算符被调用
    std::cout << "obj4.ptr: " << *obj4.ptr << std::endl;
    return 0;
}
