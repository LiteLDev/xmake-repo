#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sound/SoundItem.h"

class SoundEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mCategory;
    ::ll::TypedStorage<8, 24, std::string>            mSubtitle;
    ::ll::TypedStorage<8, 24, std::vector<SoundItem>> mAllSoundItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SoundEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
