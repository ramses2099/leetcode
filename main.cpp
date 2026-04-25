#include <bits/stdc++.h>
#include "template.cpp"

using namespace std;

int main()
{

    char Char = 'A';
    int arr[] = {1, 2, 3, 4};
    bitset<8> Bitset(100);
    map<string, int> map_String_Int = {{"apple", 5}, {"banana", 3}, {"orange", 7}};

    debug(Char, arr, Bitset, map_String_Int);

    return EXIT_SUCCESS;
}