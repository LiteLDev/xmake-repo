#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class INIProperty {
public:
    // INIProperty inner types define
    enum class PropertyType : int {
#if defined(LL_PLAT_A) // @header-generator platform
        UNKNOWN = 0,
        INT     = 1,
        FLOAT   = 2,
        BOOL    = 3,
        STRING  = 4,
        INVALID = 5,
#else // @header-generator platform
        Unknown = 0,
        Int     = 1,
        Float   = 2,
        Bool    = 3,
        String  = 4,
        Invalid = 5,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::cereal::INIProperty::PropertyType> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                        name;
    ::ll::TypedStorage<8, 24, std::string>                        value;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                      name;
    ::ll::TypedStorage<8, 32, ::std::string>                      value;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal
