/*
MIT License

Copyright  (c) 2009-2019 easyice

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef _GMDEFS_H
#define _GMDEFS_H



typedef unsigned char  byte;     //!< byte type definition
typedef unsigned char  uint8;    //!< type definition for unsigned char (same as byte, 8 bits)
typedef unsigned short uint16;   //!< type definition for unsigned short (16 bits)
typedef unsigned int   uint32;   //!< type definition for unsigned int (32 bits)

typedef          char  int8;
typedef          short int16;
typedef          int   int32;

#ifdef WIN32
  typedef __int64   int64;
# define INT64_MIN        (-9223372036854775807i64 - 1i64)
#else
  typedef long long int64;
# define INT64_MIN        (-9223372036854775807LL - 1LL)
#endif







#endif

