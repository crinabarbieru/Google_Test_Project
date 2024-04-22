#include <multiply/multiply.h>
#include <stdlib.h>
#include <xkeycheck.h>
#include <math.h>
//#include <Std_Types.h>

int suma = 0;
int produs = 0;
int corect = E_OK;

//STATIC int func_statica(int a, int b);
STATIC int remainder_static(int a, int b);

// Functii cu struct Point2D
int getX(struct Point2D p)
{
    return p.x;
}
int getY(struct Point2D p)
{
    return p.y;
}
double calculateDistance(struct Point2D p1, struct Point2D p2)
{
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;

    return (double)sqrt(dx * dx + dy * dy);
}
int arePointsOnSameLine(struct Point2D p1, struct Point2D p2, struct Point2D p3)
{

    if ((p2.y - p1.y) * (p3.x - p2.x) == (p3.y - p2.y) * (p2.x - p1.x))
        return TRUE;
    else
        return FALSE;

}
int computeRectangleArea(struct Point2D topLeft, struct Point2D bottomRight)
{
    if (topLeft.x <= bottomRight.x && topLeft.y >= bottomRight.y) {
        int length = abs(bottomRight.x - topLeft.x);
        int width = abs(bottomRight.y - topLeft.y);

        return length * width;
    }

    return -1;
}
int isPointOnCircle(struct Point2D point, struct Point2D center, double radius)
{
    double distance = calculateDistance(point, center);

    if (fabs(distance - radius) < 0.0001)  // Allowing for a small error due to floating-point precision
        return TRUE;
    else
        return FALSE;

}
int isPointInsideCircle(struct Point2D point, struct Point2D center, double radius)
{
    double distance = calculateDistance(point, center);

    if (distance < radius)
        return TRUE;
    else
        return FALSE;
}

// Functii cu struct fraction
struct fraction addFractions(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    int d = f1.a * f2.b + f1.b * f2.a;
    int n = f1.b * f2.b;

    f.a = d;
    f.b = n;

    return f;
}
struct fraction subtractFractions(struct fraction f1, struct fraction f2)
{
    struct fraction f;
    int d = f1.a * f2.b - f1.b * f2.a;
    int n = f1.b * f2.b;

    f.a = d;
    f.b = n;

    return f;
}
struct fraction multiplyFractions(struct fraction f1, struct fraction f2)
{
    struct fraction f;
    int d = f1.a * f2.a;
    int n = f1.b * f2.b;
    f.a = d;
    f.b = n;
    return f;
}
struct fraction divideFractions(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    int d = f1.a * f2.b;
    int n = f1.b * f2.a;

    f.a = d;
    f.b = n;
    return f;
}
int compareFractions(struct fraction f1, struct fraction f2)
{
    int p1 = f1.a * f2.b;
    int p2 = f1.b * f2.a;
    if (p1 < p2)
        return -1;
    if (p1 == p2)
        return 0;
    return 1;
}
struct fraction powerFraction(struct fraction f1, int pow)
{
    struct fraction pf;
    int d = 1;
    int n = 1;

    for (int i = 1; i <= pow; i++)
    {
        d = d * f1.a;
        n = n * f1.b;
    }

    pf.a = d;
    pf.b = n;

    return pf;
}
//Functie cu struct fraction si parametru de iesire
int simplifyFraction(struct fraction* f)
{
    if (f->a <= 0 || f->b <= 0)
    {
        return FALSE;
    }
    int g = gcd(f->a, f->b);
    if (g < 2)
        return FALSE;
    f->a = f->a / g;
    f->b = f->b / g;
    return TRUE;
}


//Functii cu if
int addWithIf(int a, int b)
{
    int result;
    if (b > 0)
    {
        result = a + b;
    }
    else
    {
        result = a - b;
    }
    return result;
}
int isPrime(int n)
{
    if (n < 2)
        return FALSE;
    if (n == 2)
        return TRUE;
    if (n % 2 == 0)
        return FALSE;
    for (int d = 3; d * d <= n; d = d + 2)
        if (n % d == 0)
            return FALSE;
    return TRUE;
}
int sumMax3(int a, int b, int c, int d, int e)
{
    int S = a + b + c + d + e;
    int minim = a;
    int p = 1;
    if (b < minim)
    {
        minim = b;
        p = 2;
    }
    if (c < minim)
    {
        minim = c;
        p = 3;
    }
    if (d < minim)
    {
        minim = d;
        p = 4;
    }
    if (e < minim)
    {
        minim = e;
        p = 5;
    }
    S = S - minim;
    
    switch (p)
    {
    case 1:
        a = 1000000000;
        break;
    case 2:
        b = 1000000000;
        break;
    case 3:
        c = 1000000000;
        break;
    case 4:
        d = 1000000000;
        break;
    case 5:
        e = 1000000000;
        break;
    }
    minim = a;
    if (b < minim)
    {
        minim = b;
    }
    if (c < minim)
    {
        minim = c;
    }
    if (d < minim)
    {
        minim = d;
    }
    if (e < minim)
    {
        minim = e;
    }
    S = S - minim;

    return S;
}

//Functii cu switch
char getGrade(int score)
{
    switch (score / 10)
    {
    case 10:
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    default:
        return 'F';
    }
}
char* getDayName(int day)
{
    static char dayname[4];
    switch (day)
    {
    case 1:
        strcpy(dayname, "MON");
        break;
    case 2:
        strcpy(dayname, "TUE");
        break;
    case 3:
        strcpy(dayname, "WED");
        break;
    case 4:
        strcpy(dayname, "THU");
        break;
    case 5:
        strcpy(dayname, "FRI");
        break;
    case 6:
        strcpy(dayname, "SAT");
        break;
    case 7:
        strcpy(dayname, "SUN");
        break;
    default:
        return NULL;
    }
    return dayname;
}

// Functii statice
STATIC int remainder_static(int a, int b)
{
    if (b == 0)
        return -1;
    return a % b;
}
STATIC int maxNr(int n)
{
    int put = 1, p = 0, maxi = -1;
    int aux = n;
    while (aux != 0)
    {
        put = put * 10;
        p++;
        aux /= 10;
    }
    while (p != 0)
    {
        n = n % (put / 10) * 10 + n / (put / 10);
        if (n > maxi) maxi = n;
        p--;
    }
    return maxi;
}

//Functii ce apeleaza functii statice
int isDivisor(int num, int divisor)
{
    if (remainder_static(num, divisor) == 0)
        return TRUE;
    return FALSE;
}
int getPowerOfFactor(int num, int factor)
{
    int power = 0;
    while (isDivisor(num, factor))
    {
        num /= factor;
        power++;
    }
    return power;
}
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = remainder_static(a, b);
        a = b;
        b = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    int g = gcd(a, b);
    return a * b / g;
}

// Functie cu variabila interna statica
int getNextId()
{
    static int id = 0;
    if (id > 7)
    {
        id = 0;
    }
    else
        id++;
    return id;
} 
char* customTrim(char s[])
{
    static char result[1000];
    int i = 0;
    int ok = FALSE;
    int poz1, poz2;
    while (s[i] != '\0')
    {
        if (s[i] != ' ' && ok == FALSE)
            ok = TRUE, poz1 = i;
        if (s[i] != ' ')
            poz2 = i;
        i++;
    }
    int nr = 0;
    for (int i = poz1; i <= poz2; i++)
    {
        result[nr] = s[i];
        nr++;

    }
    result[nr] = '\0';
    return result;
}

//Functii ce apeleaza getNextId()
void resetId()
{
    int crt = getNextId();
    while (crt!=0)
        crt = getNextId();
}
char* getDayforId()
{
    int curr_id = getNextId();
    return getDayName(curr_id);
}

//Functii cu loops (for, while)
long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}
int floop1(int n)
{
    int z = 0;
    int p = 1;
    int c;
    while (n)
    {
        c = n % 10;
        n = n / 10;
        if (c % 3 == 0)
        {
            z += p * (9 - c);
            p = p * 10;
        }
    }
    return z;
}
int floop2(int x, int z)
{
    int y = 0;
    do {
        y = y * 10 + x % 10;
        x = x / 100;
    } while (x != 0);

    while (y*z > 0 && y % 10 == z % 10)
    {
        y = y / 10;
        z = z / 10;
    }
    if (y + z == 0)
        return TRUE;
    else
        return FALSE;
}
int floop3(int *v)
{
    int y = 0;
    int i = 0;
    int x;
    while (v[i] != 0)
    {
        x = v[i];
        while (x > 9)
            x = x / 10;
        y = y * 10 + x;
        i++;
    }
    return y;
}

// Functii cu operatori logici
int getMax(int a, int b, int c)
{
    return (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
}
int opLog1(int a, int b, int c)
{
    if ((a > 0) && ((b < 10) || (c != 0)))
        return TRUE;
    if ((a > 0 || b < 900) && c != 0)
        return TRUE;
    return FALSE;
}
// Functie cu if, operatori logici si variabila interna statica
int* determineQuadrant(double x, double y) {

    static int q;
        if (x > 0 && y > 0) 
        {
            q = 1;
        }
        else if (x > 0 && y < 0) 
        {
            q = 4;
        }
        else if (x < 0 && y > 0) 
        {
            q = 2;
        }
        else if (x < 0 && y < 0) 
        {
            q = 3;
        }
        else
        {
            q = 0;
        }
        return &q;
}

//Functii ce apleleaza functii externe
int sumWithExternal(int a, int b, int c)
{
    int es1 = externalSum(a, b);
    int es2 = externalSum(es1, c);
    return es2;

}
int sumWithExternal2(int a, int b)
{
    int es1 = externalSum(a, b);
    return es1;

}
void deletePrimes(int* v, int* n)
{
    int i;
    for (i = 0; i < *n; i++)
    {
        if (isPrime_external(v[i]) == TRUE)
        {
            deleteElem(v, n, i);
            i--;
        }

    }
}
int multArray(int *a, int n, int k)
{
    int temp = 0;
    for (int i = 0; i < n; i++) {
        if (modulo_extern(a[i], k)==0 && a[i] % 10 == k)
            temp++;
    } return temp;
}

//Functie ce apeleaza sumWithExternal
int sumArrayExt(int* v, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s = sumWithExternal2(s, v[i]);
    return s;
}


// Functie cu parametrii de iesire
void generateSquares(int start, int end, int* squares)
{
    for (int i = start; i <= end; ++i)
    {
        squares[i] = i * i;
    }
}
void sumDigits(int n, int *s)
{
    *s = 0;
    while (n)
    {
        *s += n % 10;
        n = n / 10;
    }
}
void digitsMinMax(int n, int *dmin, int *dmax)
{
    *dmin = 10;
    *dmax = -1;
    int d;
    while (n)
    {
        d = n % 10;
        if (d < *dmin)
            *dmin = d;
        if (d > *dmax)
            *dmax = d;
        n = n / 10;
    }
}
void deleteElem(int* v, int *n, int p)
{
    for (int i = p; i < *n - 1; i++)
        v[i] = v[i + 1];

    *n = *n - 1;

}
void insertElem(int* v, int* n, int p, int val)
{
    //move elem after p to the right
    for (int i = *n; i > p; i--)
        v[i] = v[i - 1];

    //set desired value on position p
    v[p] = val;

    //increase total number of elements in array
    *n = *n + 1;
}
void addArrays(int *v1, int n1, int *v2, int n2, int *result, int *nres)
{
    int i = 0, j = 0;
    int nr = 0;

    while (i < n1 && j < n2)
    {
        result[nr] = v1[i] + v2[j];
        i++;
        j++;
        nr++;
    }

    while (i < n1)
    {
        result[nr] = v1[i];
        i++;
        nr++;
    }

    while ( j < n2)
    {
        result[nr] = v2[j];
        j++;
        nr++;
    }

    *nres = nr;
}
void reverseArray(int* v, int n)
{
    int l = 0;
    int r = n - 1;
    int aux;

    while (l < r)
    {
        
        aux = v[l];
        v[l] = v[r];
        v[r] = aux;

        //move to next pair 
        l++;
        r--;
    }
}
void kDigitsMax(int n, int k, int* nr)
{
    int f[11] = { 0 };

    int cn = n;
    int res = 0;

    while (cn)
    {
        f[cn % 10]++;
        cn /= 10;
    }

    for (int i = 9; i >= 0; --i)
    {
        for (int j = 1; j <= f[i] && k; ++j, k--)
            res = res * 10 + i;
    }

    *nr = res;
}
void maxPrimesN(int n, int* a, int* b) {

    *a = -1;
    *b = -1;
    n--;

    if (n < 2)
        return;

    while (!isPrime(n))
        n--;
    *a = n;
    n--;

    if (n < 2)
        return;

    while (!isPrime(n))
        n--;
    *b = n;
}

// Functie cu variabila globala
int globalN = 20;
int tryAddGlobal(int val)
{
    if ( val < globalN)
    {
        globalN++;
        return TRUE;
    }

    else
    {
        globalN--;
        return FALSE;
    }
}
int globalCount;
int interval(int a[], int n) 
{
    int minim = a[0];
    int maxim = a[n - 1];

    if (minim > maxim)
    {
        int aux = minim;
        minim = maxim;
        maxim = aux;
    }

    //globalCount = 0;
    for (int i = 0; i < n; i++)
        if (a[i] >= minim && a[i] <= maxim)
            globalCount++;

    return globalCount;
}

//Functie cu variabila globala statica
STATIC int staticSum;
void addStaticSum(int val)
{
    if (val > 0)
        staticSum += val;

    else if (val == 0)
        staticSum = 0;

    else
        staticSum -= val;
}

//Functii cu char arrays/pointers
int customStrlen(const char* str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}
int customStrcmp(const char* str1, const char* str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] < str2[i])
            return -1;

        if (str1[i] > str2[i])
            return 1;

        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;

    if (str1[i] != '\0')
        return 1;

    return -1;
}
char* customStrchr(const char* str, char target)
{
    char* i = str;

    while (*i != '\0')
    {
        if (*i == target)
        {
            return i;
        }
        i++;
    }

    return NULL;
}
char* customStrstr(const char* s1, const char* s2)
{
    char* haystack = s1;
    char* needle = s2;

    while (*haystack != '\0')
    {
        const char* hayPtr = haystack;
        const char* needlePtr = needle;

        while (*needlePtr != '\0' && *hayPtr == *needlePtr)
        {
            hayPtr++;
            needlePtr++;
        }

        if (*needlePtr == '\0')
        {
            return haystack; // Return a pointer to the start of the first occurrence of the needle
        }

        haystack++;
    }

    return NULL; // Return NULL if the needle is not found
}