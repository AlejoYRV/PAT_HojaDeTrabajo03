#include "Ejercicio02.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    unordered_map<string, vector<string>> anagramMap;

    for (const string& word : strings)
    {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());

        anagramMap[sortedWord].push_back(word);
    }

    vector<vector<string>>* result = new vector<vector<string>>();
    for (const auto& entry : anagramMap)
    {
        result->push_back(entry.second);
    }

    return result;
}

