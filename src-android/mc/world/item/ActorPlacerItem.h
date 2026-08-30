#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInfoRegistry;
class Agent;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class HashedString;
class InteractionResult;
class ItemDescriptor;
class ItemRegistryRef;
class ItemStack;
class ItemStackBase;
class Player;
class Vec3;
struct ItemTintStrategy;
struct ResolvedItemIconInfo;
// clang-format on

class ActorPlacerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorID;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPlacerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorPlacerItem();

    virtual void tearDown();

    virtual bool isLiquidClipItem() const;

    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    virtual bool isValidAuxValue(int) const;

    virtual bool isActorPlacerItem() const;

    virtual ::ItemTintStrategy getTintStrategy() const;

    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorDefinitionIdentifier _getActorID(::BlockSource&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void forEachCustomEgg(::ItemRegistryRef const, ::brstd::function_ref<void(const Item&)> const);

    MCNAPI static std::string getCustomSpawnEggName(int);

    MCNAPI static void initializeIcons(std::unordered_map<HashedString, ResolvedItemIconInfo>);

    MCNAPI static void registerCustomEggs(::ItemRegistryRef, ::ActorInfoRegistry const&);

    MCNAPI static ::Actor* spawnOrMoveAgent(::Vec3 const&, ::Actor&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<uint, std::string>& mCustomSpawnEggs();

    MCNAPI static std::unordered_map<HashedString, ResolvedItemIconInfo>& mEggTextureInfoMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tearDown();

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI bool $shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI bool $isActorPlacerItem() const;

    MCNAPI ::ItemTintStrategy $getTintStrategy() const;

    MCNAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
