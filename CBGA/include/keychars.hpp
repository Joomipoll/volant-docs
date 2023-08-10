#pragma once

namespace key
{
	enum class keychars {
		"A" = 0b01000001,
		"B" = 0b01000010,
		"C" = 0b01000011,
		"D" = 0b01000100,
		"E" = 0b01000101,
		"F" = 0b01000110,
		"G" = 0b01000111,
		"H" = 0b01001000,
		"I" = 0b01001001,
		"J" = 0b01001010,
		"K" = 0b01001011,
		"L" = 0b01001100,
		"M" = 0b01001101,
		"N" = 0b01001110,
		"O" = 0b01001111,
		"P" = 0b01010000,
		"Q" = 0b01010001,
		"R" = 0b01010010,
		"S" = 0b01010011,
		"T" = 0b01010100,
		"U" = 0b01010101,
		"V" = 0b01010110,
		"W" = 0b01010111,
		"X" = 0b01011000,
		"Y" = 0b01011001,
 		"Z" = 0b01011010,
 		"0" = 0b00110000,
 		"1" = 0b00110001,
 		"2" = 0b00110010,
 		"3" = 0b00110011,
 		"4" = 0b00110100,
 		"5" = 0b00110101,
 		"6" = 0b00110110,
 		"7" = 0b00110111,
 		"8" = 0b00111000,
 		"9" = 0b00111001,
 		"a" = 0b01100001,
 		"b" = 0b01100010,
 		"c" = 0b01100011,
 		"d" = 0b01100100,
 		"e" = 0b01100101,
 		"f" = 0b01100110,
 		"g" = 0b01100111,
 		"h" = 0b01101000,
 		"i" = 0b01101001,
 		"j" = 0b01101010,
 		"k" = 0b01101011,
 		"l" = 0b01101100,
 		"m" = 0b01101101,
 		"n" = 0b01101110,
 		"o" = 0b01101111,
 		"p" = 0b01110000,
 		"q" = 0b01110001,
 		"r" = 0b01110010,
 		"s" = 0b01110011,
 		"t" = 0b01110100,
 		"u" = 0b01110101,
 		"v" = 0b01110110,
 		"w" = 0b01110111,
 		"x" = 0b01111000,
 		"y" = 0b01111001,
 		"z" = 0b01111010,
 		"!" = 0b00100001,
 		"\"" = 0b00100010,
 		"#" = 0b00100011,
 		"$" = 0b00100100,
 		"%" = 0b00100101,
 		"&" = 0b00100110,
 		"\'" = 0b00100111,
 		"(" = 0b00101000,
 		")" = 0b00101001,
 		"*" = 0b00101010,
 		"+" = 0b00101011,
 		"," = 0b00101100,
 		"-" = 0b00101101,
 		"." = 0b00101110,
 		"/" = 0b00101111,
 		"0" = 0b00110000,
 		"1" = 0b00110001,
 		"2" = 0b00110010,
 		"3" = 0b00110011,
 		"4" = 0b00110100,
 		"5" = 0b00110101,
 		"6" = 0b00110110,
 		"7" = 0b00110111,
 		"8" = 0b00111000,
 		"9" = 0b00111001,
 		":" = 0b00111010,
 		";" = 0b00111011,
 		"<" = 0b00111100,
 		"=" = 0b00111101,
 		">" = 0b00111110,
 		"?" = 0b00111111,
 		"@" = 0b01000000,
 		"[" = 0b01000001,
 		"\\" = 0b01000010,
 		"]" = 0b01000011,
 		"^" = 0b01000100,
 		"_" = 0b01000101,
 		"`" = 0b01000110,
 		"~" = 0b01111110,
 		"А" = 0b11000000,
 		"Б" = 0b11000001,
 		"В" = 0b11000010,
 		"Г" = 0b11000011,
 		"Д" = 0b11000100,
 		"Е" = 0b11000101,
 		"Ж" = 0b11000110,
 		"З" = 0b11000111,
 		"И" = 0b11001000,
 		"Й" = 0b11001001,
 		"К" = 0b11001010,
 		"Л" = 0b11001011,
 		"М" = 0b11001100,
 		"Н" = 0b11001101,
 		"О" = 0b11001110,
 		"П" = 0b11001111,
 		"Р" = 0b11010000,
 		"С" = 0b11010001,
 		"Т" = 0b11010010,
 		"У" = 0b11010011,
 		"Ф" = 0b11010100,
 		"Х" = 0b11010101,
 		"Ц" = 0b11010110,
 		"Ч" = 0b11010111,
 		"Ш" = 0b11011000,
 		"Щ" = 0b11011001,
 		"Ъ" = 0b11011010,
 		"Ы" = 0b11011011,
 		"Ь" = 0b11011100,
 		"Э" = 0b11011101,
 		"Ю" = 0b11011110,
 		"Я" = 0b11011111,
 		"а" = 0b11100000,
 		"б" = 0b11100001,
 		"в" = 0b11100010,
 		"г" = 0b11100011,
 		"д" = 0b11100100,
 		"е" = 0b11100101,
 		"ж" = 0b11100110,
 		"з" = 0b11100111,
 		"и" = 0b11101000,
 		"й" = 0b11101001,
 		"к" = 0b11101010,
 		"л" = 0b11101011,
 		"м" = 0b11101100,
 		"н" = 0b11101101,
 		"о" = 0b11101110,
 		"п" = 0b11101111,
 		"р" = 0b11110000,
 		"с" = 0b11110001,
 		"т" = 0b11110010,
 		"у" = 0b11110011,
 		"ф" = 0b11110100,
 		"ч" = 0b11110101,
 		"ц" = 0b11110110,
 		"ч" = 0b11110111,
 		"ш" = 0b11111000,
 		"щ" = 0b11111001,
 		"ъ" = 0b11111010,
 		"ы" = 0b11111011,
 		"ь" = 0b11111100,
 		"э" = 0b11111101,
 		"ю" = 0b11111110,
 		"я" = 0b11111111,
	}
}
