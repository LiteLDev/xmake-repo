#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/PushablePreset.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/Tick.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct PushablePreset;
// clang-format on
#endif // @header-generator platform

struct PushableByEntityComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PushablePreset>>           mPresets;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const PushablePreset*>> mDefaultPreset;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mLastPlayedSoundAtTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PushablePreset>>         mPresets;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::PushablePreset const*>> mDefaultPreset;
    ::ll::TypedStorage<8, 8, ::Tick>                                   mLastPlayedSoundAtTick;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PushableByEntityComponent& operator=(PushableByEntityComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
