/*
 * MyString.cpp
 *
 *  Created on: 1. Apr 2018.
 *      Author: Arsen Torbarina
 */

#include "MyString.h"

size_t myStrlen(const char * str) {
	size_t len = 0;
	while (str[0]) {
		if (str[0] < 0x80) {
			len++; // count only chars below 0x80, because that is just a part of a multi-byte char
		}
		str++;
	}
	return len;
}

