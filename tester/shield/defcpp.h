/*

@file defcpp.h
There should be a newline at end of this file.
Put the message displayed to user after // in each line
Please note:
Lots of "define"s that work in C, don't work correctly in C++.

e.g. If you want to disallow goto, add this line:
#define goto errorNo4    //Goto is not allowd

*/

#define fork errorNo1        //Fork is not allowed
#define clone errorNo2       //Clone is not allowed
#define sleep errorNo3       //Sleep is not allowed
#define goto errorNo4        //Goto is not allowed (Surprise!)
#define string errorNo5      //String(STL) is not allowed
#define vector errorNo6      //Vector(STL) is not allowed
#define list errorNo7        //List(STL) is not allowed
#define stack errorNo8       //Stack(STL) is not allowed
#define strcpy errorNo9      //strcpy is not allowed
#define strncpy errorNo10    //strncpy is not allowed
#define strcat errorNo11     //strcat is not allowed
#define strchr errorNo12     //strchr is not allowed
#define strcmp errorNo13     //strcmp is not allowed
#define strnicmp errorNo14   //strnicmp is not allowed
#define strcspn errorNo15    //strcspn is not allowed
#define strdup errorNo16     //strdup is not allowed
#define stricmp errorNo17    //stricmp is not allowed
#define strerror errorNo18   //strerror is not allowed
#define strcmpi errorNo19    //strcmpi is not allowed
#define strncmp errorNo20    //strncmp is not allowed
#define strncpy errorNo21    //strncpy is not allowed
#define strnicmp errorNo22   //strnicmp is not allowed
#define strnset errorNo23    //strnset is not allowed
#define strpbrk errorNo24    //strpbrk is not allowed
#define strrchr errorNo25    //strrchr is not allowed
#define strrev errorNo26     //strrev is not allowed
#define strspn errorNo27     //strspn is not allowed
#define strstr errorNo28     //strstr is not allowed
#define strtod errorNo29     //strtod is not allowed
#define strtok errorNo30     //strtok is not allowed
#define strtol errorNo31     //strtol is not allowed
#define strupr errorNo32     //strupr is not allowed
#define swab errorNo33       //swab is not allowed
