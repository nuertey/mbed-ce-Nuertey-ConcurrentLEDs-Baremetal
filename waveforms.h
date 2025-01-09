#pragma once

constexpr unsigned int NUMBER_OF_SINUSOID_SAMPLES   = 256;
constexpr unsigned int NUMBER_OF_TRIANGULAR_SAMPLES = 200;

// 12-bit Nuertey Odzeyem manually calculated Sine Wave values :
// =(SIN(K2*2*PI()/255)+1)*((100+1)/2)
const float  g_SineWaveform[NUMBER_OF_SINUSOID_SAMPLES] = {
    51.74,  52.99,  54.23,  55.47,  56.71,  57.94,  59.17,  60.39,  61.61,  62.82,  64.02,
    65.22,  66.40,  67.58,  68.74,  69.90,  71.04,  72.17,  73.29,  74.39,  75.48,  76.55,
    77.61,  78.65,  79.68,  80.68,  81.67,  82.64,  83.59,  84.52,  85.43,  86.32,  87.18,
    88.03,  88.85,  89.65,  90.42,  91.17,  91.90,  92.60,  93.27,  93.92,  94.54,  95.14,
    95.71,  96.25,  96.76,  97.24,  97.70,  98.13,  98.53,  98.90,  99.24,  99.55,  99.83,
   100.08, 100.30, 100.49, 100.65, 100.78, 100.88, 100.95, 100.99, 101.00, 100.98, 100.92,
   100.84, 100.72, 100.58, 100.40, 100.20,  99.96,  99.69,  99.40,  99.07,  98.72,  98.33,
    97.92,  97.48,  97.01,  96.51,  95.98,  95.43,  94.84,  94.23,  93.60,  92.94,  92.25,
    91.54,  90.80,  90.04,  89.25,  88.44,  87.61,  86.75,  85.88,  84.98,  84.06,  83.12,
    82.16,  81.18,  80.18,  79.17,  78.13,  77.08,  76.02,  74.94,  73.84,  72.73,  71.61,
    70.47,  69.32,  68.16,  66.99,  65.81,  64.62,  63.42,  62.21,  61.00,  59.78,  58.55,
    57.32,  56.09,  54.85,  53.61,  52.37,  51.12,  49.88,  48.63,  47.39,  46.15,  44.91,
    43.68,  42.45,  41.22,  40.00,  38.79,  37.58,  36.38,  35.19,  34.01,  32.84,  31.68,
    30.53,  29.39,  28.27,  27.16,  26.06,  24.98,  23.92,  22.87,  21.83,  20.82,  19.82,
    18.84,  17.88,  16.94,  16.02,  15.12,  14.25,  13.39,  12.56,  11.75,  10.96,  10.20,
     9.46,   8.75,   8.06,   7.40,   6.77,   6.16,   5.57,   5.02,   4.49,   3.99,   3.52,
     3.08,   2.67,   2.28,   1.93,   1.60,   1.31,   1.04,   0.80,   0.60,   0.42,   0.28,
     0.16,   0.08,   0.02,   0.00,   0.01,   0.05,   0.12,   0.22,   0.35,   0.51,   0.70,
     0.92,   1.17,   1.45,   1.76,   2.10,   2.47,   2.87,   3.30,   3.76,   4.24,   4.75,
     5.29,   5.86,   6.46,   7.08,   7.73,   8.40,   9.10,   9.83,  10.58,  11.35,  12.15,
    12.97,  13.82,  14.68,  15.57,  16.48,  17.41,  18.36,  19.33,  20.32,  21.32,  22.35,
    23.39,  24.45,  25.52,  26.61,  27.71,  28.83,  29.96,  31.10,  32.26,  33.42,  34.60,
    35.78,  36.98,  38.18,  39.39,  40.61,  41.83,  43.06,  44.29,  45.53,  46.77,  48.01,
    49.26,  50.50,  51.74};

const float  g_TriangleWaveform[NUMBER_OF_TRIANGULAR_SAMPLES] = {
0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15,  16, 17, 18, 19, 20,
21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36,  37, 38, 39, 40, 41,
42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57,  58, 59, 60, 61, 62,
63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78,  79, 80, 81, 82, 83,
84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 99, 98, 97, 96,
95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80,  79, 78, 77, 76, 75,
74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59,  58, 57, 56, 55, 54,
53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38,  37, 36, 35, 34, 33,
32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17,  16, 15, 14, 13, 12,
11, 10,  9,  8,  7,  6,  5,  4,  3,  2, 0};
