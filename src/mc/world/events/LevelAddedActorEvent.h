#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Level;
// clang-format on

struct LevelAddedActorEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mLevel;
    ::ll::UntypedStorage<1, 24> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelAddedActorEvent& operator=(LevelAddedActorEvent const&);
    LevelAddedActorEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelAddedActorEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Level>> mLevel;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>             mActor;
#endif // @header-generator platform
    // NOLINTEND
};
