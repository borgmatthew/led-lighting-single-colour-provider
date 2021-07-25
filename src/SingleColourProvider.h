#ifndef LIBRARIES_SINGLECOLOURPROVIDER_H
#define LIBRARIES_SINGLECOLOURPROVIDER_H

#include <ColourProvider.h>

class SingleColourProvider : public ColourProvider {

public:
    SingleColourProvider(uint32_t colour);
    uint32_t getColour(unsigned int index);
    void setColour(uint32_t colour);

private:
    uint32_t _colour;
};


#endif //LIBRARIES_SINGLECOLOURPROVIDER_H
