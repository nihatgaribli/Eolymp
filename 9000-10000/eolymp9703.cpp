#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    map<string, int> species_count;
    string species;
    int max_count = 0;
    string dominant_species;

    // Bütün heyvanları sayırıq və hər növün neçə dəfə təkrarlandığını xəritədə saxlayırıq
    for (int i = 0; i < n; i++) {
        cin >> species;
        species_count[species]++;
        
        // Ən çox təkrar olunan növü tapırıq
        if (species_count[species] > max_count) {
            max_count = species_count[species];
            dominant_species = species;
        }
    }

    int sum_of_others = n - max_count;

    // Ən çox təkrar olunan növ digər növlərin sayının cəmindən böyükdürsə, onu çap edirik
    if (max_count > sum_of_others) 
    {
        cout << dominant_species << endl;
    } 
    else 
    {
        cout << "NONE" << endl;
    }

    return 0;
}
