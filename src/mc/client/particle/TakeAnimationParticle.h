#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particle/CustomParticle.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class EntityContext;
class ItemActor;
class Level;
// clang-format on

class TakeAnimationParticle : public ::CustomParticle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>         mLevel;
    ::ll::UntypedStorage<1, 32>                mItemEntity;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mTargetEntityRef;
    ::ll::TypedStorage<4, 12, ::Vec3>          mOffset;
    ::ll::TypedStorage<4, 4, int>              mLife;
    ::ll::TypedStorage<4, 4, int>              mLifeTime;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeAnimationParticle& operator=(TakeAnimationParticle const&);
    TakeAnimationParticle(TakeAnimationParticle const&);
    TakeAnimationParticle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TakeAnimationParticle();

    virtual void normalTick();

    virtual void render(::BaseActorRenderContext&, ::Vec3 const&, float);

    virtual bool isRemoved() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TakeAnimationParticle(::Level&, ::ItemActor const&, ::Actor&, ::Vec3);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&, ::ItemActor const&, ::Actor&, ::Vec3);
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
#else // @header-generator platform
class TakeAnimationParticle {};
#endif // @header-generator platform
