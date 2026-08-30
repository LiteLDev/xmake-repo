#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class ComponentItem;
class Container;
class HashedString;
class ItemStack;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_20_50 { struct EntityPlacerItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityPlacerItemComponent : public ::NetworkedItemComponent<EntityPlacerItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>    mIdentifier;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>    mAllowedUseBlocks;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>    mAllowedDispenseBlocks;
    ::ll::TypedStorage<1, 1, bool>                             mCanUseOnMonsterSpawners;
    ::ll::TypedStorage<1, 1, bool>                             mShouldContentErrorWithoutLiquidClipped;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseOnSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityPlacerItemComponent& operator=(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent(EntityPlacerItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntityPlacerItemComponent();

    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EntityPlacerItemComponent(::SharedTypes::v1_20_50::EntityPlacerItemComponent);

    MCNAPI void _setActorCustomName(::Actor&, ::ItemStack const&) const;

    MCNAPI bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::EntityPlacerItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);

    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
