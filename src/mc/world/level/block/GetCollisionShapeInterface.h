#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

class GetCollisionShapeInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GetCollisionShapeInterface();
#else // @header-generator platform
    virtual ~GetCollisionShapeInterface() = default;
#endif // @header-generator platform

    virtual float getFeetAttachPosY() const = 0;

    virtual bool canDescendThroughBlock() const = 0;

    virtual float getFallDistance() const = 0;

    virtual ::ActorType getEntityTypeId() const = 0;

    virtual bool isWearingLeatherBoots() const = 0;

    virtual bool hasLightWeightFamilyTag() const = 0;

    virtual ::AABB const& getAABB() const = 0;

    virtual bool isWorldBuilder() const = 0;

    virtual bool isRiding() const = 0;

    virtual bool hasPassenger() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
