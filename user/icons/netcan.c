/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.20.                           *
*        Compiled Feb 19 2013, 11:55:14                              *
*        (c) 1998 - 2013 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: can                                                   *
* Dimensions:  48 * 48                                               *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmcan;

static GUI_CONST_STORAGE unsigned long _accan[] = {
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF8000000, 0xCA3E3E3E, 0xA4474747, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 
        0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA3464646, 0xA6454545, 0xDB161616, 
        0xF2000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD5404040, 0x345C5C5C, 0x016B6B6B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 
        0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x007B7B7B, 0x00797979, 0x0A656565, 
        0x5C4D4D4D, 0xDA000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFD000000, 0x5A535353, 0x00838383, 0x00DCDCDC, 0x00F5F5F5, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 
        0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F6F6F6, 0x00F3F3F3, 0x00CBCBCB, 
        0x016E6E6E, 0x981F1F1F, 0xEC000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF5000000, 0x12616161, 0x00BBBBBB, 0x00F8F8F8, 0x00EFEFEF, 0x00D1D1D1, 0x00CDCDCD, 0x00CDCDCD, 0x00CDCDCD, 0x00CDCDCD, 0x00CDCDCD, 0x00CDCDCD, 0x00CDCDCD, 0x00CDCDCD, 0x00CECECE, 0x00CECECE, 
        0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00CECECE, 0x00D7D7D7, 0x00F5F5F5, 0x00F8F8F8, 
        0x00949494, 0x56454545, 0xDA000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00C7C7C7, 0x00F3F3F3, 0x00868686, 0x002F2D2C, 0x003D2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 
        0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x003E2B21, 0x00463830, 0x00505050, 0x00BFBFBF, 0x00F3F3F3, 
        0x00A5A5A5, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00C4C4C4, 0x00EBEBEB, 0x00535353, 0x00622D0F, 0x00944D26, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 
        0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A76C4C, 0x00A66B4A, 0x008B3E13, 0x00725544, 0x00A2A2A2, 0x00EDEDED, 
        0x00A3A3A3, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00C1C1C1, 0x00E5E5E5, 0x00535353, 0x006C2D0A, 0x00D3B7A7, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 
        0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DCC5B9, 0x00DBC4B7, 0x00DBC3B6, 0x00DAC1B4, 0x00D9C1B3, 0x00B7876D, 0x00835C46, 0x00A7A7A7, 0x00E7E7E7, 
        0x00A2A2A2, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00BFBFBF, 0x00E0E0E0, 0x00535353, 0x006C2D0A, 0x00D7BDAF, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 0x00DDC6BA, 
        0x00DCC5B9, 0x00DBC4B7, 0x00DBC3B6, 0x00DAC1B4, 0x00D9C1B3, 0x00D8BFB1, 0x00D8BEB0, 0x00D7BCAE, 0x00D6BCAD, 0x00D5BAAB, 0x00D5B9AA, 0x00D4B8A8, 0x00D3B7A7, 0x00D3B6A6, 0x00D2B4A4, 0x00D1B3A3, 0x00B5856A, 0x00926B55, 0x00ACACAC, 0x00E2E2E2, 
        0x00A0A0A0, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00BCBCBC, 0x00DADADA, 0x00535353, 0x006C2D0A, 0x00D6BBAC, 0x00DBC3B6, 0x00DAC1B4, 0x00D9C1B3, 0x00D8BFB1, 0x00D8BEB0, 0x00D7BCAE, 0x00D6BCAD, 0x00D5BAAB, 0x00D5B9AA, 
        0x00D4B8A8, 0x00D3B7A7, 0x00D3B6A6, 0x00D2B4A4, 0x00D1B3A3, 0x00D0B2A1, 0x00D0B1A0, 0x00CFAF9E, 0x00CEAF9D, 0x00CDAD9B, 0x00CDAC9A, 0x00CCAA98, 0x00CCAA97, 0x00CBA996, 0x00CAA794, 0x00CAA693, 0x00B17D60, 0x00A27B65, 0x00B1B1B1, 0x00DCDCDC, 
        0x009F9F9F, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00BBBBBB, 0x00D6D6D6, 0x00545454, 0x006E300D, 0x00D0B19F, 0x00D4B7A7, 0x00D3B6A5, 0x00D2B5A4, 0x00D2B3A2, 0x00D1B3A1, 0x00D0B19F, 0x00D0B09E, 0x00CFAF9C, 0x00CEAE9B, 
        0x00CDAC99, 0x00CDAB98, 0x00CCAB97, 0x00CBA995, 0x00CBA894, 0x00CAA792, 0x00C9A691, 0x00C8A48F, 0x00C8A38E, 0x00C7A38D, 0x00C7A28C, 0x00C6A08A, 0x00C69F89, 0x00C59E87, 0x00C49D86, 0x00C39B84, 0x00AD7757, 0x00B28B75, 0x00B8B8B8, 0x00D7D7D7, 
        0x009F9F9F, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00BBBBBB, 0x00D3D3D3, 0x00555555, 0x00723714, 0x00CBA893, 0x00CEAE9B, 0x00CDAD99, 0x00CDAC98, 0x00CCAA96, 0x00CCAA95, 0x00CBA893, 0x00CAA792, 0x00C9A690, 0x00C9A58F, 
        0x00C8A48E, 0x00C7A38D, 0x00C7A18B, 0x00C6A08A, 0x00C6A089, 0x00C59F88, 0x00C49D86, 0x00C49D85, 0x00C39B83, 0x00C29A82, 0x00C29A81, 0x00C1987F, 0x00C1977E, 0x00C0967C, 0x00BF957C, 0x00BE937A, 0x00AC7554, 0x00C39E88, 0x00BDBDBD, 0x00D4D4D4, 
        0x009F9F9F, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00BCBCBC, 0x00D0D0D0, 0x00565656, 0x00763D1B, 0x00C7A18A, 0x00C9A58F, 0x00C9A48E, 0x00C9A48D, 0x00C8A38C, 0x00C7A18A, 0x00C7A18A, 0x00C69F88, 0x00C59E87, 0x00C59E86, 
        0x00C49C84, 0x00C49C83, 0x00C39A81, 0x00C29980, 0x00C2987F, 0x00C1977E, 0x00C0967C, 0x00BD9075, 0x00B98A6D, 0x00B68466, 0x00B37F60, 0x00B07A59, 0x00AC7452, 0x00A96E4A, 0x00A66A45, 0x00A66A45, 0x009F5D35, 0x00CAA690, 0x00BEBEBE, 0x00D1D1D1, 
        0x00A1A1A1, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A626262, 0x00BCBCBC, 0x00CDCDCD, 0x00565656, 0x007B4421, 0x00C49B81, 0x00C69F86, 0x00C69E85, 0x00C59D84, 0x00C49C83, 0x00C49B81, 0x00C39A80, 0x00C2997E, 0x00C2987D, 0x00C1967C, 
        0x00C1967B, 0x00BF9377, 0x00B78566, 0x00AE7653, 0x00A66841, 0x009D5A2F, 0x00964E20, 0x00964D1F, 0x00964D1F, 0x00964D1F, 0x00964D1F, 0x00964D1F, 0x00964D1F, 0x00964D1F, 0x00964D1F, 0x00964D1F, 0x00964D1F, 0x00CDAA95, 0x00BDBDBD, 0x00CECECE, 
        0x00A1A1A1, 0x4D484848, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A636363, 0x00BDBDBD, 0x00CBCBCB, 0x00575757, 0x007F4A28, 0x00C1967A, 0x00C3997E, 0x00C2987D, 0x00C1977B, 0x00C1967A, 0x00C09578, 0x00C09478, 0x00BF9376, 0x00B68362, 0x00A96D46, 
        0x00A16036, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x009B5528, 0x00CFAE99, 0x00BFBFBF, 0x00CCCCCC, 
        0x00A2A2A2, 0x4D494949, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A696969, 0x00BEBEBE, 0x00C9C9C9, 0x005A5A5A, 0x0083512E, 0x00BF9172, 0x00C09475, 0x00C09375, 0x00BF9273, 0x00BF9172, 0x00BB8B6A, 0x00B07852, 0x00A56438, 0x00A15E30, 0x00A15E30, 
        0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00A15E30, 0x00D2B29D, 0x00C0C0C0, 0x00CACACA, 
        0x00A6A6A6, 0x4D4D4D4D, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A6F6F6F, 0x00BBBBBB, 0x00C1C1C1, 0x005C5C5C, 0x00885735, 0x00BE8E6D, 0x00BF9070, 0x00BE8F6E, 0x00B98562, 0x00AD7248, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 
        0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00A76639, 0x00D5B6A1, 0x00C2C2C2, 0x00C8C8C8, 
        0x00A8A8A8, 0x4D525252, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A757575, 0x00BEBEBE, 0x00C0C0C0, 0x005E5E5E, 0x008C5E3C, 0x00BD8C69, 0x00BD8D6A, 0x00B57E56, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 
        0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00AC6F42, 0x00D7BAA5, 0x00C3C3C3, 0x00C0C0C0, 
        0x00AAAAAA, 0x4D565656, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A7B7B7B, 0x00C2C2C2, 0x00C4C4C4, 0x00606060, 0x00906442, 0x00BC8963, 0x00B47B51, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 
        0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00B2774B, 0x00DABEA9, 0x00C6C6C6, 0x00C4C4C4, 
        0x00AEAEAE, 0x4D5A5A5A, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A818181, 0x00C5C5C5, 0x00C7C7C7, 0x00636363, 0x00956A48, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 
        0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00B88053, 0x00DDC2AD, 0x00C9C9C9, 0x00C7C7C7, 
        0x00B1B1B1, 0x4D5F5F5F, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A878787, 0x00C8C8C8, 0x00CBCBCB, 0x00656565, 0x0098704F, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 
        0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00BD885C, 0x00DFC6B1, 0x00CCCCCC, 0x00CBCBCB, 
        0x00B6B6B6, 0x4D636363, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A8C8C8C, 0x00CCCCCC, 0x00CFCFCF, 0x00676767, 0x009D7756, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 
        0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00C39165, 0x00E2CAB6, 0x00CFCFCF, 0x00CFCFCF, 
        0x00BBBBBB, 0x4D676767, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A929292, 0x00D1D1D1, 0x00D3D3D3, 0x006A6A6A, 0x00A17E5D, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 
        0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00C99A6E, 0x00E5CEBA, 0x00D2D2D2, 0x00D3D3D3, 
        0x00C0C0C0, 0x4D6B6B6B, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A999999, 0x00D4D4D4, 0x00D6D6D6, 0x006C6C6C, 0x00A68565, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 
        0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00CEA277, 0x00E7D2BE, 0x00D5D5D5, 0x00D6D6D6, 
        0x00C4C4C4, 0x4D717171, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A9F9F9F, 0x00D8D8D8, 0x00DADADA, 0x00757575, 0x009D846A, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 
        0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00D4AB7F, 0x00F0E3D4, 0x00D8D8D8, 0x00DADADA, 
        0x00C8C8C8, 0x4D757575, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF2000000, 0x0A9F9F9F, 0x00DCDCDC, 0x00DEDEDE, 0x00AEAEAE, 0x006D6D6D, 0x0087827D, 0x0097928D, 0x00A7A29D, 0x00B6B1AC, 0x00C6C1BC, 0x00D6D1CC, 0x00E6E1DC, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 
        0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F3EEE9, 0x00F5F1EE, 0x00F0F0F0, 0x00DBDBDB, 0x00DEDEDE, 
        0x00CBCBCB, 0x4D757575, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF3000000, 0x149B9B9B, 0x00D7D7D7, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 
        0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 0x00E1E1E1, 
        0x00C5C5C5, 0x566D6D6D, 0xD5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF7000000, 0x597C7C7C, 0x00BBBBBB, 0x00E3E3E3, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 
        0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00E5E5E5, 0x00DFDFDF, 
        0x03ABABAB, 0x94242424, 0xDE000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFE000000, 0xBC303030, 0x3A858585, 0x05A6A6A6, 0x00BBBBBB, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 
        0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00BABABA, 0x00B7B7B7, 0x149B9B9B, 
        0x5C666666, 0xB5000000, 0xF4000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF8000000, 0xCC000000, 0xA61D1D1D, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x883B3B3B, 
        0x06989898, 0x00B8B8B8, 0x00B7B7B7, 0x00B7B7B7, 0x00A3A3A3, 0x00888888, 0x05989898, 0x7F404040, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8B383838, 0x8D343434, 0xAA010101, 
        0xBE000000, 0xE9000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFE000000, 0xF6000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0x7B646464, 
        0x02C8C8C8, 0x00D3D3D3, 0x00D3D3D3, 0x00C7C7C7, 0x00A2A2A2, 0x00929292, 0x02B0B0B0, 0x545F5F5F, 0xD3000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xEF000000, 0xF3000000, 
        0xFB000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE7292929, 0x128B8B8B, 
        0x00D5D5D5, 0x00D7D7D7, 0x00CFCFCF, 0x00BDBDBD, 0x00AFAFAF, 0x00AFAFAF, 0x00B6B6B6, 0x0B8C8C8C, 0xA21B1B1B, 0xF5000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF3555555, 0x2A7B7B7B, 0x01DCDCDC, 
        0x00E6E6E6, 0x00E5E5E5, 0x00E4E4E4, 0x00E3E3E3, 0x00E4E4E4, 0x00E5E5E5, 0x00E6E6E6, 0x01DFDFDF, 0x177C7C7C, 0xBC1E1E1E, 0xFC000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF24F4F4F, 0x2D7E7E7E, 0x02D8D8D8, 0x00BFBFBF, 
        0x00A5A5A5, 0x009B9B9B, 0x009B9B9B, 0x009B9B9B, 0x009B9B9B, 0x009B9B9B, 0x00A8A8A8, 0x00C0C0C0, 0x02D9D9D9, 0x1B7E7E7E, 0xC0181818, 0xFB000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFA000000, 0x2F7D7D7D, 0x02EBEBEB, 0x00F1F1F1, 0x00E7E7E7, 
        0x00DDDDDD, 0x00BDBDBD, 0x00BABABA, 0x00B9B9B9, 0x00B9B9B9, 0x00BCBCBC, 0x00DEDEDE, 0x00E6E6E6, 0x00F0F0F0, 0x02EDEDED, 0x1E7D7D7D, 0xCA000000, 0xFE000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB6454545, 0x0ACCCCCC, 0x00FEFEFE, 0x00FEFEFE, 0x00FEFEFE, 
        0x00FEFEFE, 0x00D9D9D9, 0x00D7D7D7, 0x00D7D7D7, 0x00D7D7D7, 0x00D9D9D9, 0x00FEFEFE, 0x00FEFEFE, 0x00FEFEFE, 0x00FEFEFE, 0x08BFBFBF, 0x931E1E1E, 0xF3000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xDD161616, 0x30747474, 0x07D1D1D1, 0x02E6E6E6, 0x00E6E6E6, 
        0x00E1E1E1, 0x00C4C4C4, 0x00B6B6B6, 0x00B5B5B5, 0x00B8B8B8, 0x00C5C5C5, 0x00E2E2E2, 0x00E7E7E7, 0x03E5E5E5, 0x07C1C1C1, 0x39636363, 0xAE000000, 0xF6000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFA000000, 0xD1000000, 0x882F2F2F, 0x5B424242, 0x405A5A5A, 
        0x21797979, 0x00979797, 0x00A5A5A5, 0x00AFAFAF, 0x00A2A2A2, 0x058C8C8C, 0x2D737373, 0x44545454, 0x5C414141, 0x8A202020, 0xB9000000, 0xE3000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFE000000, 0xEE000000, 0xDD000000, 0xD4000000, 
        0xAB141414, 0x04A0A0A0, 0x00555555, 0x00404040, 0x008C8C8C, 0x265F5F5F, 0xC4000000, 0xCF000000, 0xD7000000, 0xE3000000, 0xFA000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xD7393939, 0x05D8D8D8, 0x00868686, 0x005D5D5D, 0x00C6C6C6, 0x348F8F8F, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC63A3A3A, 0xAF3D3D3D, 0xAF3D3D3D, 
        0x943C3C3C, 0x03D7D7D7, 0x00959595, 0x00606060, 0x00CACACA, 0x23898989, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xD53D3D3D, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xBB3C3C3C, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0x089B9B9B, 0x01E6E6E6, 0x01E6E6E6, 
        0x01DEDEDE, 0x00919191, 0x00929292, 0x00626262, 0x00ADADAD, 0x01ADADAD, 0x01E6E6E6, 0x01E6E6E6, 0x01E6E6E6, 0x12828282, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 
        0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xAF3D3D3D, 0xCB3B3B3B, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xE93A3A3A, 0x04AEAEAE, 0x02E7E7E7, 0x02E7E7E7, 0x02EAEAEA, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x02EBEBEB, 0x00A5A5A5, 0x00F3F3F3, 0x00F7F7F7, 
        0x00F7F7F7, 0x00F6F6F6, 0x00CACACA, 0x00B7B7B7, 0x00D7D7D7, 0x00EBEBEB, 0x00EBEBEB, 0x00EBEBEB, 0x00EBEBEB, 0x008F8F8F, 0x02E7E7E7, 0x02E7E7E7, 0x02E7E7E7, 0x02E9E9E9, 0x01EDEDED, 0x01EDEDED, 0x01EDEDED, 0x01EDEDED, 0x02EBEBEB, 0x02E7E7E7, 
        0x02E7E7E7, 0x02E7E7E7, 0x02E7E7E7, 0x02E7E7E7, 0x098B8B8B, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xE7404040, 0x0D575757, 0x00606060, 0x00636363, 0x00F2F2F2, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00626262, 0x00D4D4D4, 0x00F9F9F9, 
        0x00FFFFFF, 0x00FFFFFF, 0x007D7D7D, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x004E4E4E, 0x00606060, 0x00606060, 0x00606060, 0x00B5B5B5, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00E2E2E2, 0x00606060, 
        0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x0D515151, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xE7404040, 0x10555555, 0x00606060, 0x00606060, 0x00616161, 0x00626262, 0x00626262, 0x00626262, 0x00626262, 0x00626262, 0x00626262, 0x00626262, 0x00626262, 0x00626262, 0x00626262, 0x00626262, 0x00525252, 0x006C6C6C, 0x00767676, 
        0x007A7A7A, 0x007F7F7F, 0x00646464, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x004E4E4E, 0x00606060, 0x00606060, 0x00606060, 0x00616161, 0x00666666, 0x00666666, 0x00666666, 0x00666666, 0x00636363, 0x00606060, 
        0x00606060, 0x00606060, 0x00606060, 0x00606060, 0x0F4F4F4F, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xEC363636, 0x09898989, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x02818181, 0x00A9A9A9, 0x00A9A9A9, 
        0x00A9A9A9, 0x00A9A9A9, 0x00A9A9A9, 0x00AAAAAA, 0x00AAAAAA, 0x00AAAAAA, 0x00AAAAAA, 0x00AAAAAA, 0x00AAAAAA, 0x02747474, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 
        0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x13B6B6B6, 0x10777777, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xCF3A3A3A, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0x11939393, 0x0DDFDFDF, 0x0DDFDFDF, 
        0x0DDFDFDF, 0x0DE0E0E0, 0x0DE0E0E0, 0x0DE0E0E0, 0x0DE0E0E0, 0x0DE0E0E0, 0x0DE0E0E0, 0x0DE0E0E0, 0x0DE0E0E0, 0x1E7D7D7D, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 
        0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xD83B3B3B, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD6383838, 0xBF3C3C3C, 0xBF3C3C3C, 
        0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xBF3C3C3C, 0xDF383838, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 
        0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF
};

GUI_CONST_STORAGE GUI_BITMAP bmcan = {
  48, // xSize
  48, // ySize
  192, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)_accan,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMP8888
};

/*************************** End of file ****************************/
