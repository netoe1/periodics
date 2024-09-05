#ifndef UTILS_HPP
#define UTILS_HPP
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <ctime>
#include <exception>

#pragma region DEFAULT_INTERNAL_CONSTS
const std::string VALID_CHARS = "";
#pragma endregion DEFAULT_INTERNAL CONSTS
#pragma region Defining_namespaces
using std::rand;
using std::setbuf;
using std::srand;
using std::string;
using std::time;
#pragma endregion Defining_namespaces
class Utils
{
public:
    static void clearStdioBuffers();
    static std::string getRandomString(unsigned int length); // here, you should set a size for the return string.
};

void Utils::clearStdioBuffers()
{ // Considering stdin, stdout default's C IO stream.
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
}

std::string Utils::getRandomString(unsigned int length)
{
    try
    {
        if (length <= 0)
        {
            throw std::invalid_argument("You cannot create a invalid string in C++.");
        }
    }
    catch (std::exception &e)
    {
        std::cerr << "Utils.cpp error:" << e.what() << std::endl;
    }

    
    srand(time(NULL));
    std::string _toreturn;
    _toreturn = "";

    for (unsigned int i = 0; i < length; i++)
    {
    }
}

#endif