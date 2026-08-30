#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Axolotl : public ::Animal {
public:
    // prevent constructor by default
    Axolotl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Axolotl();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual float _getWalkTargetValue(::BlockPos const&);

    virtual ::AABB _getAdjustedAABBForSpawnCheck(::AABB const&, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Axolotl(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI float $_getWalkTargetValue(::BlockPos const&);

    MCNAPI ::AABB $_getAdjustedAABBForSpawnCheck(::AABB const&, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
