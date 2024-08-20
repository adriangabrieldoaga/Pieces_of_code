#include <iostream>
#include <cstring>

using std::cout;
using std::cin;

int main()
{
    char initial_string[100], substring_to_delete[100];
    char *p = NULL;

    cout << "Initial string: ";
    cin >> initial_string;
    cout << "Substring to delete: ";
    cin >> substring_to_delete;

    int substring_to_delete_length = strlen(substring_to_delete);

    p = strstr(initial_string, substring_to_delete);
    while (p)
    {
        strcpy(p, p + substring_to_delete_length);
        p = strstr(initial_string, substring_to_delete);
    }

    cout << initial_string << "\n";

    return 0;
}
