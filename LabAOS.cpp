#include <iostream>
#include <time.h>

#pragma optimize("", off)

using namespace std;

float op_per_sec[19];
const float FLOAT_ITER = 1000000;
float empty_time = 0;

const char x1 = 'a', x2 = 'b', x3 = 'c', x4 = 'd', x5 = 'e', x6 = 'f', x7 = 'g', x8 = 'h', x9 = 'i', x10 = 'j', y11 = '!', y2 = '#', y3 = '$', y4 = '%', y5 = '&', y6 = '(', y7 = '*', y8 = ')', y9 = '.', y10 = '/';
const int z1 = 127, z2 = 131, z3 = 137, z4 = 139, z5 = 149, z6 = 151, z7 = 157, z8 = 167, z9 = 173, z10 = 179, u1 = 37, u2 = 41, u3 = 43, u4 = 47, u5 = 53, u6 = 59, u7 = 61, u8 = 67, u9 = 71, u10 = 73;
const long v1 = 1195, v2 = 1323, v3 = 1737, v4 = 1213, v5 = 1233, v6 = 1277, v7 = 1938, v8 = 1491, v9 =1551, v10 = 1933, h1 = 153, h2 = 167, h3 = 185, h4 = 139, h5 = 133, h6 = 151, h7 = 177, h8 = 165, h9 = 159, h10 = 123;
const float n1 = 1825.3, n2 = 1776.4, n3 = 1311.2, n4 = 1741.2, n5 = 1434.75, n6 = 1431.09, n7 = 1443.93, n8 = 1275.87, n9 = 1753.29, n10 = 1597.34, m1 = 89.37, m2 = 77.27, m3 = 63.45, m4 = 75.253, m5 = 39.29, m6 = 75.22, m7 = 27.94, m8 = 98.4, m9 = 87.37, m10 = 19.34;
const double j11 = 323.9834, j2 = 721.0943, j3 = 343.221, j4 = 871.499, j5 = 711.8588, j6 = 455.98989, j7 = 713.994, j8 = 991.775, j9 = 947.854, j10 = 331.434, k1 = 33.321, k2 = 11.212, k3 = 37.2882, k4 = 87.28, k5 = 65.390, k6 = 91.8, k7 = 13.372, k8 = 43.33, k9 = 55.55, k10 = 67.309;

double empty1()
{
	char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	long double time;
	clock_t time1 = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		a1 = x1;
		a2 = x2;
		a3 = x3;
		a4 = x4;
		a5 = x5;
		a6 = x6;
		a7 = x7;
		a8 = x8;
		a9 = x9;
		a10 = x10;
	}
	time = (clock() - time1)/ CLOCKS_PER_SEC;
	return time;
}

double empty2()
{
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
	long double time;
	clock_t time1 = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		b1 = z1;
		b2 = z2;
		b3 = z3;
		b4 = z4;
		b5 = z5;
		b6 = z6;
		b7 = z7;
		b8 = z8;
		b9 = z9;
		b10 = z10;
	}
	time = (clock() - time1) / CLOCKS_PER_SEC;
	return time;
}

double empty3()
{
	long c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	long double time;
	clock_t time1 = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		c1 = v1;
		c2 = v2;
		c3 = v3;
		c4 = v4;
		c5 = v5;
		c6 = v6;
		c7 = v7;
		c8 = v8;
		c9 = v9;
		c10 = v10;
	}
	time = (clock() - time1) / CLOCKS_PER_SEC;
	return time;
}

double empty4()
{
	float d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
	long double time;
	clock_t time1 = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		d1 = n1;
		d2 = n2;
		d3 = n3;
		d4 = n4;
		d5 = n5;
		d6 = n6;
		d7 = n7;
		d8 = n8;
		d9 = n9;
		d10 = n10;
	}
	time = (clock() - time1) / CLOCKS_PER_SEC;
	return time;
}

double empty5()
{
	double e1, e2, e3, e4, e5, e6, e7, e8, e9, e10;
	long double time;
	clock_t time1 = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		e1 = j11;
		e2 = j2;
		e3 = j3;
		e4 = j4;
		e5 = j5;
		e6 = j6;
		e7 = j7;
		e8 = j8;
		e9 = j9;
		e10 = j10;
	}
	time = (clock() - time1) / CLOCKS_PER_SEC;
	return time;
}



double char_plus()
{
	char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		a1 = x1 + y11;
		a2 = x2 + y2;
		a3 = x3 + y3;
		a4 = x4 + y4;
		a5 = x5 + y5;
		a6 = x6 + y6;
		a7 = x7 + y7;
		a8 = x8 + y8;
		a9 = x9 + y9;
		a10 = x10 + y10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec1 = (float)FLOAT_ITER / (time - empty1());
	op_per_sec[0] = op_per_sec1;
	return op_per_sec1;
}

double char_minus()
{
	char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		a1 = x1 - y11;
		a2 = x2 - y2;
		a3 = x3 - y3;
		a4 = x4 - y4;
		a5 = x5 - y5;
		a6 = x6 - y6;
		a7 = x7 - y7;
		a8 = x8 - y8;
		a9 = x9 - y9;
		a10 = x10 - y10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec2 = (float)FLOAT_ITER / (time - empty1());
	op_per_sec[1] = op_per_sec2;
	return op_per_sec2;
}

double char_multiplication()
{
	char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		a1 = x1 * y11;
		a2 = x2 * y2;
		a3 = x3 * y3;
		a4 = x4 * y4;
		a5 = x5 * y5;
		a6 = x6 * y6;
		a7 = x7 * y7;
		a8 = x8 * y8;
		a9 = x9 * y9;
		a10 = x10 * y10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	//float op_per_sec3 = FLOAT_ITER / ((float)time / CLOCKS_PER_SEC) - empty();
	float op_per_sec3 = (float)FLOAT_ITER / (time - empty1());
	op_per_sec[2] = op_per_sec3;
	return op_per_sec3;
}

double char_division()
{
	char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		a1 = x1 / y11;
		a2 = x2 / y2;
		a3 = x3 / y3;
		a4 = x4 / y4;
		a5 = x5 / y5;
		a6 = x6 / y6;
		a7 = x7 / y7;
		a8 = x8 / y8;
		a9 = x9 / y9;
		a10 = x10 / y10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec4 = (float)FLOAT_ITER / (time - empty1());
	op_per_sec[3] = op_per_sec4;
	return op_per_sec4;
}






double int_plus()
{
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		b1 = z1 + u1;
		b2 = z2 + u2;
		b3 = z3 + u3;
		b4 = z4 + u4;
		b5 = z5 + u5;
		b6 = z6 + u6;
		b7 = z7 + u7;
		b8 = z8 + u8;
		b9 = z9 + u9;
		b10 = z10 + u10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec5 = (float)FLOAT_ITER / (time - empty2());
	op_per_sec[4] = op_per_sec5;
	return op_per_sec5;
}

double int_minus()
{
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		b1 = z1 - u1;
		b2 = z2 - u2;
		b3 = z3 - u3;
		b4 = z4 - u4;
		b5 = z5 - u5;
		b6 = z6 - u6;
		b7 = z7 - u7;
		b8 = z8 - u8;
		b9 = z9 - u9;
		b10 = z10 - u10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec6 = (float)FLOAT_ITER / (time - empty2());
	op_per_sec[5] = op_per_sec6;
	return op_per_sec6;
}

double int_multiplication()
{
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		b1 = z1 * u1;
		b2 = z2 * u2;
		b3 = z3 * u3;
		b4 = z4 * u4;
		b5 = z5 * u5;
		b6 = z6 * u6;
		b7 = z7 * u7;
		b8 = z8 * u8;
		b9 = z9 * u9;
		b10 = z10 * u10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec7 = (float)FLOAT_ITER / (time - empty2());
	op_per_sec[6] = op_per_sec7;
	return op_per_sec7;
}

double int_division()
{
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		b1 = z1 / u1;
		b2 = z2 / u2;
		b3 = z3 / u3;
		b4 = z4 / u4;
		b5 = z5 / u5;
		b6 = z6 / u6;
		b7 = z7 / u7;
		b8 = z8 / u8;
		b9 = z9 / u9;
		b10 = z10 / u10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec8 = (float)FLOAT_ITER / (time - empty2());
	op_per_sec[7] = op_per_sec8;
	return op_per_sec8;
}






double long_plus()
{
	long c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		c1 = v1 + h1;
		c2 = v2 + h2;
		c3 = v3 + h3;
		c4 = v4 + h4;
		c5 = v5 + h5;
		c6 = v6 + h6;
		c7 = v7 + h7;
		c8 = v8 + h8;
		c9 = v9 + h9;
		c10 = v10 + h10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec9 = (float)FLOAT_ITER / (time - empty3());
	op_per_sec[8] = op_per_sec9;
	return op_per_sec9;
}

double long_minus()
{
	long c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		c1 = v1 - h1;
		c2 = v2 - h2;
		c3 = v3 - h3;
		c4 = v4 - h4;
		c5 = v5 - h5;
		c6 = v6 - h6;
		c7 = v7 - h7;
		c8 = v8 - h8;
		c9 = v9 - h9;
		c10 = v10 - h10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec10 = (float)FLOAT_ITER / (time - empty3());
	op_per_sec[9] = op_per_sec10;
	return op_per_sec10;
}

double long_multiplication()
{
	long c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		c1 = v1 * h1;
		c2 = v2 * h2;
		c3 = v3 * h3;
		c4 = v4 * h4;
		c5 = v5 * h5;
		c6 = v6 * h6;
		c7 = v7 * h7;
		c8 = v8 * h8;
		c9 = v9 * h9;
		c10 = v10 * h10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec11 = (float)FLOAT_ITER / (time - empty3());
	op_per_sec[10] = op_per_sec11;
	return op_per_sec11;
}

double long_division()
{
	long c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		c1 = v1 / h1;
		c2 = v2 / h2;
		c3 = v3 / h3;
		c4 = v4 / h4;
		c5 = v5 / h5;
		c6 = v6 / h6;
		c7 = v7 / h7;
		c8 = v8 / h8;
		c9 = v9 / h9;
		c10 = v10 / h10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec12 = (float)FLOAT_ITER / (time - empty3());
	op_per_sec[11] = op_per_sec12;
	return op_per_sec12;
}






double float_plus()
{
	float d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		d1 = n1 + m1;
		d2 = n2 + m2;
		d3 = n3 + m3;
		d4 = n4 + m4;
		d5 = n5 + m5;
		d6 = n6 + m6;
		d7 = n7 + m7;
		d8 = n8 + m8;
		d9 = n9 + m9;
		d10 = n10 + m10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec13 = (float)FLOAT_ITER / (time - empty4());
	op_per_sec[12] = op_per_sec13;
	return op_per_sec13;
}

double float_minus()
{
	float d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		d1 = n1 - m1;
		d2 = n2 - m2;
		d3 = n3 - m3;
		d4 = n4 - m4;
		d5 = n5 - m5;
		d6 = n6 - m6;
		d7 = n7 - m7;
		d8 = n8 - m8;
		d9 = n9 - m9;
		d10 = n10 - m10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec14 = (float)FLOAT_ITER / (time - empty4());
	op_per_sec[13] = op_per_sec14;
	return op_per_sec14;
}

double float_multiplication()
{
	float d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		d1 = n1 * m1;
		d2 = n2 * m2;
		d3 = n3 * m3;
		d4 = n4 * m4;
		d5 = n5 * m5;
		d6 = n6 * m6;
		d7 = n7 * m7;
		d8 = n8 * m8;
		d9 = n9 * m9;
		d10 = n10 * m10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec15 = (float)FLOAT_ITER / (time - empty4());
	op_per_sec[14] = op_per_sec15;
	return op_per_sec15;
}

double float_division()
{
	float d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		d1 = n1 / m1;
		d2 = n2 / m2;
		d3 = n3 / m3;
		d4 = n4 / m4;
		d5 = n5 / m5;
		d6 = n6 / m6;
		d7 = n7 / m7;
		d8 = n8 / m8;
		d9 = n9 / m9;
		d10 = n10 / m10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec16 = (float)FLOAT_ITER / (time - empty4());
	op_per_sec[15] = op_per_sec16;
	return op_per_sec16;
}






double double_plus()
{
	double e1, e2, e3, e4, e5, e6, e7, e8, e9, e10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		e1 = j11 + k1;
		e2 = j2 + k2;
		e3 = j3 + k3;
		e4 = j4 + k4;
		e5 = j5 + k5;
		e6 = j6 + k6;
		e7 = j7 + k7;
		e8 = j8 + k8;
		e9 = j9 + k9;
		e10 = j10 + k10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec17 = (float)FLOAT_ITER / (time - empty5());
	op_per_sec[16] = op_per_sec17;
	return op_per_sec17;
}

double double_minus()
{
	double e1, e2, e3, e4, e5, e6, e7, e8, e9, e10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		e1 = j11 - k1;
		e2 = j2 - k2;
		e3 = j3 - k3;
		e4 = j4 - k4;
		e5 = j5 - k5;
		e6 = j6 - k6;
		e7 = j7 - k7;
		e8 = j8 - k8;
		e9 = j9 - k9;
		e10 =j10 - k10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec18 = (float)FLOAT_ITER / (time - empty5());
	op_per_sec[17] = op_per_sec18;
	return op_per_sec18;
}

double double_multiplication()
{
	double e1, e2, e3, e4, e5, e6, e7, e8, e9, e10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		e1 = j11 - k1;
		e2 = j2 - k2;
		e3 = j3 - k3;
		e4 = j4 - k4;
		e5 = j5 - k5;
		e6 = j6 - k6;
		e7 = j7 - k7;
		e8 = j8 - k8;
		e9 = j9 - k9;
		e10 = j10 - k10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec19 = (float)FLOAT_ITER / (time - empty5());
	op_per_sec[18] = op_per_sec19;
	return op_per_sec19;
}

double double_division()
{
	double e1, e2, e3, e4, e5, e6, e7, e8, e9, e10;
	long double time = clock();
	for (long i = 0; i < FLOAT_ITER; i++)
	{
		e1 = j11 - k1;
		e2 = j2 - k2;
		e3 = j3 - k3;
		e4 = j4 - k4;
		e5 = j5 - k5;
		e6 = j6 - k6;
		e7 = j7 - k7;
		e8 = j8 - k8;
		e9 = j9 - k9;
		e10 = j10 - k10;
	}
	time = (clock() - time) / CLOCKS_PER_SEC;
	float op_per_sec20 = (float)FLOAT_ITER / (time - empty5());
	op_per_sec[19] = op_per_sec20;
	return op_per_sec20;
}


double max()
{
	double maximum = op_per_sec[0];
	for (int i = 0; i < 19; i++)
	{
		if (op_per_sec[i] > maximum)
		{
			maximum = op_per_sec[i];
		}
	}
	return maximum;
}


int main()
{
	empty1();
	empty2();
	empty3();
	empty4();
	empty5();
	float p1 = char_plus();
	float p2 = char_minus();
	float p3 = char_multiplication();
	float p4 = char_division();
	float p5 = int_plus();
	float p6 = int_minus();
	float p7 = int_multiplication();
	float p8 = int_division();
	float p9 = long_plus();
	float p10 = long_minus();
	float p11 = long_multiplication();
	float p12 = long_division();
	float p13 = float_plus();
	float p14 = float_minus();
	float p15 = float_multiplication();
	float p16 = float_division();
	float p17 = double_plus();
	float p18 = double_minus();
	float p19 = double_multiplication();
	float p20 = double_division();
	float m = max();
	cout << '+' << "  " << "char  " << "  " << p1 << "   " << (int)(p1 * 100 / m) << "%" << "   ";
	for (int j = 0; j < (int)(p1 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
    cout << '-' << "  " << "char  " << "  " << p2 << "   " << (int)(p2 * 100 / m) << "%" << "   ";
	for (int j = 0; j < (int)(p2 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '*' << "  " << "char  " << "  " << p3 << "   " << (int)(p3 * 100 / m) << "%" << "   ";
	for (int j = 0; j < (int)(p3 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '/' << "  " << "char  " << "  " << p4 << "   " << (int)(p4 * 100 / m) << "%" << "   ";
	for (int j = 0; j < (int)(p4 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
																					  
	cout << '+' << "  " << "int   " << "  " << p5 << "   " << (int)(p5 * 100 / m) << "%" << "   ";
	for (int j = 0; j < (int)(p5 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '-' << "  " << "int   " << "  " << p6 << "   " << (int)(p6 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p6 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '*' << "  " << "int   " << "  " << p7 << "   " << (int)(p7 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p7 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '/' << "  " << "int   " << "  " << p8 << "   " << (int)(p8 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p8 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;

	cout << '+' << "  " << "long  " << "  " << p9 << "   " << (int)(p9 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p9 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '-' << "  " << "long  " << "  " << p10 << "   " << (int)(p10 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p10 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '*' << "  " << "long  " << "  " << p11 << "   " << (int)(p11 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p11 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '/' << "  " << "long  " << "  " << p12 << "   " << (int)(p12 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p12 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
																						
	cout << '+' << "  " << "float " << "  " << p13 << "   " << (int)(p13 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p13 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '-' << "  " << "float " << "  " << p14 << "   " << (int)(p14 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p14 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl ;
	cout << '*' << "  " << "float " << "  " << p15 << "   " << (int)(p15 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p15 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl ;
	cout << '/' << "  " << "float " << "  " << p16 << "   " << (int)(p16 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p16 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl ;
																						
	cout << '+' << "  " << "double" << "  " << p17 << "   " << (int)(p17 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p17 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl ;
	cout << '-' << "  " << "double" << "  " << p18 << "   " << (int)(p18 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p18 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl;
	cout << '*' << "  " << "double" << "  " << p19 << "   " << (int)(p19 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p19 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl ;
	cout << '/' << "  " << "double" << "  " << p20 << "   " << (int)(p20 * 100 / max()) << "%" << "   ";
	for (int j = 0; j < (int)(p20 * 100 / m); j++)
	{
		cout << "X";
	}
	cout << endl ;
}