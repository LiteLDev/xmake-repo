#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/block/GetCollisionShapeInterface.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
// clang-format on

class GetCollisionShapeActorProxy : public ::GetCollisionShapeInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor const&> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    GetCollisionShapeActorProxy& operator=(GetCollisionShapeActorProxy const&);
    GetCollisionShapeActorProxy(GetCollisionShapeActorProxy const&);
    GetCollisionShapeActorProxy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GetCollisionShapeActorProxy();
#else // @header-generator platform
    virtual float getFeetAttachPosY() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getFeetAttachPosY() const;
#else // @header-generator platform
    virtual bool canDescendThroughBlock() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDescendThroughBlock() const;
#else // @header-generator platform
    virtual float getFallDistance() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getFallDistance() const;
#else // @header-generator platform
    virtual ::ActorType getEntityTypeId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorType getEntityTypeId() const;
#else // @header-generator platform
    virtual bool isWearingLeatherBoots() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWearingLeatherBoots() const;
#else // @header-generator platform
    virtual bool hasLightWeightFamilyTag() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasLightWeightFamilyTag() const;
#else // @header-generator platform
    virtual bool isWorldBuilder() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getAABB() const;
#else // @header-generator platform
    virtual ::AABB const& getAABB() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWorldBuilder() const;
#else // @header-generator platform
    virtual bool isRiding() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isRiding() const;

    virtual bool hasPassenger() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GetCollisionShapeActorProxy(::Actor const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool hasPassenger() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getFeetAttachPosY() const;
#else // @header-generator platform
    MCAPI float $getFeetAttachPosY() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canDescendThroughBlock() const;
#else // @header-generator platform
    MCAPI bool $canDescendThroughBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getFallDistance() const;
#else // @header-generator platform
    MCAPI float $getFallDistance() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorType $getEntityTypeId() const;
#else // @header-generator platform
    MCAPI ::ActorType $getEntityTypeId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWearingLeatherBoots() const;
#else // @header-generator platform
    MCAPI bool $isWearingLeatherBoots() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasLightWeightFamilyTag() const;
#else // @header-generator platform
    MCAPI bool $hasLightWeightFamilyTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& $getAABB() const;
#else // @header-generator platform
    MCAPI bool $isWorldBuilder() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWorldBuilder() const;
#else // @header-generator platform
    MCAPI ::AABB const& $getAABB() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isRiding() const;
#else // @header-generator platform
    MCAPI bool $isRiding() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasPassenger() const;
#else // @header-generator platform
    MCAPI bool $hasPassenger() const;


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
