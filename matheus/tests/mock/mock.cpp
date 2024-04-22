// Copyright (C) Continental AG
// All Rights Reserved
// COMPONENT: env_mock

#include "mock.h"


/**************************************************************************************************/
/* BAI                                                                                            */
/**************************************************************************************************/

int externalSum(int a, int b)
{
	return obj_Mock_Env_Ptr->externalSum(a, b);
}

int isPrime_external(int n)
{
	return obj_Mock_Env_Ptr->isPrime_external(n);
}
int modulo_extern(int num, int div)
{
	return obj_Mock_Env_Ptr->modulo_extern(num, div);
}


/*
void BAI_s_GetResetStatus(void)
{
	obj_Mock_Env_Ptr->BAI_s_GetResetStatus();
}

int check_sum(int* a, int b)
{
	return obj_Mock_Env_Ptr->check_sum(a, b);
}
*/

