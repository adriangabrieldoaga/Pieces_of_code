#include <iostream>
#include <ctime>

using std::cout;

int main()
{
   // Current date and time based on current system
   time_t now = time(0);

   // Convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt;

   // Convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);

   cout << "The UTC date and time is:"<< dt;

   return 0;
}
