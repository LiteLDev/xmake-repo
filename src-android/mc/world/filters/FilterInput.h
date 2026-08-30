#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterParamType.h"

class FilterInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FilterParamType> mType;
    ::ll::TypedStorage<8, 24, std::string>      mString;
    ::ll::TypedStorage<4, 4, int>               mIValue;
    ::ll::TypedStorage<4, 4, float>             mFValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterInput();
};
