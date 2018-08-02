#include "Board.h"

#include <random>

using namespace std;

void Board::setup() {
	// Set all numbers to red and fill the rest manually
	number_colors_.fill(NUMBER_COLOR_RED);
	
	// Set colors
	number_colors_[0] = NUMBER_COLOR_GREEN;
	number_colors_[2] = NUMBER_COLOR_BLACK;
	number_colors_[4] = NUMBER_COLOR_BLACK;
	number_colors_[6] = NUMBER_COLOR_BLACK;
	number_colors_[8] = NUMBER_COLOR_BLACK;
	number_colors_[10] = NUMBER_COLOR_BLACK;
	number_colors_[11] = NUMBER_COLOR_BLACK;
	number_colors_[13] = NUMBER_COLOR_BLACK;
	number_colors_[15] = NUMBER_COLOR_BLACK;
	number_colors_[17] = NUMBER_COLOR_BLACK;
	number_colors_[20] = NUMBER_COLOR_BLACK;
	number_colors_[22] = NUMBER_COLOR_BLACK;
	number_colors_[24] = NUMBER_COLOR_BLACK;
	number_colors_[26] = NUMBER_COLOR_BLACK;
	number_colors_[28] = NUMBER_COLOR_BLACK;
	number_colors_[29] = NUMBER_COLOR_BLACK;
	number_colors_[31] = NUMBER_COLOR_BLACK;
	number_colors_[33] = NUMBER_COLOR_BLACK;
	number_colors_[35] = NUMBER_COLOR_BLACK;
}

int Board::whichColor(int number) {
	return number_colors_.at(number);
}

// Returns which pocket the ball ended up in
int Board::run() {
	random_device device;
	mt19937 mt(device());
	uniform_int_distribution<int> distribution(0, NUMBER_OF_POCKETS - 1);
	
	return distribution(mt);
}