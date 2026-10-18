#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ElementType : int {
    Boolean           = 0,
    Int8              = 1,
    UInt8             = 2,
    Int16             = 3,
    UInt16            = 4,
    Int32             = 5,
    UInt32            = 6,
    Int64             = 7,
    UInt64            = 8,
    Float             = 9,
    Double            = 10,
    String            = 11,
    Color             = 12,
    Array             = 13,
    Map               = 14,
    Pair              = 15,
    UserType          = 16,
    PolymorphUserType = 17,
};
#else // @header-generator platform
enum class ElementType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
