#include "Color_coding.h"

void Print_Color_coding(void){
    unsigned int MajorColor = 0, MinorColor = 0;
    unsigned int colorCode_order = 1;

    
    for(MajorColor = 0; MajorColor < MaxPossibleColorsInMajorOrMinor; MajorColor++)
    {
        for(MinorColor = 0; MinorColor < MaxPossibleColorsInMajorOrMinor; MinorColor++)
        {
             Print_ColorPairwithColorCode(colorCode_order,MajorColorNames[MajorColor],MinorColorNames[MinorColor]);
             colorCode_order++;
        }
    }
}

void Print_ColorPairwithColorCode(int codenum, char *Majorcolor , char *Minorcolor)
{
             printf("\n*********************");
             printf("\n Major Color : %s  ", Majorcolor);
             printf("\n Minor Color : %s  ", Minorcolor);
             printf("\n Color Code  : %d  ", codenum);
             printf("\n*********************");
}

