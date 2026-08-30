#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/DynamicAmbientSound.h"

class AmbientSoundServerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DynamicAmbientSound>> mDynamicSounds;
    ::ll::TypedStorage<8, 24, std::string>                      mDefaultEventName;
    ::ll::TypedStorage<4, 4, uint>                              mReevaluationTimeTicks;
    ::ll::TypedStorage<4, 4, uint>                              mTicksSinceReevaluation;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundServerComponent& operator=(AmbientSoundServerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AmbientSoundServerComponent(::AmbientSoundServerComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AmbientSoundServerComponent const&);
    // NOLINTEND
};
