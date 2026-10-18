#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/safety/RedactableString.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerUseNameTagEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                                 mPlayer;
    ::ll::UntypedStorage<1, 24>                                                 mEntityNamed;
    ::ll::TypedStorage<8, 64, std::optional<Bedrock::Safety::RedactableString>> mPreviousName;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString>              mNewName;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerUseNameTagEvent& operator=(PlayerUseNameTagEvent const&);
    PlayerUseNameTagEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerUseNameTagEvent(::PlayerUseNameTagEvent const&);

    MCNAPI ~PlayerUseNameTagEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerUseNameTagEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                           mPlayer;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                           mEntityNamed;
    ::ll::TypedStorage<8, 80, ::std::optional<::Bedrock::Safety::RedactableString>> mPreviousName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>                  mNewName;
#endif // @header-generator platform
    // NOLINTEND
};
