#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PushablePreset.h"
#include "mc/world/level/Tick.h"

struct PushableByEntityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PushablePreset>>           mPresets;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const PushablePreset*>> mDefaultPreset;
    ::ll::TypedStorage<8, 8, ::Tick>                                 mLastPlayedSoundAtTick;
    // NOLINTEND

public:
    // prevent constructor by default
    PushableByEntityComponent& operator=(PushableByEntityComponent const&);
};
