#ifndef B2D_CONVERTERS_H
#define B2D_CONVERTERS_H

#include <stdint.h>
#include <string>

using namespace std;

namespace b2d {

    // int
    int8_t ByteToInt8();
    int16_t TwoBytesToInt16(); 
    int32_t FourBytesToInt32();
    int64_t EightBytesToInt64();

    // uint
    uint8_t ByteToUint8();
    uint16_t TwoBytesToUint16(); 
    uint32_t FourBytesToUint32(); 
    uint64_t EightBytesToUint64();

    // Floats
    float FourBytesToFloat32();
    float EightBytesToFloat64();

    // Strings
    string BytesToString(); 


}

#endif
