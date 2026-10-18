#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct DistanceEvent; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
struct DistanceEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                      mDistanceInterval;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mEventName;
    // NOLINTEND

public:
    // prevent constructor by default
    DistanceEvents& operator=(DistanceEvents const&);
    DistanceEvents(DistanceEvents const&);
    DistanceEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DistanceEvents();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DistanceEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                          mDistanceInterval;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mEventName;
    // NOLINTEND
};
#else // @header-generator platform
struct DistanceEvents {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem
