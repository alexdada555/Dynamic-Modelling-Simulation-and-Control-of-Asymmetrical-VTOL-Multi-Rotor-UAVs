#ifndef __MODEL_PARAMETERS_H__
#define __MODEL_PARAMETERS_H__

// System Dimensions
int n = 14;
int m = 6;
int p = 4;

double T = 0.01;

double w1 = 2.0529e+03;
double w4 = 2.0704e+03;

double u_e[6] = {176.1000,178.5000,177.2000,177.6000,202.2000,204.5000};

// System parameters
double A[14][14] = {{1, 0.01, 0, 0,       0, 0,    0, 0,      5.756e-08,      5.756e-08,      5.756e-08,     5.7562e-08,  5.7562e-08,  5.7562e-08},
                    {0, 1,    0, 0,       0, 0,    0, 0,      1.072e-05,      1.072e-05,      1.072e-05,     1.0724e-05,  1.0724e-05,  1.0724e-05},
                    {0, 0,    1, 0.01,    0, 0,    0, 0,      0.0001152,      0.000115,      -0.000115,     -0.0001,      0,           0},
                    {0, 0,    0, 1,       0, 0,    0, 0,      0.021458,       0.0214,        -0.021458,     -0.0214,      0,           0},
                    {0, 0,    0, 0,       1, 0.01, 0, 0,      -4.0162e-06,   -4.016e-06,     -4.016227e-06, -4.0162e-06,  8.0324e-06,  8.03245e-06},
                    {0, 0,    0, 0,       0, 1,    0, 0,      -0.000748,     -0.000748,      -0.000748,     -0.000748,    0.0015,      0.00149},
                    {0, 0,    0, 0,       0, 0,    1, 0.01,   -9.6098e-08,    9.60983e-08,    9.609833e-08, -9.6098e-08, -9.6098e-08,  9.60983e-08},
                    {0, 0,    0, 0,       0, 0,    0, 1,      -1.79e-05,      1.7904e-05,     1.790439e-05, -1.7904e-05, -1.7904e-05,  1.7904e-05},
                    {0, 0,    0, 0,       0, 0,    0, 0,      0.6426,         0,              0,             0,           0,           0},
                    {0, 0,    0, 0,       0, 0,    0, 0,      0,              0.6426,         0,             0,           0,           0},
                    {0, 0,    0, 0,       0, 0,    0, 0,      0,              0,              0.6426,        0,           0,           0},
                    {0, 0,    0, 0,       0, 0,    0, 0,      0,              0,              0,             0.6426,      0,           0},
                    {0, 0,    0, 0,       0, 0,    0, 0,      0,              0,              0,             0,           0.6426,      0},
                    {0, 0,    0, 0,       0, 0,    0, 0,      0,              0,              0,             0,           0,           0.6426}};
                  
double B[14][6] = {{1.024e-07,   1.02444e-07,  1.02445e-07,     1.02444e-07,  1.02444e-07, 1.024e-07},
                    {2.967e-05,   2.9673e-05,   2.96732e-05,     2.9673e-05,   2.967e-05,   2.967e-05},
                    {0.0002049,   0.000205,    -0.000205,       -0.0002,       0,           0},
                    {0.05937,     0.05937,     -0.059,          -0.0593,       0,           0},
                    {-7.14778e-06,-7.14778e-06, -7.147e-06,      -7.1477e-06,   1.42955e-05, 1.429e-05},
                    {-0.00207,    -0.00207,     -0.00207,        -0.00207,      0.00414,     0.0041},
                    {-1.7103e-07,  1.7103e-07,   1.7103e-07,     -1.71028e-07, -1.71028e-07, 1.7102e-07},
                    {-4.9539e-05,  4.954e-05,    4.9539e-05,     -4.953e-05,   -4.953e-05,   4.95e-05},
                    { 4.16618,     0,        0,        0,     0,        0},
                    { 0,           4.166,    0,        0,     0,        0},
                    { 0,           0,        4.1661,   0,     0,        0},
                    { 0,           0,        0,        4.166, 0,        0},
                    { 0,           0,        0,        0,     4.166,    0},
                    { 0,           0,        0,        0,     0,        4.166}};
                  
double C[4+2][14] = {{1,0,0,0,0,0,0,0,0,0,0,0,0,0},
                     {0,0,1,0,0,0,0,0,0,0,0,0,0,0},
                     {0,0,0,0,1,0,0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,1,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0,1,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0,0,0,0,1,0,0}};
                  
double D[4][6] = {{0,0,0,0,0,0},
                  {0,0,0,0,0,0},
                  {0,0,0,0,0,0},
                  {0,0,0,0,0,0}};

double Rw[14][14] = {{0.5,0,0,0,0,0,0,0,0,0,0,0,0,0},
                     {0,0.5,0,0,0,0,0,0,0,0,0,0,0,0},
                     {0,0,0.01,0,0,0,0,0,0,0,0,0,0,0},
                     {0,0,0,0.1,0,0,0,0,0,0,0,0,0,0},
                     {0,0,0,0,0.01,0,0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0.01,0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0.01,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0.01,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0,1^(-9),0,0,0,0,0},
                     {0,0,0,0,0,0,0,0,0,1^(-9),0,0,0,0},
                     {0,0,0,0,0,0,0,0,0,0,1^(-9),0,0,0},
                     {0,0,0,0,0,0,0,0,0,0,0,1^(-9),0,0},
                     {0,0,0,0,0,0,0,0,0,0,0,0,1^(-9),0},
                     {0,0,0,0,0,0,0,0,0,0,0,0,0,1^(-9)}};

double Rv[4+2][4+2] = {{500,0,0,0,0,0},
                       {0,0.00001,0,0,0,0},
                       {0,0,0.00001,0,0,0},
                       {0,0,0,0.00001,0,0},
                       {0,0,0,0,0.00001,0},
                       {0,0,0,0,0,0.00001}};

double Kdt[6][14] = {{2.5172,0.7145,4.9839,0.2234,-3.2353,-0.1557,-1.8581,-1.0421,0,0,0,0,0,0},
                     {2.1882,0.6233,4.2999,0.1939,-2.7826,-0.1330,2.1449,1.2041,0,0,0,0,0,0},
                     {2.5451,0.7246,-5.0106,-0.2245,-3.2439,-0.1552,1.8345,1.0299,0,0,0,0,0,0},
                     {2.1489,0.6096,-4.2745,-0.1926,-2.7685,-0.1334,-2.1641,-1.2139,0,0,0,0,0,0},
                     {2.6495,0.7514,-0.0057,-0.0009,6.0841,0.2876,-2.1276,-1.1933,0,0,0,0,0,0},
                     {2.2999,0.6548,0.0019,0.0008,5.2360,0.2486,2.4624,1.3823,0,0,0,0,0,0}};

double Kidt[6][4] = {{0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0}};

#endif