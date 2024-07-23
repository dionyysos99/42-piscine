#include <unistd.h>
#include "do-op.h"

int ft_atoi(char *a)
{
		int sign=1,result=0;
		while((*a >= 32 && *a <= 48) || (*a >= 57 && *a <= 126))
		{
			if(*a == '-')
					sign *= -sign;
				a++;
		}
		while((*a >= 48) && (*a <= 57))
		{
			result = (result * 10) + (*a - '0');
			a++;
		}
		return (result * sign);
}

void do_op(int val1, char oper, int val2, void(*a_o_r)(int,char,int))
{
		if (oper == '\0')
				write(1,"0",1);

		if (oper != '-' && oper != '+' && oper != '%' && oper != '*' && oper != '/')
				write(1,"0",1);
		
		a_o_r(val1, oper, val2);
}

void all_op_result(int numb1,char op, int numb2)
{
		if(op == '-')
			r_o_i(numb1 - numb2);
		if(op == '+')
			r_o_i(numb1 + numb2);
		if(op == '/')
		{
			if(numb2==0)
				write(1,"Stop : division by zero",23);
			else
			r_o_i(numb1 / numb2);
		}
		if(op == '*')
			r_o_i(numb1 * numb2);
		if(op == '%')
		{
			if(numb2==0)
				write(1,"Stop : division by zero",23);
			else
			r_o_i(numb1 % numb2);
		}
}

void r_o_i(int a)
{
	long ab;
	char c;

	ab = a;
	if (ab < 0)
	{
		write(1,"-",1);
		r_o_i(-ab);
	}
	if (ab >= 10)
	{
		r_o_i(ab / 10);
	}
	c = (ab % 10) + '0';
	write(1, &c, 1);
}