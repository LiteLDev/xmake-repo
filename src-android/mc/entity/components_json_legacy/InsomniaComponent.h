#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class InsomniaComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mTimeSinceRest;
    ::ll::TypedStorage<4, 4, float> mDaysUntilInsomnia;
    ::ll::TypedStorage<4, 4, int>   mTicksUntilInsomnia;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI int getInsomniaTimerTicks() const;

    MCNAPI int getTicksUntilInsomnia() const;

    MCNAPI int incrementTimeSinceRest();

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void restartTimer();
    // NOLINTEND
};
