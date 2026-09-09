#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockSource;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class MinecartChest : public ::Minecart {
public:
    // prevent constructor by default
    MinecartChest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartChest();

    virtual void destroy(::ActorDamageSource const&, bool);

    virtual ::MinecartType getType();

    virtual ::Block const* getDefaultDisplayBlock() const;

    virtual void applyNaturalSlowdown(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecartChest(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ITEMS_SIZE();
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

    MCNAPI void $applyNaturalSlowdown(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
