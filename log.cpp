#include <iostream>
#include "Log.h"

void Log(std::string message)
{
    std:: cout << message <<std::endl;
}

void initlog()
{ 
    Log("Init log");
}
