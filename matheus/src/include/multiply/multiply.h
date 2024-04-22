#ifdef __cplusplus
extern "C"
{
#endif
#define E_OK     0
#define E_NOT_OK 1
#define TRUE 1
#define FALSE 0

#ifdef MODULE_TEST
#define STATIC
#else
#define STATIC static
#endif

#ifndef MULTIPLY_H
#define MULTIPLY_H
    struct Point2D
    {
        int x;
        int y;
    };
    
    struct fraction
    {
        int a, b;
    };

#endif // !MULTIPLY_H

   

int getX(struct Point2D p);
int getY(struct Point2D p);
double calculateDistance(struct Point2D p1, struct Point2D p2);
int arePointsOnSameLine(struct Point2D p1, struct Point2D p2, struct Point2D p3);
int computeRectangleArea(struct Point2D topLeft, struct Point2D bottomRight);
int isPointOnCircle(struct Point2D point, struct Point2D center, double radius);
int isPointInsideCircle(struct Point2D point, struct Point2D center, double radius);

struct fraction addFractions(struct fraction f1, struct fraction f2);
struct fraction subtractFractions(struct fraction f1, struct fraction f2);
struct fraction multiplyFractions(struct fraction f1, struct fraction f2);
struct fraction divideFractions(struct fraction f1, struct fraction f2);
int compareFractions(struct fraction f1, struct fraction f2);
struct fraction powerFraction(struct fraction f1, int pow);
int simplifyFraction(struct fraction* f);

int addWithIf(int a, int b);
int isPrime(int n);
int sumMax3(int a, int b, int c, int d, int e);

char getGrade(int score);
char* getDayName(int day);

int isDivisor(int num, int divisor);
int getPowerOfFactor(int num, int factor);
long long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);
int floop1(int n);
int floop2(int x, int z);
int floop3(int* v);

int getMax(int a, int b, int c);
int opLog1(int a, int b, int c);
int* determineQuadrant(double x, double y);

int getNextId();
char* customTrim(char s[]);
void resetId();
char* getDayforId();


int sumWithExternal(int a, int b, int c);
int sumWithExternal2(int a, int b);
int externalSum(int a, int b);
void deletePrimes(int* v, int* n);
int sumArrayExt(int* v, int n);

int isPrime_external(int n);
int modulo_extern(int num, int div);

void generateSquares(int start, int end, int* squares);
void sumDigits(int n, int* s);
void digitsMinMax(int n, int* dmin, int* dmax);
void deleteElem(int* v, int* n, int p);
void insertElem(int* v, int* n, int p, int val);
void addArrays(int* v1, int n1, int* v2, int n2, int* result, int* nr);
void reverseArray(int* v, int n);
void kDigitsMax(int n, int k, int* nr);
void maxPrimesN(int n, int* a, int* b);

int tryAddGlobal(int val);
void addStaticSum(int val);

int customStrlen(const char* str);
int customStrcmp(const char* str1, const char* str2);
char* customStrchr(const char* str, char target);
char* customStrstr(const char* haystack, const char* needle);

int interval(int a[], int n);
int multArray(int* a, int n, int k);


/*
int multiply(int a, int b);
float multiply2(float a, float b);
double multiply3(double a, double b);
int numara_modulo(unsigned int n);
void BAI_s_GetResetStatus(void);
*/

#ifdef __cplusplus
}
#endif