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
    virtual ~GetCollisionShapeActorProxy();

    virtual float getFeetAttachPosY() const;

    virtual bool canDescendThroughBlock() const;

    virtual float getFallDistance() const;

    virtual ::ActorType getEntityTypeId() const;

    virtual bool isWearingLeatherBoots() const;

    virtual bool hasLightWeightFamilyTag() const;

    virtual ::AABB const& getAABB() const;

    virtual bool isWorldBuilder() const;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getFeetAttachPosY() const;

    MCNAPI bool $canDescendThroughBlock() const;

    MCNAPI float $getFallDistance() const;

    MCNAPI ::ActorType $getEntityTypeId() const;

    MCNAPI bool $isWearingLeatherBoots() const;

    MCNAPI bool $hasLightWeightFamilyTag() const;

    MCNAPI ::AABB const& $getAABB() const;

    MCNAPI bool $isWorldBuilder() const;

    MCNAPI bool $isRiding() const;

    MCNAPI bool $hasPassenger() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
