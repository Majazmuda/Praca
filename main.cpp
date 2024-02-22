#include "sortowanie.hpp"
#include <iostream>
using namespace std;
int main() {
    int arr_bubble[] = {64, 34, 25, 12, 22, 11, 90};
    int n_bubble = sizeof(arr_bubble) / sizeof(arr_bubble[0]);

    cout << "Tablica przed sortowaniem:\n";
    for (int i = 0; i < n_bubble; i++)
        cout << arr_bubble[i] << " ";
    cout << "\n";

    bubbleSort(arr_bubble, n_bubble);

    cout << "Tablica po:\n";
    for (int i = 0; i < n_bubble; i++)
        cout << arr_bubble[i] << " ";
    cout << "\n\n";

    int arr_cocktail[] = {64, 34, 25, 12, 22, 11, 90};
    int n_cocktail = sizeof(arr_cocktail) / sizeof(arr_cocktail[0]);

    cout << "Tablica przed sortowaniem:\n";
    for (int i = 0; i < n_cocktail; i++)
        cout << arr_cocktail[i] << " ";
    cout << "\n";

    cocktailSort(arr_cocktail, n_cocktail);

    cout << "Tablica po:\n";
    for (int i = 0; i < n_cocktail; i++)
        cout << arr_cocktail[i] << " ";
    cout << "\n\n";

    int arr_merge[] = {12, 11, 13, 5, 6, 7};
    int n_merge = sizeof(arr_merge) / sizeof(arr_merge[0]);

    cout << "Tablica przed:\n";
    for (int i = 0; i < n_merge; i++)
        cout << arr_merge[i] << " ";
    cout << "\n";

    mergeSort(arr_merge, 0, n_merge - 1);

    cout << "Tablica po:\n";
    for (int i = 0; i < n_merge; i++)
        cout << arr_merge[i] << " ";
    cout << "\n\n";

    int arr_quick[] = {10, 7, 8, 9, 1, 5};
    int n_quick = sizeof(arr_quick) / sizeof(arr_quick[0]);

    cout << "Tablica przed sortowaniem:\n";
    for (int i = 0; i < n_quick; i++)
        cout << arr_quick[i] << " ";
    cout << "\n";

    quickSort(arr_quick, 0, n_quick - 1);

    cout << "Tablica po:\n";
    for (int i = 0; i < n_quick; i++)
        cout << arr_quick[i] << " ";
    cout << "\n";

    return 0;
}

