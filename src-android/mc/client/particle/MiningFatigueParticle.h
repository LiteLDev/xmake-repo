#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particle/CustomParticle.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class ActorFactory;
class BaseActorRenderContext;
class EntityContext;
class Vec3;
// clang-format on

class MiningFatigueParticle : public ::CustomParticle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTickCount;
    ::ll::UntypedStorage<1, 4>    mFinished;
    ::ll::UntypedStorage<1, 32>   mGuardianEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    MiningFatigueParticle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MiningFatigueParticle();

    virtual void normalTick();

    virtual void render(::BaseActorRenderContext&, ::Vec3 const&, float);

    virtual bool isRemoved() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MiningFatigueParticle(::ActorFactory&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorFactory&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $normalTick();

    MCNAPI void $render(::BaseActorRenderContext&, ::Vec3 const&, float);

    MCNAPI bool $isRemoved() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
