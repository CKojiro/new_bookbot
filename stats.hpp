
#pragma once

#include <string>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <unordered_map>

class Stats
{
private:
    std::unordered_map<char, int> charFreq;

public:
    std::string getBookText(std::string theFileName);

    int countWords(std::string theFileName);

    void countLetters(std::string theWord);

    std::unordered_map<char, int> getCharFreq();
};
