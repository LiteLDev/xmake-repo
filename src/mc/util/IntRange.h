#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

struct IntRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> rangeMin;
    ::ll::TypedStorage<4, 4, int> rangeMax;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit IntRange(int);

    MCNAPI IntRange(int, int);

    MCNAPI int getValue(::IRandom&) const;

    MCNAPI int getValueInclusive(::IRandom&) const;

    MCNAPI bool isInRangeInclusive(int) const;

    MCNAPI bool parseJson(::Json::Value, int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int);

    MCNAPI void* $ctor(int, int);
#else // @header-generator platform
    MCAPI bool parseJson(::Json::Value node, int minDefault, int maxDefault);
#endif // @header-generator platform
    // NOLINTEND
};
