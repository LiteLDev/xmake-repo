#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

namespace SharedTypes::v1_20_50 {

struct RecordItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<4, 4, float>                                  mDuration;
    ::ll::TypedStorage<4, 4, int>                                    mComparatorSignal;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
