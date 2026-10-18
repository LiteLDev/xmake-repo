#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

struct FloatRange {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> rangeMin;
    ::ll::TypedStorage<4, 4, float> rangeMax;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkaba715;
    ::ll::UntypedStorage<4, 4> mUnkcfba95;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FloatRange& operator=(FloatRange const&);
    FloatRange(FloatRange const&);
    FloatRange();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getValue(::Random&) const;

    MCNAPI bool parseJson(::Json::Value const&, float, float);
#else // @header-generator platform
    MCNAPI bool parseJson(::Json::Value const& node, float minDefault, float maxDefault);
#endif // @header-generator platform
    // NOLINTEND
};
