#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class TextPacket;
// clang-format on

struct ChatEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mMessage;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredMessage;
    ::ll::UntypedStorage<1, 24>                           mSender;
    ::ll::UntypedStorage<8, 32>                           mTargets;
    ::ll::TypedStorage<8, 24, std::string>                mAuthor;
    ::ll::TypedStorage<1, 1, bool>                        mMessageValid;
    ::ll::TypedStorage<1, 1, bool>                        mAllowFiltering;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatEvent& operator=(ChatEvent const&);
    ChatEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChatEvent(::ChatEvent const&);

    MCNAPI ~ChatEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChatEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
