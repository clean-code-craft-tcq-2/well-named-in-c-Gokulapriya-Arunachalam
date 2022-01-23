#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
const int MAX_COLORPAIR_NAME_CHARS;
#define MaxPossibleColorsInMajorOrMinor (5u)

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const char* MajorColorNames[5];
const char* MinorColorNames[5];

void Print_Color_coding(void);
void Print_ColorPairwithColorCode(int codenum, char *Majorcolor , char *Minorcolor);

void testNumberToPair( int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber( enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
