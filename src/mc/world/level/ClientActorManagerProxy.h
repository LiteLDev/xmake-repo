#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"
#include "mc/world/level/ActorManagerProxy.h"
#include "mc/world/level/ActorValidationError.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ClientActorManagerProxy : public ::ActorManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk495c78;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ClientActorManagerProxy& operator=(ClientActorManagerProxy const&);
    ClientActorManagerProxy(ClientActorManagerProxy const&);
#endif // @header-generator platform
    ClientActorManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ClientActorManagerProxy();
#else // @header-generator platform
    virtual void initializeActor(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeActor(::Actor&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void, ::ActorValidationError> validate(::Actor const& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, ActorValidationError> validate(::Actor const&);
#else // @header-generator platform
    virtual void addActor(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addActor(::Actor&);
#else // @header-generator platform
    virtual void removeActorInLevelChunk(::Actor const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void deleteActorFromWorldInLevelChunk(::Actor const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeActor(::Actor&);
#else // @header-generator platform
    MCNAPI void $initializeActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, ActorValidationError> $validate(::Actor const&);
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<void, ::ActorValidationError> $validate(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addActor(::Actor&);
#else // @header-generator platform
    MCNAPI void $addActor(::Actor& actor);
#endif // @header-generator platform

    MCNAPI void $removeActorInLevelChunk(::Actor const&);

    MCNAPI void $deleteActorFromWorldInLevelChunk(::Actor const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
