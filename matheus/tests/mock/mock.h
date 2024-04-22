// Copyright (C) Continental AG
// All Rights Reserved
// COMPONENT: env_mock

#ifndef ENV_MOCK_H_
#define ENV_MOCK_H_

#include <gmock/gmock.h>
#include <multiply/multiply.h>

class Mock_Env
{
public:
	/**************************************************************************************************/
	/* BAI                                                                                            */
	/**************************************************************************************************/
	MOCK_METHOD0(BAI_s_GetResetStatus, void(void));
	MOCK_METHOD2(check_sum, int(int* a, int b));
	MOCK_METHOD2(externalSum, int(int a, int b));
	MOCK_METHOD1(isPrime_external, int(int n));
	MOCK_METHOD2(modulo_extern, int(int num, int div));

};

extern Mock_Env* obj_Mock_Env_Ptr;

#endif

