#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class CelebrateHuntComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mCelebrating;
    ::ll::TypedStorage<8, 8, ::Tick> mCelebrateUntil;
    ::ll::TypedStorage<8, 8, ::Tick> mNextSoundEventTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent const getCelebrateSound(::Mob const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent const getCelebrateSound(::Mob const& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Tick const getCelebrateUntil() const;

    MCNAPI ::Tick const getNextSoundEventTick() const;

    MCNAPI bool isCelebrating() const;

    MCNAPI void setNextSoundEventTick(::Mob const&);

    MCNAPI void startCelebrating(::Tick const&);

    MCNAPI void stopCelebrating();
#else // @header-generator platform
    MCAPI void setNextSoundEventTick(::Mob const& mob);
#endif // @header-generator platform
    // NOLINTEND
};
