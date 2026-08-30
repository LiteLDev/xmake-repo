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
    // NOLINTEND
};
