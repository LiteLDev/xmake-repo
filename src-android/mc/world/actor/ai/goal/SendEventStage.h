#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

struct SendEventStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    delay;
    ::ll::TypedStorage<8, 24, std::string>                           eventName;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> stageSoundEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventStage& operator=(SendEventStage const&);
};
