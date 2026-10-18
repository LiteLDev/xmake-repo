#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Social::Events {

class Measurement {
public:
    // Measurement inner types define
    enum class AggregationType : int {
        Increment = 0,
        Sum       = 1,
        Min       = 2,
        Max       = 3,
        Average   = 4,
        Latest    = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                   mName;
    ::ll::UntypedStorage<8, 16>                                              mValue;
    ::ll::TypedStorage<4, 4, int>                                            mValueDivisorForAverage;
    ::ll::TypedStorage<4, 4, ::Social::Events::Measurement::AggregationType> mType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkeb15ce;
    ::ll::UntypedStorage<8, 16> mUnkac30d6;
    ::ll::UntypedStorage<4, 4>  mUnkb6c8f4;
    ::ll::UntypedStorage<4, 4>  mUnk64ed6f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Measurement& operator=(Measurement const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Measurement(Measurement const&);
    Measurement();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getName() const;

    MCNAPI void updateMeasurement(::Social::Events::Measurement const&);

    MCNAPI ~Measurement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void updateMeasurement(::Social::Events::Measurement const& newMeasure);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
