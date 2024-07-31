#pragma once

#define PG_VER	   0.2
#define PG_VERDATE "22/04/2022"

#define ALLCHARPOOLSIZE 94
#define CHARSANDNUMSPOOLSIZE 62
#define MAXPASSLEN   200

// All characters are represented by their corresponding ASCII value
//													    !   "   #   $   %   &   '   (   )   *   +   ,   -   .   /
static const wchar_t AllCharsPool[ALLCHARPOOLSIZE] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
//													    0   1   2   3   4   5   6   7   8   9
													   48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
//													    :   ;   <   =   >   ?   @
													   58, 59, 60, 61, 62, 63, 64,
//													    A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z
													   65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
//													    [   \   ]   ^   _   `
													   91, 92, 93, 94, 95, 96,
//													    a   b   c	d	 e	  f	   g	h	 i	  j	   k	l    m	  n	   o	p	 q	  r	   s	t	 u	  v	   w	x	 y	  z
												       97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
//													    {	 |	  }	   ~
													  123, 124, 125, 126};

//																 0	 1	 2	 3	 4	 5	 6	 7	 8	 9
static const wchar_t CharsAndNumsPool[CHARSANDNUMSPOOLSIZE] = { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
//																 A	 B	 C	 D	 E	 F	 G	 H	 I	 J	 K	 L	 M	 N	 O	 P	 Q	 R   S	 T	 U	 V	 W	 X	 Y	 Z
																65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
//																 a	 b	 c	  d	   e	f	 g	  h	   i	j	 k	  l    m	n	 o	  p	   q	r	 s	  t	   u	v	 w	  x	   y	z
																97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
