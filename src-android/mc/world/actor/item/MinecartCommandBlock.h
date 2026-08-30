#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class Block;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class MinecartCommandBlock : public ::Minecart {
public:
    // prevent constructor by default
    MinecartCommandBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartCommandBlock();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual bool canShowNameTag() const;

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual ::MinecartType getType();

    virtual ::Block const* getDefaultDisplayBlock() const;

    virtual void applyNaturalSlowdown(::BlockSource&);

    virtual void _lazyInitDisplayBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecartCommandBlock(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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

    MCNAPI bool $canShowNameTag() const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI ::MinecartType $getType();

    MCNAPI ::Block const* $getDefaultDisplayBlock() const;

    MCNAPI void $applyNaturalSlowdown(::BlockSource&);

    MCNAPI void $_lazyInitDisplayBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
