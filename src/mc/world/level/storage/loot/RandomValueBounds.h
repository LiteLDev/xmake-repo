#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Random;
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class RandomValueBounds {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mMin;
    ::ll::TypedStorage<4, 4, float> mMax;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk98064d;
    ::ll::UntypedStorage<4, 4> mUnk79891e;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void deserialize(::Json::Value const&);

    MCNAPI float getFloat(::Random&) const;

    MCNAPI int getInt(::Random&) const;

    MCNAPI float getMax() const;

    MCNAPI float getMin() const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    RandomValueBounds& operator=(RandomValueBounds const&);
    RandomValueBounds(RandomValueBounds const&);
    RandomValueBounds();
#endif // @header-generator platform
};
