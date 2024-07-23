#include <unistd.h>
#include "do-op.h"
int main(int ac, char *arg[])
{
	char *value1,*value2,operation;
	if(ac==1)
		return write(1,"Nabion olm",10);
	if(ac==4)
	{
		value1=arg[1];
		operation=arg[2][0];
		value2=arg[3];
	}
	int numb1 = ft_atoi(value1);
	int numb2 = ft_atoi(value2);
	do_op(numb1, operation, numb2, &all_op_result);
	return 0;
}
