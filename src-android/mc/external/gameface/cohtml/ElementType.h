#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum ElementType : uint {
    ET_Boolean           = 0,
    ET_Int8              = 1,
    ET_UInt8             = 2,
    ET_Int16             = 3,
    ET_UInt16            = 4,
    ET_Int32             = 5,
    ET_UInt32            = 6,
    ET_Int64             = 7,
    ET_UInt64            = 8,
    ET_Float             = 9,
    ET_Double            = 10,
    ET_String            = 11,
    ET_Color             = 12,
    ET_Array             = 13,
    ET_Map               = 14,
    ET_Pair              = 15,
    ET_UserType          = 16,
    ET_PolymorphUserType = 17,
};

}
