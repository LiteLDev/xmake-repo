#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerDataDrivenScreenClosedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                              mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>    mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                           mFormId;
    ::ll::TypedStorage<1, 1, ::DataDrivenScreenClosedReason> mCloseReason;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerDataDrivenScreenClosedEvent& operator=(PlayerDataDrivenScreenClosedEvent const&);
    PlayerDataDrivenScreenClosedEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
