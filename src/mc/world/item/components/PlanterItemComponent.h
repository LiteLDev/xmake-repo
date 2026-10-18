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
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class BlockType;
class ComponentItem;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class ItemStackBase;
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_26_0 { struct PlanterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class PlanterItemComponent : public ::NetworkedItemComponent<PlanterItemComponent> {
#else // @header-generator platform
class PlanterItemComponent : public ::NetworkedItemComponent<::PlanterItemComponent> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockTypePtr>                   mBlock;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>    mAllowedUseBlocks;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseOnSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mCanUseBlockAsIcon;
    ::ll::TypedStorage<1, 1, bool>                             mReplaceBlockItem;
    ::ll::TypedStorage<1, 1, bool>                             mAlignedPlacement;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockTypePtr>                    mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedUseBlocks;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnUseOnSubscription;
    ::ll::TypedStorage<1, 1, bool>                              mCanUseBlockAsIcon;
    ::ll::TypedStorage<1, 1, bool>                              mReplaceBlockItem;
    ::ll::TypedStorage<1, 1, bool>                              mAlignedPlacement;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    PlanterItemComponent& operator=(PlanterItemComponent const&);
    PlanterItemComponent(PlanterItemComponent const&);
#else // @header-generator platform
    PlanterItemComponent();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlanterItemComponent();
#else // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual void _initializeComponent(::ComponentItem&);
#else // @header-generator platform
    virtual bool initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlanterItemComponent(::Block const&);
#else // @header-generator platform
    MCAPI explicit PlanterItemComponent(::SharedTypes::v1_26_0::PlanterItemComponent component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlanterItemComponent(::SharedTypes::v1_26_0::PlanterItemComponent);
#else // @header-generator platform
    MCAPI bool calculatePlacePos(::ItemStackBase const& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool calculatePlacePos(::ItemStackBase const&, ::Actor&, uchar&, ::BlockPos&) const;

    MCNAPI bool canUseOn(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar) const;

    MCNAPI ::HashedString const& getBlockIdentifier() const;

    MCNAPI bool isReplacingBlockItem() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool canUseOn(::ItemStack const& instance, ::Actor& entity, ::BlockPos const& pos, uchar face) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PlanterItemComponent::BlockPlacementContext getBlockPlacementContext(::ItemStackBase const&);

    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI static ::PlanterItemComponent::BlockPlacementContext getBlockPlacementContext(::ItemStackBase const& item);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Block const&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_0::PlanterItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_0::PlanterItemComponent component);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI void $_initializeComponent(::ComponentItem& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeComponent(::ComponentItem&);
#else // @header-generator platform
    MCAPI bool $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
