#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/IAddActorEntityProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
// clang-format on

class AddActorEntityProxy : public ::IAddActorEntityProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>     mDimension;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>  mActorUniqueID;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mActorRuntimeID;
    // NOLINTEND

public:
    // prevent constructor by default
    AddActorEntityProxy& operator=(AddActorEntityProxy const&);
    AddActorEntityProxy(AddActorEntityProxy const&);
    AddActorEntityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AddActorEntityProxy();
#else // @header-generator platform
    virtual void initializeActor(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeActor(::Actor&);

    virtual void reloadActor(::Actor&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void reloadActor(::Actor& actor) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeActor(::Actor&);
#else // @header-generator platform
    MCAPI void $initializeActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadActor(::Actor&);
#else // @header-generator platform
    MCAPI void $reloadActor(::Actor& actor);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
