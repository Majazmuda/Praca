#include "wyszukiwanie.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Sortowanie przez wstawianie
    vector<int> arr_insertion = {12, 11, 13, 5, 6};
    cout << "Tablica przed sortowaniem przez wstawianie:\n";
    for (int i = 0; i < arr_insertion.size(); i++)
        cout << arr_insertion[i] << " ";
    cout << "\n";
    insertionSort(arr_insertion);
    cout << "Tablica po sortowaniu:\n";
    for (int i = 0; i < arr_insertion.size(); i++)
        cout << arr_insertion[i] << " ";
    cout << "\n\n";

    // Wyszukiwanie liniowe
    vector<int> arr_linear = {12, 5, 23, 8, 17, 3};
    int target_linear = 17;
    int result_linear = linearSearch(arr_linear, target_linear);
    if (result_linear != -1) {
        cout << "Element " << target_linear << " znaleziony pod indeksem: " << result_linear << endl;
    } else {
        cout << "Element " << target_linear << " nie został znaleziony w tablicy." << endl;
    }
    // Wyszukiwanie binarne
    vector<int> arr_binary = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int target_binary = 13;
    int result_binary = binarySearch(arr_binary, target_binary);
    if (result_binary != -1) {
        cout << "Element " << target_binary << " znaleziony pod indeksem: " << result_binary << endl;
    } else {
        cout << "Element " << target_binary << " nie został znaleziony w tablicy." << endl;
    }

    return 0;
}
