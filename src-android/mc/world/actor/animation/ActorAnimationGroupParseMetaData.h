#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
// clang-format on

struct ActorAnimationGroupParseMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                   mActorAnimationGroup;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCurrentCommandVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationGroupParseMetaData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorAnimationGroupParseMetaData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
