#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/sound/SoundEventIdentifier.h"

struct DurabilityThreshold {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                     mDurability;
    ::ll::TypedStorage<4, 4, ::ParticleType>          mParticleType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SoundEventIdentifier> mSoundEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::SoundEventIdentifier> mSoundEvent;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DurabilityThreshold& operator=(DurabilityThreshold const&);
    DurabilityThreshold();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DurabilityThreshold();
#else // @header-generator platform
    MCAPI ~DurabilityThreshold();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
