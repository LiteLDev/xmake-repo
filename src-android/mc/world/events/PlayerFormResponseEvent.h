#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace Json { class Value; }
// clang-format on

struct PlayerFormResponseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>    mPlayer;
    ::ll::TypedStorage<4, 4, uint> mFormId;
    ::ll::UntypedStorage<8, 16>    mFormResponse;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerFormResponseEvent& operator=(PlayerFormResponseEvent const&);
    PlayerFormResponseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerFormResponseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
