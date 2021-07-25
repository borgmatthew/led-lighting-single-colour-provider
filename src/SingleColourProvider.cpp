#include "SingleColourProvider.h"

SingleColourProvider::SingleColourProvider(uint32_t colour) {
    _colour = colour;
}

uint32_t SingleColourProvider::getColour(unsigned int index) {
    return _colour;
}

void SingleColourProvider::setColour(uint32_t colour) {
    _colour = colour;
}