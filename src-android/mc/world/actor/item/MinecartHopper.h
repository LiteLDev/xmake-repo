#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockSource;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class MinecartHopper : public ::Minecart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartHopper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartHopper();

    virtual void destroy(::ActorDamageSource const&, bool);

    virtual ::MinecartType getType();

    virtual ::Block const* getDefaultDisplayBlock() const;

    virtual int getDefaultDisplayOffset() const;

    virtual void applyNaturalSlowdown(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecartHopper(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI void $destroy(::ActorDamageSource const&, bool);

    MCNAPI ::MinecartType $getType();

    MCNAPI ::Block const* $getDefaultDisplayBlock() const;

    MCNAPI int $getDefaultDisplayOffset() const;

    MCNAPI void $applyNaturalSlowdown(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
