const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 409;
const signed char knockSamples[] = {
0, -4, -6, -5, -6, -8, -8, -4, -5, -9, -5, -3, 1, 6, 10, 16,
15, 14, 24, 25, 19, 25, 32, 23, 17, 19, 22, 17, 12, 12, 8, 8, 
10, 8, 1, -2, -1, -8, -11, -5, -14, -13, -5, -5, -11, -13, -3, -8, 
-8, 0, -6, -7, 5, 3, 10, 17, 12, 7, 1, 14, 18, 6, 6, 9, 
16, 10, -7, 11, 27, 7, 2, 15, 21, 15, 13, 18, 34, 30, 8, 19, 
7, 3, 33, 16, -10, 19, 7, -12, 12, 24, 3, -7, 6, 3, -7, -5, 
3, 4, 0, 0, 3, 8, -30, -5, 22, -11, -30, -20, -59, -60, -65, -75, 
-51, -65, -91, -91, -121, -124, -114, -125, -125, -125, -126, -127, -120, -109, -123, -125, 
-110, -107, -127, -93, -90, -96, -82, -113, -62, -72, -68, -13, -46, -71, -67, -55, 
-57, -90, -12, -12, -49, 18, -4, -21, -5, 25, 52, -16, 27, 98, 41, 46, 
59, 56, 71, 56, 11, 36, 53, 27, 34, 48, 35, 24, -1, 32, 32, -27, 
51, 41, 15, 32, 37, 34, 37, 32, 44, 82, 60, 78, 86, 77, 102, 102, 
91, 81, 101, 120, 122, 123, 122, 122, 122, 123, 121, 123, 118, 116, 122, 122, 
123, 121, 119, 123, 122, 121, 124, 112, 101, 117, 126, 100, 99, 112, 88, 77, 
73, 71, 47, 33, 38, 37, 38, 17, -3, -17, -14, 3, -15, -18, 12, 0, 
6, 17, 31, 28, 27, 56, 59, 55, 49, 54, 61, 73, 76, 63, 59, 80, 
75, 57, 78, 81, 54, 94, 95, 90, 90, 88, 90, 73, 81, 81, 61, 61, 
69, 63, 49, 49, 45, 10, 42, 30, 3, 19, 1, 3, 4, 2, 13, -1, 
-7, 3, -13, -13, 6, 24, 12, 12, 36, 38, 22, 24, 46, 42, 31, 33, 
41, 51, 54, 56, 58, 47, 38, 35, 41, 37, 28, 24, 18, 13, 9, 10, 
7, -10, -18, -10, -26, -29, -29, -53, -55, -65, -71, -69, -101, -112, -110, -125, 
-123, -124, -126, -125, -125, -119, -118, -123, -120, -113, -121, -112, -99, -103, -99, -93, 
-96, -83, -75, -75, -72, -59, -56, -55, -56, -58, -55, -58, -55, -55, -59, -56, 
-56, -51, -52, -57, -54, -67, -75, -69, -73, -69, -73, -77, -72, -81, -81, -80, 
-87, -89, -97, -86, -77, -87, -90, -80, -80, -78, -72, -64, -48, -50, -42, -35, 
-33, -22, -15, -8, -6, -7, -4, -2, 0, };
