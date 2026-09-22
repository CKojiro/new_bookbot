
#include "stats.hpp"

std::string Stats::getBookText(std::string theFileName)
{
    std::string output = "";
    std::string word;

    std::ifstream inFile;

    inFile.open(theFileName);

    if (!inFile)
    {
        std::cerr << "Unable to open file " + theFileName;
        exit(1);
    }

    while (inFile >> word)
    {
        output += word + " ";
    }

    inFile.close();

    return output;
}

int Stats::countWords(std::string theFileName)
{
    int count = 0;
    std::string word;

    std::ifstream inFile;

    inFile.open(theFileName);

    if (!inFile)
    {
        std::cerr << "Unable to open file " + theFileName;
        exit(1);
    }

    while (inFile >> word)
    {
        count++;
    }

    inFile.close();

    return count;
}

void Stats::countLetters(std::string theWord)
{
    for (char c : theWord)
    {
        charFreq[c]++;
    }
}

std::unordered_map<char, int> Stats::getCharFreq()
{
    return charFreq;
}
