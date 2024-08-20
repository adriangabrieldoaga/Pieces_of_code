#include <iostream>
#include <cstring>

using std::cout;
using std::cin;

int main()
{
    char initial_string[100], substring_that_replaces[100], substring_to_be_replaced[100];
    char *p = NULL;

    cout << "Initial string: ";
    cin >> initial_string;
    cout << "Substring that replaces: ";
    cin >> substring_that_replaces;
    cout << "Substring to be replaced: ";
    cin >> substring_to_be_replaced;

    char aux[strlen(initial_string) - strlen(substring_to_be_replaced) + strlen(substring_that_replaces) + 1];

    p = strstr(initial_string, substring_to_be_replaced);
    while (p != 0)
    {
        strcpy(aux, substring_that_replaces);
        strcat(aux, p + strlen(substring_to_be_replaced) );
        strcpy(p, aux);
        p = strstr(p + strlen(substring_that_replaces), substring_to_be_replaced);
    }

    cout << "\nFinal string: " << initial_string << "\n";

    return 0;
}
