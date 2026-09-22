
#include "stats.hpp"

int main()
{
    Stats statsObj;

    std::string fileName = "../books/frankenstein.txt";

    int numWords = statsObj.countWords(fileName);

    std::cout << "Found " << numWords << " total words" << std::endl;

    return 0;
}
