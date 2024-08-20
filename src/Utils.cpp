#ifndef UTILS_HPP
#define UTILS_HPP
#define uint unsigned int
#include <cstdio>
#include <string>
#include <ctime>

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
    static void getRandomString(uint length); // here, you should set a size for the return string.
};

void Utils::clearStdioBuffers()
{ // Considering stdin, stdout default's C IO stream.
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
}

void Utils::getRandomString(uint length)
{
    srand(time(NULL));
}

#endif