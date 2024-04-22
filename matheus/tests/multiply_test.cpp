#include <multiply/multiply.h>
#include <gtest/gtest.h>
#include <mock.h>
#include <gtest_common.h>


#define TEST_01_getX  TEST_F
#define TEST_02_getX  TEST_F
#define TEST_01_getY  TEST_F
#define TEST_02_getY  TEST_F

#define TEST_01_calculateDistance  TEST_F
#define TEST_02_calculateDistance  TEST_F

#define TEST_01_arePointsOnSameLine  TEST_F
#define TEST_02_arePointsOnSameLine  TEST_F

#define TEST_01_ComputeRectangleArea  TEST_F
#define TEST_02_ComputeRectangleArea  TEST_F

#define TEST_01_isPointOnCircle  TEST_F
#define TEST_02_isPointOnCircle  TEST_F

#define TEST_01_isPointInsideCircle  TEST_F
#define TEST_02_isPointInsideCircle  TEST_F

#define TEST_01_remainder_static  TEST_F
#define TEST_02_remainder_static  TEST_F

#define TEST_01_isDivisor  TEST_F
#define TEST_02_isDivisor  TEST_F

#define TEST_01_getPowerOfFactor  TEST_F
#define TEST_02_getPowerOfFactor  TEST_F

#define TEST_01_gcd  TEST_F
#define TEST_02_gcd  TEST_F

#define TEST_01_lcm  TEST_F
#define TEST_02_lcm  TEST_F

#define TEST_01_factorial  TEST_F
#define TEST_02_factorial  TEST_F

#define TEST_01_floop1  TEST_F
#define TEST_02_floop1  TEST_F

#define TEST_01_floop2  TEST_F
#define TEST_02_floop2  TEST_F

#define TEST_01_floop3  TEST_F
#define TEST_02_floop3  TEST_F


#define TEST_01_getMax  TEST_F
#define TEST_02_getMax  TEST_F
#define TEST_03_getMax  TEST_F

#define TEST_01_opLog1  TEST_F
#define TEST_02_opLog1  TEST_F
#define TEST_03_opLog1  TEST_F
#define TEST_04_opLog1  TEST_F

#define TEST_01_getNextId  TEST_F
#define TEST_02_getNextId  TEST_F

#define TEST_01_resetId  TEST_F

#define TEST_01_getDayforId  TEST_F

#define TEST_01_addWithIf TEST_F
#define TEST_02_addWithIf TEST_F

#define TEST_01_sumMax3 TEST_F
#define TEST_02_sumMax3 TEST_F
#define TEST_03_sumMax3 TEST_F
#define TEST_04_sumMax3 TEST_F
#define TEST_05_sumMax3 TEST_F

#define TEST_01_getGrade TEST_F
#define TEST_02_getGrade TEST_F
#define TEST_03_getGrade TEST_F
#define TEST_04_getGrade TEST_F
#define TEST_05_getGrade TEST_F
#define TEST_06_getGrade TEST_F

#define TEST_01_getDayName TEST_F
#define TEST_02_getDayName TEST_F
#define TEST_03_getDayName TEST_F
#define TEST_04_getDayName TEST_F
#define TEST_05_getDayName TEST_F
#define TEST_06_getDayName TEST_F
#define TEST_07_getDayName TEST_F
#define TEST_08_getDayName TEST_F

#define TEST_01_sumWithExternal TEST_F

#define TEST_01_maxNr TEST_F
#define TEST_02_maxNr TEST_F

#define TEST_01_deletePrimes TEST_F
#define TEST_02_deletePrimes TEST_F

#define TEST_01_generateSquares TEST_F
#define TEST_02_generateSquares TEST_F

#define TEST_01_deleteElem TEST_F
#define TEST_02_deleteElem TEST_F
#define TEST_03_deleteElem TEST_F

#define TEST_01_insertElem TEST_F
#define TEST_02_insertElem TEST_F
#define TEST_03_insertElem TEST_F

#define TEST_01_addArrays TEST_F
#define TEST_02_addArrays TEST_F
#define TEST_03_addArrays TEST_F

#define TEST_01_reverseArray TEST_F
#define TEST_02_reverseArray TEST_F

#define TEST_01_tryAddGlobal TEST_F
#define TEST_02_tryAddGlobal TEST_F

#define TEST_01_customStrlen TEST_F
#define TEST_02_customStrlen TEST_F
#define TEST_03_customStrlen TEST_F

#define TEST_01_customStrcmp TEST_F
#define TEST_02_customStrcmp TEST_F
#define TEST_03_customStrcmp TEST_F
#define TEST_04_customStrcmp TEST_F
#define TEST_05_customStrcmp TEST_F

#define TEST_01_customStrchr TEST_F
#define TEST_02_customStrchr TEST_F
#define TEST_03_customStrchr TEST_F

#define TEST_01_customStrstr TEST_F
#define TEST_02_customStrstr TEST_F

#define TEST_01_sumDigits TEST_F
#define TEST_02_sumDigits TEST_F

#define TEST_01_digitsMinMax TEST_F
#define TEST_02_digitsMinMax TEST_F

#define TEST_01_addStaticSum TEST_F
#define TEST_02_addStaticSum TEST_F
#define TEST_03_addStaticSum TEST_F
#define TEST_04_addStaticSum TEST_F

#define TEST_01_isPrime TEST_F
#define TEST_02_isPrime TEST_F
#define TEST_03_isPrime TEST_F
#define TEST_04_isPrime TEST_F
#define TEST_05_isPrime TEST_F

#define TEST_01_customTrim TEST_F

#define TEST_01_interval TEST_F
#define TEST_02_interval TEST_F

#define TEST_01_multArray TEST_F

#define TEST_01_addFractions TEST_F

#define TEST_01_subtractFractions TEST_F

#define TEST_01_multiplyFractions TEST_F

#define TEST_01_divideFractions TEST_F

#define TEST_01_compareFractions TEST_F
#define TEST_02_compareFractions TEST_F
#define TEST_03_compareFractions TEST_F

#define TEST_01_powerFraction TEST_F

#define TEST_01_determineQuadrant TEST_F
#define TEST_02_determineQuadrant TEST_F
#define TEST_03_determineQuadrant TEST_F
#define TEST_04_determineQuadrant TEST_F
#define TEST_05_determineQuadrant TEST_F
#define TEST_06_determineQuadrant TEST_F

#define TEST_01_simplifyFraction TEST_F
#define TEST_02_simplifyFraction TEST_F
#define TEST_03_simplifyFraction TEST_F

#define TEST_01_sumWithExternal2 TEST_F

#define TEST_01_sumArrayExt TEST_F
#define TEST_02_sumArrayExt TEST_F

#define TEST_01_kDigitsMax TEST_F
#define TEST_02_kDigitsMax TEST_F

#define TEST_01_maxPrimesN TEST_F
#define TEST_02_maxPrimesN TEST_F
#define TEST_03_maxPrimesN TEST_F

extern "C" int globalN;
extern "C" int globalCount;
extern "C" int staticSum;
//extern "C" int func_statica(int a, int b);
extern "C" int remainder_static(int a, int b);
extern "C" int maxNr(int n);
int expected_staticSum;
int expected_globalN;
int expected_globalCount;


static void initialise_global_data()
{
	globalN = 20;
	globalCount = 0;
	staticSum = 0;
}

static void initialise_expected_global_data()
{
	 expected_globalCount = 0;
	 expected_globalN = 20;
	 expected_staticSum = 0;
}

static void check_global_data()
{
	EXPECT_EQ(globalCount, expected_globalCount);
	EXPECT_EQ(globalN, expected_globalN);
	EXPECT_EQ(staticSum, expected_staticSum);
}

Mock_Env* obj_Mock_Env_Ptr = NULL;


// Test suites are used to group unit tests that use the same initialization work
// before the test is run.
class TestSuite_SelfTest : public ::testing::Test
{
protected:
	TestSuite_SelfTest()
	{ // initialization code here
		obj_Mock_Env_Ptr = new Mock_Env;

		/* Global data */
		initialise_global_data();
	
		/* Set expected values for global data checks */
		initialise_expected_global_data();
	}
	~TestSuite_SelfTest()
	{ // cleanup any pending stuff, but no exceptions allowed
		delete obj_Mock_Env_Ptr;
	}
	void SetUp()
	{
		// code here will execute just before the test ensues
		globalN = 20;
	}
	void TearDown()
	{ // code here will be called just after the test completes
	  // ok to through exceptions from here if need be
		globalN = 20;
	}
};

/// \test Testing function multiply.
///
/// \description
///
/// \pre
///  None\n
///
/// \post
///     The global variables change as follows: \n
///
/// \traceability
TEST_01_getX(TestSuite_SelfTest, test_getX_01)
{
	struct Point2D p = { 1, 3 };
	int expected = 1;
	int actual = getX(p);
	EXPECT_EQ(expected, actual);
}
TEST_02_getX(TestSuite_SelfTest, test_getX_02)
{
	struct Point2D p = { -100, 3 };
	int expected = -100;
	int actual = getX(p);
	EXPECT_EQ(expected, actual);
}
TEST_01_getY(TestSuite_SelfTest, test_getY_01)
{
	struct Point2D p = { 1, 3 };
	int expected = 3;
	int actual = getY(p);
	EXPECT_EQ(expected, actual);
}
TEST_02_getY(TestSuite_SelfTest, test_getY_02)
{
	struct Point2D p = {1, -343};
	int expected = -343;
	int actual = getY(p);
	EXPECT_EQ(expected, actual);
}
TEST_01_calculateDistance(TestSuite_SelfTest, test_calculateDsitance_01) 
{
	struct Point2D a = { 0, 0 };
	struct Point2D b = { 3, 4 };
	double expected = 5.0;
	double actual = calculateDistance(a, b);
	ASSERT_NEAR(expected, actual, 0.001);
	//EXPECT_EQ(expected, actual);
}
TEST_02_calculateDistance(TestSuite_SelfTest, test_calculateDsitance_02)
{
	struct Point2D a = { 0, 0 };
	struct Point2D b = { 6, 4 };
	double expected = 7.2111;
	double actual = calculateDistance(a, b);
	ASSERT_NEAR(expected, actual, 0.001);
	//EXPECT_EQ(expected, actual);
}

TEST_01_arePointsOnSameLine(TestSuite_SelfTest, test_arePointsOnSameLine_01)
{
	struct Point2D a = { 0, 0 };
	struct Point2D b = { 1, 1 };
	struct Point2D c = { 2, 2 };
	int expected = TRUE;
	int actual = arePointsOnSameLine(a, b, c);
	EXPECT_EQ(expected, actual);
}
TEST_02_arePointsOnSameLine(TestSuite_SelfTest, test_arePointsOnSameLine_02)
{
	struct Point2D a = { 0, 0 };
	struct Point2D b = { 1, 1 };
	struct Point2D c = { -2, 2 };
	int expected = FALSE;
	int actual = arePointsOnSameLine(a, b, c);
	EXPECT_EQ(expected, actual);
}

TEST_01_ComputeRectangleArea(TestSuite_SelfTest, test_computeRectangleArea_01) {
	struct Point2D topleft = { 2, 4 };
	struct Point2D bottomright = { 5, 2 };
	int expected = 6;
	int actual = computeRectangleArea(topleft, bottomright);
	EXPECT_EQ(expected, actual);
}
TEST_02_ComputeRectangleArea(TestSuite_SelfTest, test_computeRectangleArea_02) {
	struct Point2D topleft = { 2, 4 };
	struct Point2D bottomright = { 5, 2 };
	int expected = -1;
	int actual = computeRectangleArea(bottomright, topleft);
	EXPECT_EQ(expected, actual);
}

TEST_01_isPointOnCircle(TestSuite_SelfTest, test_isPointOnCircle_01)
{
	struct Point2D p = { 3, 4 };
	struct Point2D center = { 0, 0 };
	double radius = 5.0;
	int expected = TRUE;
	int actual = isPointOnCircle(p, center, radius);
	EXPECT_EQ(expected, actual);

}
TEST_02_isPointOnCircle(TestSuite_SelfTest, test_isPointOnCircle_02)
{
	struct Point2D p = { 3, 4 };
	struct Point2D center = { 0, 0 };
	double radius = 4.5;
	int expected = FALSE;
	int actual = isPointOnCircle(p, center, radius);
	EXPECT_EQ(expected, actual);

}

TEST_01_isPointInsideCircle(TestSuite_SelfTest, test_isPointInsideCircle_01)
{
	struct Point2D p = { 3, 4 };
	struct Point2D center = { 0, 0 };
	double radius = 4.5;
	int expected = FALSE;
	int actual = isPointInsideCircle(p, center, radius);
	EXPECT_EQ(expected, actual);
}
TEST_02_isPointInsideCircle(TestSuite_SelfTest, test_isPointInsideCircle_02)
{
	struct Point2D p = { 2, 3 };
	struct Point2D center = { 0, 0 };
	double radius = 4.5;
	int expected = TRUE;
	int actual = isPointInsideCircle(p, center, radius);
	EXPECT_EQ(expected, actual);
}

TEST_01_remainder_static(TestSuite_SelfTest, test_remainder_static_01)
{
	int a = 7, b = 2;
	int actual = 1;
	int expected = remainder_static(a, b);
	EXPECT_EQ(expected, actual);
}
TEST_02_remainder_static(TestSuite_SelfTest, test_remainder_static_02)
{
	int a = 7, b = 0;
	int actual = -1;
	int expected = remainder_static(a, b);
	EXPECT_EQ(expected, actual);
}

TEST_01_isDivisor(TestSuite_SelfTest, test_isDivisor_01)
{
	int a = 9, b = 3;
	int expected = TRUE;
	int actual = isDivisor(a, b);
	EXPECT_EQ(expected, actual);
}
TEST_02_isDivisor(TestSuite_SelfTest, test_isDivisor_02)
{
	int a = 7, b = 3;
	int expected = FALSE;
	int actual = isDivisor(a, b);
	EXPECT_EQ(expected, actual);
}

TEST_01_getPowerOfFactor(TestSuite_SelfTest, test_getPowerofFactor_01)
{
	int num = 1024;
	int factor = 2;
	int expected = 10;
	int actual = getPowerOfFactor(num, factor);
	EXPECT_EQ(expected, actual);

}
TEST_02_getPowerOfFactor(TestSuite_SelfTest, test_getPowerofFactor_02)
{
	int num = 1024;
	int factor = 3;
	int expected = 0;
	int actual = getPowerOfFactor(num, factor);
	EXPECT_EQ(expected, actual);
}

TEST_01_factorial(TestSuite_SelfTest, test_factorial_01)
{
	int n = 10;
	long long expected = 3628800;
	long long actual = factorial(n);
	EXPECT_EQ(expected, actual);
}
TEST_02_factorial(TestSuite_SelfTest, test_factorial_02)
{
	int n = 0;
	long long expected = 1;
	long long actual = factorial(n);
	EXPECT_EQ(expected, actual);
}

TEST_01_gcd(TestSuite_SelfTest, test_gcd_01)
{
	int a = 24;
	int b = 88;
	int expected = 8;
	int actual = gcd(a, b);
	EXPECT_EQ(expected, actual);
}
TEST_02_gcd(TestSuite_SelfTest, test_gcd_02)
{
	int a = 24;
	int b = 119;
	int expected = 1;
	int actual = gcd(a, b);
	EXPECT_EQ(expected, actual);
}
TEST_01_lcm(TestSuite_SelfTest, test_lcm_01)
{
	int a = 24;
	int b = 88;
	int expected = 264;
	int actual = lcm(a, b);
	EXPECT_EQ(expected, actual);
}
TEST_02_lcm(TestSuite_SelfTest, test_lcm_02)
{
	int a = 24;
	int b = 119;
	int expected = 2856;
	int actual = lcm(a, b);
	EXPECT_EQ(expected, actual);
}

TEST_01_getMax(TestSuite_SelfTest, test_getMax_01)
{
	int a = 329;
	int b = 22;
	int c = 30;
	int expected = 329;
	int actual = getMax(a, b, c);
	EXPECT_EQ(expected, actual);
}
TEST_02_getMax(TestSuite_SelfTest, test_getMax_02)
{
	int a = 32;
	int b = 225;
	int c = 30;
	int expected = 225;
	int actual = getMax(a, b, c);
	EXPECT_EQ(expected, actual);
}
TEST_03_getMax(TestSuite_SelfTest, test_getMax_03)
{
	int a = 35;
	int b = 22;
	int c = 2333;
	int expected = 2333;
	int actual = getMax(a, b, c);
	EXPECT_EQ(expected, actual);
}

TEST_01_opLog1(TestSuite_SelfTest, test_opLog1_01)
{
	int a = 34;
	int b = 5;
	int c = 0;
	int expected = TRUE;
	int actual = opLog1(a, b, c);
}
TEST_02_opLog1(TestSuite_SelfTest, test_opLog1_02)
{
	int a = 34;
	int b = 115;
	int c = 33;
	int expected = TRUE;
	int actual = opLog1(a, b, c);
}
TEST_03_opLog1(TestSuite_SelfTest, test_opLog1_03)
{
	int a = -34;
	int b = 8;
	int c = 10;
	int expected = TRUE;
	int actual = opLog1(a, b, c);
}
TEST_04_opLog1(TestSuite_SelfTest, test_opLog1_04)
{
	int a = -34;
	int b = 5999;
	int c = 0;
	int expected = FALSE;
	int actual = opLog1(a, b, c);
}

TEST_01_getNextId(TestSuite_SelfTest, test_getNextId_01)
{
	//id = 0
	int expected = 1;
	int actual = getNextId();
	EXPECT_EQ(expected, actual);

	//reset static variable id to 0
	resetId();
}
TEST_02_getNextId(TestSuite_SelfTest, test_getNextId_02)
{
	//id = 0
	int actual;
	for (int i = 0; i <= 8; i++)
		actual = getNextId();
	int expected = 0;
	EXPECT_EQ(expected, actual);
	//id = 0
}

TEST_01_resetId(TestSuite_SelfTest, test_resetId_01)
{
	// id = 0
	int crt = getNextId();
	crt = getNextId();
	crt = getNextId();
	resetId();
	crt = getNextId();
	EXPECT_EQ(1, crt);

	//reset id to 0
	resetId();
}

TEST_01_getDayforId(TestSuite_SelfTest, test_getDayforId_01)
{
	//id = 0
	char expected[] = "MON";
	char* actual = getDayforId();
	//int result = strcmp(expected, actual);
	EXPECT_STREQ(expected, actual);
	//EXPECT_EQ(result, 0);

	//reset static variable id to 0
	resetId();
	//id = 0
}

TEST_01_addWithIf(TestSuite_SelfTest, test_addWithIf_01)
{
    int a = 30, b = 70;
    int expected = 100;
    int actual = addWithIf(a, b);
    EXPECT_EQ(expected, actual);


}
TEST_02_addWithIf(TestSuite_SelfTest, test_addWithIf_02)
{
	int a = 30, b = -70;
	int expected = 100;
	int actual = addWithIf(a, b);
	EXPECT_EQ(expected, actual);


}
TEST_01_getGrade(TestSuite_SelfTest, test_getGrade_01)
{
	int score = 78;
	char expected = 'C';
	char actual = getGrade(score);
	EXPECT_EQ(expected, actual);
}
TEST_02_getGrade(TestSuite_SelfTest, test_getGrade_02)
{
	int score = 100;
	char expected = 'A';
	char actual = getGrade(score);
	EXPECT_EQ(expected, actual);
}
TEST_03_getGrade(TestSuite_SelfTest, test_getGrade_03)
{
	int score = 94;
	char expected = 'A';
	char actual = getGrade(score);
	EXPECT_EQ(expected, actual);
}
TEST_04_getGrade(TestSuite_SelfTest, test_getGrade_04)
{
	int score = 86;
	char expected = 'B';
	char actual = getGrade(score);
	EXPECT_EQ(expected, actual);
}
TEST_05_getGrade(TestSuite_SelfTest, test_getGrade_05)
{
	int score = 66;
	char expected = 'D';
	char actual = getGrade(score);
	EXPECT_EQ(expected, actual);

}
TEST_06_getGrade(TestSuite_SelfTest, test_getGrade_06)
{
	int score = 34;
	char expected = 'F';
	char actual = getGrade(score);
	EXPECT_EQ(expected, actual);
}

/*
		Tests for function getDayName
		The function gets an integer as a parameter. It it is in the range(1, 7), it will return a char pointer to
		a static variable which holds the abbreviation of the corresponding day of the week;
		Otherwise, it will return NULL;
*/
TEST_01_getDayName(TestSuite_SelfTest, test_getDayName_01)
{
	int day = 1;
	char expected[4] = "MON";
	char* actual = getDayName(day);
	int result = strcmp(expected, actual);
	EXPECT_EQ(result, 0);
}
TEST_02_getDayName(TestSuite_SelfTest, test_getDayName_02)
{
	int day = 2;
	char expected[4] = "TUE";
	char* actual = getDayName(day);
	int result = strcmp(expected, actual);
	EXPECT_EQ(result, 0);
}
TEST_03_getDayName(TestSuite_SelfTest, test_getDayName_03)
{
	int day = 3;
	char expected[4] = "WED";
	char* actual = getDayName(day);
	int result = strcmp(expected, actual);
	EXPECT_EQ(result, 0);
}
TEST_04_getDayName(TestSuite_SelfTest, test_getDayName_04)
{
	int day = 4;
	char expected[4] = "THU";
	char* actual = getDayName(day);
	int result = strcmp(expected, actual);
	EXPECT_EQ(result, 0);
}
TEST_05_getDayName(TestSuite_SelfTest, test_getDayName_05)
{
	int day = 5;
	char expected[4] = "FRI";
	char* actual = getDayName(day);
	int result = strcmp(expected, actual);
	EXPECT_EQ(result, 0);
}
TEST_06_getDayName(TestSuite_SelfTest, test_getDayName_06)
{
	int day = 6;
	char expected[4] = "SAT";
	char* actual = getDayName(day);
	int result = strcmp(expected, actual);
	EXPECT_EQ(result, 0);
}
TEST_07_getDayName(TestSuite_SelfTest, test_getDayName_07)
{
	int day = 7;
	char expected[4] = "SUN";
	char* actual = getDayName(day);
	int result = strcmp(expected, actual);
	EXPECT_EQ(result, 0);

}
TEST_08_getDayName(TestSuite_SelfTest, test_getDayName_08)
{
	int day = 100;
	char* expected = NULL;
	char* actual = getDayName(day);
	EXPECT_EQ(expected, actual);
}

TEST_01_sumWithExternal(TestSuite_SelfTest, test_sumWithExternal_01) {
	int a = 5, b = 6, c = 4;
	int expected = 15;
	{
		testing::InSequence s;
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_,_)).Times(1).WillOnce(Return(11));
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_,_)).Times(1).WillOnce(Return(15));
	}
	int actual = sumWithExternal(a, b, c);

	EXPECT_EQ(expected, actual);
}

TEST_01_maxNr(TestSuite_SelfTest, test_maxNr_01)
{
	int n = 4273;
	int expected = 7342;
	int actual = maxNr(n);
	EXPECT_EQ(expected, actual);
}
TEST_02_maxNr(TestSuite_SelfTest, test_maxNr_02)
{
	int n = 42073;
	int expected = 73420;
	int actual = maxNr(n);
	EXPECT_EQ(expected, actual);
}

TEST_01_deletePrimes(TestSuite_SelfTest, test_deletePrimes_01)
{
	int v[] = { 12, 2, 3, 6, 10, 7 };
	int n = 6;
	int vexp[] = { 12, 6, 10 };
	{
		testing::InSequence s;
		EXPECT_CALL(*obj_Mock_Env_Ptr, isPrime_external(_)).Times(1).WillOnce(Return(FALSE));
		EXPECT_CALL(*obj_Mock_Env_Ptr, isPrime_external(_)).Times(2).WillRepeatedly(Return(TRUE));
		EXPECT_CALL(*obj_Mock_Env_Ptr, isPrime_external(_)).Times(2).WillRepeatedly(Return(FALSE));
		EXPECT_CALL(*obj_Mock_Env_Ptr, isPrime_external(_)).Times(1).WillOnce(Return(TRUE));
	}
	deletePrimes(v, &n);
	EXPECT_EQ(3, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(vexp[i], v[i]);

}
TEST_02_deletePrimes(TestSuite_SelfTest, test_deletePrimes_02)
{
	int v[] = { 2, 14, 13, 12 };
	int n = 4;
	int vexp[] = { 14, 12 };
	{
		testing::InSequence s;
		EXPECT_CALL(*obj_Mock_Env_Ptr, isPrime_external(_)).Times(1).WillOnce(Return(TRUE));
		EXPECT_CALL(*obj_Mock_Env_Ptr, isPrime_external(_)).Times(1).WillOnce(Return(FALSE));
		EXPECT_CALL(*obj_Mock_Env_Ptr, isPrime_external(_)).Times(1).WillOnce(Return(TRUE));
		EXPECT_CALL(*obj_Mock_Env_Ptr, isPrime_external(_)).Times(1).WillOnce(Return(FALSE));
	}
	deletePrimes(v, &n);
	EXPECT_EQ(2, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(vexp[i], v[i]);
}

TEST_01_generateSquares(TestSuite_SelfTest, test_generateSquares_01)
{
	int v[100] = { 0 };
	int start = 0;
	int end = 50;
	generateSquares(start, end, v);
	for (int i = start; i <= end; i++)
		EXPECT_EQ(i * i, v[i]);
	for (int i = end+1; i <= 99; i++)
		EXPECT_EQ(0, v[i]);
}
TEST_02_generateSquares(TestSuite_SelfTest, test_generateSquares_02)
{
	int v[100] = { 0 };
	int start = 0;
	int end = 99;
	generateSquares(start, end, v);
	for (int i = start; i <= end; i++)
		EXPECT_EQ(i * i, v[i]);
}

TEST_01_tryAddGlobal(TestSuite_SelfTest, test_tryAddGlobal_01)
{
	int val = 10;
	//globalN = 20;
	expected_globalN = 21;
	int expected = TRUE;
	int actual = tryAddGlobal(val);
	EXPECT_EQ(expected, actual);

	//check global data
	check_global_data();
}
TEST_02_tryAddGlobal(TestSuite_SelfTest, test_tryAddGlobal_02)
{
	int val = 33;
	//globalN = 20;
	expected_globalN = 19;
	int expected = FALSE;
	int actual = tryAddGlobal(val);
	EXPECT_EQ(expected, actual);

	//check global data
	check_global_data();
}

TEST_01_customStrlen(TestSuite_SelfTest, test_customStrlen_01)
{
	char s[] = "test";
	int expected = 4;
	int actual = customStrlen(s);
	EXPECT_EQ(expected, actual);
}
TEST_02_customStrlen(TestSuite_SelfTest, test_customStrlen_02)
{
	char s[] = "test test test";
	int expected = 14;
	int actual = customStrlen(s);
	EXPECT_EQ(expected, actual);
}
TEST_03_customStrlen(TestSuite_SelfTest, test_customStrlen_03)
{
	char s[] = "";
	int expected = 0;
	int actual = customStrlen(s);
	EXPECT_EQ(expected, actual);
}

TEST_01_customStrcmp(TestSuite_SelfTest, test_customStrcmp_01)
{
	char str1[] = "abc";
	char str2[] = "axy";
	int expected = -1;
	int actual = customStrcmp(str1, str2);
	EXPECT_EQ(expected, actual);
}
TEST_02_customStrcmp(TestSuite_SelfTest, test_customStrcmp_02)
{
	char str1[] = "abcxef";
	char str2[] = "abcde";
	int expected = 1;
	int actual = customStrcmp(str1, str2);
	EXPECT_EQ(expected, actual);
}
TEST_03_customStrcmp(TestSuite_SelfTest, test_customStrcmp_03)
{
	char str1[] = "abc";
	char str2[] = "abc";
	int expected = 0;
	int actual = customStrcmp(str1, str2);
	EXPECT_EQ(expected, actual);
}
TEST_04_customStrcmp(TestSuite_SelfTest, test_customStrcmp_04)
{
	char str1[] = "abcdefgx";
	char str2[] = "abcdefg";
	int expected = 1;
	int actual = customStrcmp(str1, str2);
	EXPECT_EQ(expected, actual);
}
TEST_05_customStrcmp(TestSuite_SelfTest, test_customStrcmp_05)
{
	char str1[] = "abcde";
	char str2[] = "abcdefgh";
	int expected = -1;
	int actual = customStrcmp(str1, str2);
	EXPECT_EQ(expected, actual);
}

TEST_01_customStrchr(TestSuite_SelfTest, test_customStrchr_01) 
{
	char s[] = "teststring";
	char c = 's';
	char expected[] = "ststring";
	char* actual = customStrchr(s, c);
	EXPECT_STREQ(expected, actual);
}
TEST_02_customStrchr(TestSuite_SelfTest, test_customStrchr_02)
{
	char s[] = "teststring";
	char c = 's';
	char expected[] = "string";
	const char* actual = customStrchr(s, 's');
	char* actual2 = customStrchr(actual+1, c);
	EXPECT_STREQ(expected, actual2);
}
TEST_03_customStrchr(TestSuite_SelfTest, test_customStrchr_03)
{
	char s[] = "teststring";
	char c = 'a';
	char* actual = customStrchr(s, c);
	EXPECT_EQ(NULL, actual);
}

TEST_01_customStrstr(TestSuite_SelfTest, test_customStrstr_01)
{
	char s1[] = "test word test";
	char s2[] = "word";
	char* expected = "word test";
	char* actual = customStrstr(s1, s2);
	EXPECT_STREQ(expected, actual);
}
TEST_02_customStrstr(TestSuite_SelfTest, test_customStrstr_02)
{
	char s1[] = "test word test";
	char s2[] = "wordabc";
	char* actual = customStrstr(s1, s2);
	EXPECT_EQ(NULL, actual);
}

TEST_01_sumDigits(TestSuite_SelfTest, test_sumDigits_01)
{
	int n = 6543;
	int s;
	int expected = 18;
	sumDigits(n, &s);
	int actual = s;
	EXPECT_EQ(expected, s);
}
TEST_02_sumDigits(TestSuite_SelfTest, test_sumDigits_02)
{
	int n = 0;
	int s;
	int expected = 0;
	sumDigits(n, &s);
	int actual = s;
	EXPECT_EQ(expected, s);
}

TEST_01_digitsMinMax(TestSuite_SelfTest, test_digitsMinMax_01)
{
	int n = 316245;
	int dmin, dmax;
	int dminexp = 1;
	int dmaxexp = 6;
	digitsMinMax(n, &dmin, &dmax);
	EXPECT_EQ(dminexp, dmin);
	EXPECT_EQ(dmaxexp, dmax);
}
TEST_02_digitsMinMax(TestSuite_SelfTest, test_digitsMinMax_02)
{
	int n = 3016249;
	int dmin, dmax;
	int dminexp = 0;
	int dmaxexp = 9;
	digitsMinMax(n, &dmin, &dmax);
	EXPECT_EQ(dminexp, dmin);
	EXPECT_EQ(dmaxexp, dmax);
}

TEST_01_addStaticSum(TestSuite_SelfTest, test_addStaticSum_01)
{
	staticSum = 0;
	int val = 15;
	expected_staticSum = 15;
	addStaticSum(val);

	check_global_data();

	//reset staticSum to 0
	addStaticSum(0);
}
TEST_02_addStaticSum(TestSuite_SelfTest, test_addStaticSum_02)
{
	staticSum = 0;
	int val = -15;
	expected_staticSum = 15;
	addStaticSum(val);

	check_global_data();

	//reset staticSum to 0
	addStaticSum(0);
}
TEST_03_addStaticSum(TestSuite_SelfTest, test_addStaticSum_03)
{
	staticSum = 0;
	int val1 = 20;
	int val2 = -10;
	expected_staticSum = 30;
	addStaticSum(val1);
	addStaticSum(val2);

	check_global_data();

	//reset staticSum to 0
	addStaticSum(0);
}
TEST_04_addStaticSum(TestSuite_SelfTest, test_addStaticSum_04)
{
	staticSum = 0;
	int val1 = 20;
	addStaticSum(val1);

	//reset staticSum to 0
	addStaticSum(0);

	expected_staticSum = 0;
	check_global_data();
}

TEST_01_floop1(TestSuite_SelfTest, test_floop1_01)
{
	int n = 123456;
	int expected = 63;
	int actual = floop1(n);
	EXPECT_EQ(expected, actual);
}
TEST_02_floop1(TestSuite_SelfTest, test_floop1_02)
{
	int n = 6603399;
	int expected = 3396600;
	int actual = floop1(n);
	EXPECT_EQ(expected, actual);
}

TEST_01_floop2(TestSuite_SelfTest, test_floop2_01)
{
	int x = 10203;
	int z = 321;
	int expected = TRUE;
	int actual = floop2(x, z);
	EXPECT_EQ(expected, actual);
}
TEST_02_floop2(TestSuite_SelfTest, test_floop2_02)
{
	int x = 10203;
	int z = 11321;
	int expected = FALSE;
	int actual = floop2(x, z);
	EXPECT_EQ(expected, actual);
}

TEST_01_floop3(TestSuite_SelfTest, test_floop3_01)
{
	int v[] = { 123, 456, 789, 0 };
	int expected = 147;
	int actual = floop3(v);
	EXPECT_EQ(expected, actual);

}
TEST_02_floop3(TestSuite_SelfTest, test_floop3_02)
{
	int v[] = { 123, 456, 789, 999, 123 ,0 };
	int expected = 14791;
	int actual = floop3(v);
	EXPECT_EQ(expected, actual);
}

TEST_01_isPrime(TestSuite_SelfTest, test_isPrime_01)
{
	int n = 0;
	int expected = FALSE;
	int actual = isPrime(n);
	EXPECT_EQ(expected, actual);
}
TEST_02_isPrime(TestSuite_SelfTest, test_isPrime_02)
{
	int n = 2;
	int expected =	TRUE;
	int actual = isPrime(n);
	EXPECT_EQ(expected, actual);
}
TEST_03_isPrime(TestSuite_SelfTest, test_isPrime_03)
{
	int n = 14;
	int expected = FALSE;
	int actual = isPrime(n);
	EXPECT_EQ(expected, actual);
}
TEST_04_isPrime(TestSuite_SelfTest, test_isPrime_04)
{
	int n = 143;
	int expected = FALSE;
	int actual = isPrime(n);
	EXPECT_EQ(expected, actual);
}
TEST_05_isPrime(TestSuite_SelfTest, test_isPrime_05)
{
	int n = 229;
	int expected = TRUE;
	int actual = isPrime(n);
	EXPECT_EQ(expected, actual);
}

TEST_01_deleteElem(TestSuite_SelfTest, test_deleteElem_01)
{
	int v[] = { 123, 545, 2343, 2145, 234, 9754 };
	int n = 6;
	int p = 3;
	int vexp[] = { 123, 545, 2343, 234, 9754 };
	int nexp = 5;
	deleteElem(v, &n, p);
	EXPECT_EQ(nexp, n);
	for(int i=0;i<n;i++)
		EXPECT_EQ(vexp[i], v[i]);
}
TEST_02_deleteElem(TestSuite_SelfTest, test_deleteElem_02)
{
	int v[] = { 123, 545, 2343, 2145, 234, 9754 };
	int n = 6;
	int p = 0;
	int vexp[] = { 545, 2343, 2145, 234, 9754 };
	int nexp = 5;
	deleteElem(v, &n, p);
	EXPECT_EQ(nexp, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(vexp[i], v[i]);

}
TEST_03_deleteElem(TestSuite_SelfTest, test_deleteElem_03)
{
	int v[] = { 123, 545, 2343, 2145, 234, 9754 };
	int n = 6;
	int p = 5;
	int vexp[] = { 123, 545, 2343, 2145, 234 };
	int nexp = 5;
	deleteElem(v, &n, p);
	EXPECT_EQ(nexp, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(vexp[i], v[i]);

}

TEST_01_insertElem(TestSuite_SelfTest, test_insertElem_01)
{
	int v[7] = { 123, 545, 2343, 2145, 234, 9754 };
	int n = 6;
	int p = 3;
	int val = 0;
	int vexp[] = { 123, 545, 2343, 0, 2145, 234, 9754 };
	int nexp = 7;
	insertElem(v, &n, p, val);
	EXPECT_EQ(nexp, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(vexp[i], v[i]);
}
TEST_02_insertElem(TestSuite_SelfTest, test_insertElem_02)
{
	int v[7] = { 123, 545, 2343, 2145, 234, 9754 };
	int n = 6;
	int p = 5;
	int val = 0;
	int vexp[] = { 123, 545, 2343, 2145, 234, 0, 9754 };
	int nexp = 7;
	insertElem(v, &n, p, val);
	EXPECT_EQ(nexp, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(vexp[i], v[i]);
}
TEST_03_insertElem(TestSuite_SelfTest, test_insertElem_03)
{
	int v[7] = { 123, 545, 2343, 2145, 234, 9754 };
	int n = 6;
	int p = 0;
	int val = 0;
	int vexp[] = { 0, 123, 545, 2343, 2145, 234, 9754 };
	int nexp = 7;
	insertElem(v, &n, p, val);
	EXPECT_EQ(nexp, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(vexp[i], v[i]);
}

TEST_01_addArrays(TestSuite_SelfTest, test_addArrays_01)
{
	int v1[] = { 1, 2, 3, 4, 5 };
	int n1 = 5;
	int v2[] = { 9, 8, 7, 6, 5 };
	int n2 = 5;
	int result[5];
	int nr;
	int exp[] = { 10, 10, 10, 10, 10 };
	int expnr = 5;
	addArrays(v1, n1, v2, n2, result, &nr);
	EXPECT_EQ(nr, expnr);
	for (int i = 0; i < nr; i++)
		EXPECT_EQ(exp[i], result[i]);
}
TEST_02_addArrays(TestSuite_SelfTest, test_addArrays_02)
{
	int v1[] = { 1, 2, 3 };
	int n1 = 3;
	int v2[] = { 9, 8, 7, 6, 5 };
	int n2 = 5;
	int result[5] = { 0 };
	int nr;
	int exp[] = { 10, 10, 10, 6, 5};
	int expnr = 5;
	addArrays(v1, n1, v2, n2, result, &nr);
	EXPECT_EQ(nr, expnr);
	for (int i = 0; i < nr; i++)
		EXPECT_EQ(exp[i], result[i]);
}
TEST_03_addArrays(TestSuite_SelfTest, test_addArrays_03)
{
	int v1[] = { 1, 2, 3, 4, 5 };
	int n1 = 5;
	int v2[] = { 9, 8 };
	int n2 = 2;
	int result[5];
	int nr;
	int exp[] = { 10, 10, 3, 4, 5};
	int expnr = 5;
	addArrays(v1, n1, v2, n2, result, &nr);
	EXPECT_EQ(nr, expnr);
	for (int i = 0; i < nr; i++)
		EXPECT_EQ(exp[i], result[i]);
}

TEST_01_reverseArray(TestSuite_SelfTest, test_reverseArray_01)
{
	int v[] = { 1, 2, 3, 4, 5 };
	int n = 5;
	int exp[] = { 5, 4, 3, 2, 1 };
	reverseArray(v, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(v[i], exp[i]);
}
TEST_02_reverseArray(TestSuite_SelfTest, test_reverseArray_02)
{
	int v[] = { 1, 2, 3, 4, 5, 6 };
	int n = 6;
	int exp[] = { 6, 5, 4, 3, 2, 1 };
	reverseArray(v, n);
	for (int i = 0; i < n; i++)
		EXPECT_EQ(v[i], exp[i]);
}

TEST_01_sumMax3(TestSuite_SelfTest, test_sumMax3_01)
{
	// a & b
	int a = 11;
	int b = 12;
	int c = 23;
	int d = 34;
	int e = 33;
	int expected = 90;
	int actual = sumMax3(a, b, c, d, e);
	EXPECT_EQ(expected, actual);
}
TEST_02_sumMax3(TestSuite_SelfTest, test_sumMax3_02)
{
	// b & c
	int a = 110;
	int b = 12;
	int c = 23;
	int d = 34;
	int e = 33;
	int expected = 177;
	int actual = sumMax3(a, b, c, d, e);
	EXPECT_EQ(expected, actual);
}
TEST_03_sumMax3(TestSuite_SelfTest, test_sumMax3_03)
{
	// c && e
	int a = 50;
	int b = 310;
	int c = 23;
	int d = 300;
	int e = 33;
	int expected = 660;
	int actual = sumMax3(a, b, c, d, e);
	EXPECT_EQ(expected, actual);
}
TEST_04_sumMax3(TestSuite_SelfTest, test_sumMax3_04)
{
	// e & d
	int a = 100;
	int b = 100;
	int c = 100;
	int d = 50;
	int e = 33;
	int expected = 300;
	int actual = sumMax3(a, b, c, d, e);
	EXPECT_EQ(expected, actual);
}
TEST_05_sumMax3(TestSuite_SelfTest, test_sumMax3_05)
{
	// d & a
	int a = 60;
	int b = 100;
	int c = 100;
	int d = 34;
	int e = 100;
	int expected = 300;
	int actual = sumMax3(a, b, c, d, e);
	EXPECT_EQ(expected, actual);
}

TEST_01_customTrim(TestSuite_SelfTest, test_customTrim_01)
{
	char s[] = "   text    ";
	char expected[] = "text";
	char* actual = customTrim(s);
	EXPECT_STREQ(expected, actual);
}

TEST_01_interval(TestSuite_SelfTest, test_interval_01)
{
	int v[] = { 12, 11, 4, 34, 23, 15, 19, 15 };
	int n = 8;
	expected_globalCount = 3;
	interval(v, n);

	check_global_data();
}
TEST_02_interval(TestSuite_SelfTest, test_interval_02)
{
	int v[] = { 30, 11, 4, 34, 23, 15, 19, 15 };
	int n = 8;
	expected_globalCount = 5;
	interval(v, n);

	check_global_data();
}

TEST_01_multArray(TestSuite_SelfTest, test_multArray_01)
{
	int v[] = { 10, 15, 4, 3, 25, 55 };
	int k = 5;
	int n = 6;
	int expected = 3;
	{
		testing::InSequence s;
		EXPECT_CALL(*obj_Mock_Env_Ptr, modulo_extern(_,_)).Times(2).WillRepeatedly(Return(0));
		EXPECT_CALL(*obj_Mock_Env_Ptr, modulo_extern(_,_)).Times(2).WillRepeatedly(Return(1));
		EXPECT_CALL(*obj_Mock_Env_Ptr, modulo_extern(_,_)).Times(2).WillRepeatedly(Return(0));
	}
	int actual = multArray(v, n, k);
	EXPECT_EQ(expected, actual);
}

TEST_01_addFractions(TestSuite_SelfTest, test_addFractions_01)
{
	fraction f1 = { 1, 2 };
	fraction f2 = { 3, 4 };
	fraction fe = { 10, 8 };
	fraction fa = addFractions(f1, f2);
	EXPECT_EQ(fa.a, fe.a);
	EXPECT_EQ(fa.b, fe.b);
}

TEST_01_subtractFractions(TestSuite_SelfTest, test_subtractFractions_01)
{
	fraction f1 = { 1, 2 };
	fraction f2 = { 3, 4 };
	fraction fe = { -2, 8 };
	fraction fa = subtractFractions(f1, f2);
	EXPECT_EQ(fa.a, fe.a);
	EXPECT_EQ(fa.b, fe.b);
}

TEST_01_multiplyFractions(TestSuite_SelfTest, test_multiplyFractions_01)
{
	fraction f1 = { 1, 2 };
	fraction f2 = { 3, 4 };
	fraction fe = { 3, 8 };
	fraction fa = multiplyFractions(f1, f2);
	EXPECT_EQ(fa.a, fe.a);
	EXPECT_EQ(fa.b, fe.b);
}

TEST_01_divideFractions(TestSuite_SelfTest, test_divideFractions_01)
{
	fraction f1 = { 1, 2 };
	fraction f2 = { 3, 4 };
	fraction fe = { 4, 6 };
	fraction fa = divideFractions(f1, f2);
	EXPECT_EQ(fa.a, fe.a);
	EXPECT_EQ(fa.b, fe.b);
}

TEST_01_compareFractions(TestSuite_SelfTest, test_compareFractions_01)
{
	fraction f1 = { 1, 2 };
	fraction f2 = { 3, 4 };
	int expected = -1;
	int actual = compareFractions(f1, f2);
	EXPECT_EQ(expected, actual);
}
TEST_02_compareFractions(TestSuite_SelfTest, test_compareFractions_02)
{
	fraction f1 = { 12, 30 };
	fraction f2 = { 24, 60 };
	int expected = 0;
	int actual = compareFractions(f1, f2);
	EXPECT_EQ(expected, actual);
}
TEST_03_compareFractions(TestSuite_SelfTest, test_compareFractions_03)
{
	fraction f1 = { 14, 12 };
	fraction f2 = { -3, 7 };
	int expected = 1;
	int actual = compareFractions(f1, f2);
	EXPECT_EQ(expected, actual);
}

TEST_01_powerFraction(TestSuite_SelfTest, test_powerFraction_01)
{
	fraction f = { 2, 3 };
	int k = 4;
	fraction fe = { 16, 81 };
	fraction fa = powerFraction(f, k);
	EXPECT_EQ(fa.a, fe.a);
	EXPECT_EQ(fa.b, fe.b);

}

TEST_01_simplifyFraction(TestSuite_SelfTest, test_simplifyFraction_01)
{
	fraction f = { 36, 60 };
	int expected = TRUE;
	fraction fe = { 3, 5 };
	int actual = simplifyFraction(&f);
	EXPECT_EQ(expected, actual);
	EXPECT_EQ(f.a, fe.a);
	EXPECT_EQ(f.b, fe.b);
}
TEST_02_simplifyFraction(TestSuite_SelfTest, test_simplifyFraction_02)
{
	fraction f = { 17, 60 };
	int expected = FALSE;
	fraction fe = { 17, 60 };
	int actual = simplifyFraction(&f);
	EXPECT_EQ(expected, actual);
	EXPECT_EQ(f.a, fe.a);
	EXPECT_EQ(f.b, fe.b);
}
TEST_03_simplifyFraction(TestSuite_SelfTest, test_simplifyFraction_03)
{
	fraction f = { -36, 60 };
	int expected = FALSE;
	fraction fe = { -36, 60 };
	int actual = simplifyFraction(&f);
	EXPECT_EQ(expected, actual);
	EXPECT_EQ(f.a, fe.a);
	EXPECT_EQ(f.b, fe.b);
}

TEST_01_determineQuadrant(TestSuite_SelfTest, test_determineQuadrant_01)
{
	double x = 23.11;
	double y = 190.33;
	int expected = 1;
	int* actual = determineQuadrant(x, y);
	EXPECT_EQ(expected, *actual);
}
TEST_02_determineQuadrant(TestSuite_SelfTest, test_determineQuadrant_02)
{
	double x = -23.11;
	double y = 190.33;
	int expected = 2;
	int* actual = determineQuadrant(x, y);
	EXPECT_EQ(expected, *actual);
}
TEST_03_determineQuadrant(TestSuite_SelfTest, test_determineQuadrant_03)
{
	double x = 0;
	double y = 190.33;
	int expected = 0;
	int* actual = determineQuadrant(x, y);
	EXPECT_EQ(expected, *actual);
}
TEST_04_determineQuadrant(TestSuite_SelfTest, test_determineQuadrant_04)
{
	double x = 23.11;
	double y = -190.33;
	int expected = 4;
	int* actual = determineQuadrant(x, y);
	EXPECT_EQ(expected, *actual);
}
TEST_05_determineQuadrant(TestSuite_SelfTest, test_determineQuadrant_05)
{
	double x = -23.11;
	double y = -190.33;
	int expected = 3;
	int* actual = determineQuadrant(x, y);
	EXPECT_EQ(expected, *actual);
}
TEST_06_determineQuadrant(TestSuite_SelfTest, test_determineQuadrant_06)
{
	double x = 0;
	double y = 0;
	int expected = 0;
	int* actual = determineQuadrant(x, y);
	EXPECT_EQ(expected, *actual);
}

TEST_01_sumWithExternal2(TestSuite_SelfTest, test_sumWithExternal2_01)
{
	int a = 5;
	int b = 7;
	int expected = 12;
	{
		testing::InSequence s;
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(1).WillOnce(Return(12));
	}
	int actual = sumWithExternal2(a, b);

	EXPECT_EQ(expected, actual);
}

TEST_01_sumArrayExt(TestSuite_SelfTest, test_sumArrayExt_01)
{
	int v[] = { 1, 2, 3, 4 };
	int n = 4;
	int expected = 10;
	{
		testing::InSequence s;
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(1).WillOnce(Return(1));
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(1).WillOnce(Return(3));
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(1).WillOnce(Return(6));
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(1).WillOnce(Return(10));
	}
	int actual = sumArrayExt(v, n);

	EXPECT_EQ(expected, actual);

}
TEST_02_sumArrayExt(TestSuite_SelfTest, test_sumArrayExt_02)
{
	int v[] = { 11, 21, 33, 0, 50 };
	int n = 5;
	int expected = 115;
	{
		testing::InSequence s;
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(1).WillOnce(Return(11));
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(1).WillOnce(Return(32));
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(2).WillRepeatedly(Return(65));
		EXPECT_CALL(*obj_Mock_Env_Ptr, externalSum(_, _)).Times(1).WillOnce(Return(115));
	}
	int actual = sumArrayExt(v, n);

	EXPECT_EQ(expected, actual);

}

TEST_01_kDigitsMax(TestSuite_SelfTest, test_kDigitsMax_01)
{
	int n = 27594;
	int k = 3;
	int expected = 975;
	int nr;
	kDigitsMax(n, k, &nr);
	EXPECT_EQ(expected, nr);
}
TEST_02_kDigitsMax(TestSuite_SelfTest, test_kDigitsMax_02)
{
	int n = 9075;
	int k = 4;
	int expected = 9750;
	int nr;
	kDigitsMax(n, k, &nr);
	EXPECT_EQ(expected, nr);
}

TEST_01_maxPrimesN(TestSuite_SelfTest, test_maxPrimesN_01)
{
	int n = 25;
	int a, b;
	int ea = 23;
	int eb = 19;
	maxPrimesN(n, &a, &b);
	EXPECT_EQ(a, ea);
	EXPECT_EQ(b, eb);
}
TEST_02_maxPrimesN(TestSuite_SelfTest, test_maxPrimesN_02)
{
	int n = 3;
	int a, b;
	int ea = 2;
	int eb = -1;
	maxPrimesN(n, &a, &b);
	EXPECT_EQ(a, ea);
	EXPECT_EQ(b, eb);
}
TEST_03_maxPrimesN(TestSuite_SelfTest, test_maxPrimesN_03)
{
	int n = 2;
	int a, b;
	int ea = -1;
	int eb = -1;
	maxPrimesN(n, &a, &b);
	EXPECT_EQ(a, ea);
	EXPECT_EQ(b, eb);
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}