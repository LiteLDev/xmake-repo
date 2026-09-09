#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

namespace ECSModule {

struct TypeIds {
public:
    // TypeIds inner types define
    using ID = ::Bedrock::typeid_t<SystemCategory>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mGame;
    ::ll::UntypedStorage<2, 2> mUsedInServerPlayerMovement;
    ::ll::UntypedStorage<2, 2> mUsedInClientMovementCorrections;
    ::ll::UntypedStorage<2, 2> mEditor;
    ::ll::UntypedStorage<2, 2> mRuntimeInitialize;
    ::ll::UntypedStorage<2, 2> mActorMove;
    // NOLINTEND
};

} // namespace ECSModule
