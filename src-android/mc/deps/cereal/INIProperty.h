#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class INIProperty {
public:
    // INIProperty inner types define
    enum class PropertyType : int {
        UNKNOWN = 0,
        INT     = 1,
        FLOAT   = 2,
        BOOL    = 3,
        STRING  = 4,
        INVALID = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::cereal::INIProperty::PropertyType> mType;
    ::ll::TypedStorage<8, 24, std::string>                        name;
    ::ll::TypedStorage<8, 24, std::string>                        value;
    // NOLINTEND
};

} // namespace cereal
