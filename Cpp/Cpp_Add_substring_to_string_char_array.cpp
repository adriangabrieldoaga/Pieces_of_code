#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::cerr;

int main()
{
    char initial_string[100], substring_to_add[100];
    char *p = NULL;
    int position; // position of added substring

    cout << "Initial string: ";
    cin >> initial_string;
    cout << "Substring to add: ";
    cin >> substring_to_add;
    cout << "Add substring at position: ";
    cin >> position;
    if (position < 1 || position > strlen(initial_string) + 1)
    {
        cerr << "Invalid position\n";
        return 1;
    }

    char buffer_string[strlen(initial_string) + strlen(substring_to_add)] = "";

    p = initial_string + position - 1;
    strncat(buffer_string, initial_string, p - initial_string);
    strcat(buffer_string, substring_to_add);
    strcat(buffer_string, p);
    strcpy(initial_string, buffer_string);

    cout << "Final string: " << initial_string << "\n";

    return 0;
}
