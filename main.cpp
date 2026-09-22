
#include "stats.hpp"
#include <vector>

int main()
{
    Stats statsObj;

    std::string fileName = "../books/frankenstein.txt";

    int numWords = statsObj.countWords(fileName);
    statsObj.countLetters(fileName);

    std::cout << "============ NEW_BOOKBOT ============" << std::endl;
    std::cout << "Analyzing book found at " << fileName << "..." << std::endl;
    std::cout << "----------- Word Count ----------" << std::endl;
    std::cout << "Found " << numWords << " total words" << std::endl;
    std::cout << "--------- Character Count -------" << std::endl;

    std::unordered_map<char, int> frequencies = statsObj.getCharFreq();

    std::vector<std::pair<char, int>> frequency(frequencies.begin(), frequencies.end());

    std::sort(frequency.begin(), frequency.end(), [](const auto& a, const auto& b)
    {
        return a.second > b.second;
    });

    for (const auto& [key, value] : frequency)
    {
        std::cout << "'" << key << "'" << ": " << value << std::endl;
    }

    return 0;
}
