#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/components/BlockTypePtr.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockType;
class ComponentItem;
class CompoundTag;
class HashedString;
class ItemStack;
class ItemStackBase;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_26_0 { struct PlanterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PlanterItemComponent : public ::NetworkedItemComponent<PlanterItemComponent> {
public:
    // PlanterItemComponent inner types declare
    // clang-format off
    struct BlockPlacementContext;
    // clang-format on

    // PlanterItemComponent inner types define
    struct BlockPlacementContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mBlock;
        ::ll::TypedStorage<1, 1, bool const>         mAlignedPlacement;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTypePtr>                   mBlock;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>    mAllowedUseBlocks;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseOnSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mCanUseBlockAsIcon;
    ::ll::TypedStorage<1, 1, bool>                             mReplaceBlockItem;
    ::ll::TypedStorage<1, 1, bool>                             mAlignedPlacement;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanterItemComponent& operator=(PlanterItemComponent const&);
    PlanterItemComponent(PlanterItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlanterItemComponent();

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual bool initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlanterItemComponent(::Block const&);

    MCNAPI explicit PlanterItemComponent(::SharedTypes::v1_26_0::PlanterItemComponent);

    MCNAPI bool calculatePlacePos(::ItemStackBase const&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI bool canUseOn(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar) const;

    MCNAPI ::HashedString const& getBlockIdentifier() const;

    MCNAPI bool isReplacingBlockItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::PlanterItemComponent::BlockPlacementContext getBlockPlacementContext(::ItemStackBase const&);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Block const&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_0::PlanterItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI bool $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);

    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
