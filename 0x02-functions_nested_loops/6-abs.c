#include "main.h"
/**
 * _abs:-computes the absolute value of a number
 * @num:number to be passed
 * Return:0 on success
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
