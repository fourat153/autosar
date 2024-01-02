#include "RTE_SWC1.h"

void SUM(void){
	Std_ReturnType status = E_NOT_OK;
	unsigned short x, y;
	unsigned z = 0;
	status |= RTE_Read_RP_Sum_Val1(&x);
	status |= RTE_Read_RP_Sum_Val2(&y);
	z = x+y;
	status |= RTE_Write_PP_Sum_SumResult(z);
}
