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
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
#else // @header-generator platform
#endif // @header-generator platform
class ComponentItem;
class Container;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class SemVersion;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionIdentifier;
namespace Bedrock::PubSub { class Subscription; }
#endif // @header-generator platform
namespace SharedTypes::v1_20_50 { struct EntityPlacerItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class EntityPlacerItemComponent : public ::NetworkedItemComponent<EntityPlacerItemComponent> {
#else // @header-generator platform
class EntityPlacerItemComponent : public ::NetworkedItemComponent<::EntityPlacerItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>    mIdentifier;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>    mAllowedUseBlocks;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>    mAllowedDispenseBlocks;
    ::ll::TypedStorage<1, 1, bool>                             mCanUseOnMonsterSpawners;
    ::ll::TypedStorage<1, 1, bool>                             mShouldContentErrorWithoutLiquidClipped;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseOnSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>     mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedUseBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedDispenseBlocks;
    ::ll::TypedStorage<1, 1, bool>                              mCanUseOnMonsterSpawners;
    ::ll::TypedStorage<1, 1, bool>                              mShouldContentErrorWithoutLiquidClipped;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnUseOnSubscription;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    EntityPlacerItemComponent& operator=(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent(EntityPlacerItemComponent const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EntityPlacerItemComponent& operator=(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent();

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EntityPlacerItemComponent();
#else // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual void _initializeComponent(::ComponentItem&);
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EntityPlacerItemComponent(::SharedTypes::v1_20_50::EntityPlacerItemComponent);

    MCNAPI void _setActorCustomName(::Actor&, ::ItemStack const&) const;

    MCNAPI bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI explicit EntityPlacerItemComponent(::SharedTypes::v1_20_50::EntityPlacerItemComponent component);

    MCAPI bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::EntityPlacerItemComponent& operator=(::EntityPlacerItemComponent&&);
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
    MCAPI static void _setActorCustomName(::Actor& actor, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::EntityPlacerItemComponent);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::v1_20_50::EntityPlacerItemComponent component);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_initializeComponent(::ComponentItem& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
