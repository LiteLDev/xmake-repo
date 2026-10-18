#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/events/Measurement.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Social::Events {

class Measurements {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Social::Events::Measurement>> mMeasurements;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnke4ba1d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Measurements& operator=(Measurements const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Social::Events::Measurements& operator=(::Social::Events::Measurements&&);

    MCNAPI ~Measurements();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    Measurements(Measurements const&);
    Measurements();
#endif // @header-generator platform
};

} // namespace Social::Events
