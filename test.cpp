#include <iostream>
#include "log.h"
#include "Intcell.h"
#include <cstring>
class Player
{
public:
    int x=0;
    int y=0;
    int speed=1;
    void Move(int xa,int ya)
    {
    x += xa * speed;
    y += ya * speed;
    }
};
void Increment(int* value)
    {
        (*value)++;
    }


int main()
{
    Player player;
    player.Move(1,-1);
    std:: cout << player.x <<std::endl;
    
    Intcell m;
    m.write(5);
    std:: cout << m.read() <<std::endl;
    std::cin.get();
    int example[5];
    example[0]=2;
    example[4]=4;
    std::cout << example[0] << std::endl;
    std::cout << example << std::endl;
    for (int i = 0;i < 5; i++)
    {
        example[i]=2;
    }
    int* ptr = example;
    *(ptr+2) = 6;
    std::cout << *ptr << std::endl;

    const char* name = "kkka";
    char name2[4]={'k','k','k','a'};
    std::cout << (name+1)[2] << std::endl;
    std::cout << name2 << std::endl;
    std::string name3="kkka";
    std::cout << name3 << std::endl;
    bool constains = name3.find("ka") != std::string::npos;
    std::cout << constains << std::endl;
    std::cin.get();

    int var = 8;
    int* ptr1 = &var;
    *ptr1=10;
    char* buffer = new char[8];
    memset(buffer,0,8);
    delete[] buffer;

    int a =5;
    int& ref = a;
    ref =2;
    std::cout << a << std::endl;
    Increment(&a);
    std::cout << a << std::endl;



}