#include <stdio.h>
#define get_Var_Name(var) #var

int main()
{
	int my_var;

	printf("%s\n", get_Var_Name(my_var));

	return 0;
}
