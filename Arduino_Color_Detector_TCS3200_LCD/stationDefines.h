// TCS230 or TCS3200 pins wiring to Arduino
#define s0 4
#define s1 5
#define s2 6
#define s3 7
#define outPin 8

boolean DEBUG = true;

// Variables
int red;
int grn;
int blu;
String color ="";
int count = 0;
long startTiming = 0;
long elapsedTime =0;
