#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/world/level/ActorManagerProxy.h"
#include "mc/world/level/ActorValidationError.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
// clang-format on

class ClientActorManagerProxy : public ::ActorManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientActorManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientActorManagerProxy();

    virtual void initializeActor(::Actor&);

    virtual ::Bedrock::Result<void, ActorValidationError> validate(::Actor const&);

    virtual void addActor(::Actor&);

    virtual void removeActorInLevelChunk(::Actor const&);

    virtual void deleteActorFromWorldInLevelChunk(::Actor const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientActorManagerProxy(::Level&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeActor(::Actor&);

    MCNAPI ::Bedrock::Result<void, ActorValidationError> $validate(::Actor const&);

    MCNAPI void $addActor(::Actor&);

    MCNAPI void $removeActorInLevelChunk(::Actor const&);

    MCNAPI void $deleteActorFromWorldInLevelChunk(::Actor const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
