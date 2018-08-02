#pragma once
#ifndef BOARD_H
#define BOARD_H

#include <array>

#define NUMBER_OF_POCKETS	(37)

enum {
	NUMBER_COLOR_BLACK,
	NUMBER_COLOR_RED,
	NUMBER_COLOR_GREEN
};

class Board {
public:
	void setup();
	int run();
	
	int whichColor(int number);
	
private:
	std::array<int, NUMBER_OF_POCKETS> number_colors_;
};

#endif