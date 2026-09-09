#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct DynamicPropertyDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::optional<std::variant<double, float, bool, std::string, Vec3>>> mDefaultValue;
    ::ll::TypedStorage<8, 32, std::variant<double, float, bool, std::string, Vec3>>                mTypeValue;
    ::ll::TypedStorage<8, 8, ulong>                                                                mMaxStringLength;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertyDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DynamicPropertyDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
