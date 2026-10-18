#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

struct SendEventStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    delay;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           eventName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                         eventName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> stageSoundEvent;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SendEventStage& operator=(SendEventStage const&);
#else // @header-generator platform
#endif // @header-generator platform
};
