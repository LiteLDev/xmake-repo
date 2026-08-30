#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class BrushableBlockActor : public ::RandomizableBlockActorContainer {
public:
    // BrushableBlockActor inner types define
    enum class Placement : int {
        DesertWell       = 0,
        DesertPyramid    = 1,
        ColdOceanRuin    = 2,
        WarmOceanRuin    = 3,
        TrailRuinsCommon = 4,
        TrailRuinsRare   = 5,
        Empty            = 6,
    };

    enum class BrushingState : int {
        Ongoing   = 0,
        Completed = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>> mBrushReset;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>> mBrushCooldown;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>             mDisplayEntity;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>      mItems;
    ::ll::TypedStorage<8, 40, ::HashedString>              mBlockId;
    ::ll::TypedStorage<4, 4, uint>                         mBrushCount;
    ::ll::TypedStorage<1, 1, uchar>                        mBrushDirection;
    ::ll::TypedStorage<1, 1, bool>                         mLootTableUnpacked;
    // NOLINTEND

public:
    // prevent constructor by default
    BrushableBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrushableBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual void onRemoved(::BlockSource&);

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void onChanged(::BlockSource&);

    virtual void serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    virtual int getContainerSize() const;

    virtual int getMaxStackSize() const;

    virtual ::ItemStack const& getItem(int) const;

    virtual void setItem(int, ::ItemStack const&);

    virtual void stopOpen(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BrushableBlockActor(::HashedString const&, ::BlockPos const&, ::BrushableBlockActor::Placement);

    MCNAPI void _brushingCompleted(::BlockSource&);

    MCNAPI void _removeDisplayEntity(::BlockSource&);

    MCNAPI ::BrushableBlockActor::BrushingState brush(::BlockSource&, ::BlockPos const&, uchar const);

    MCNAPI int getBrushCount() const;

    MCNAPI uchar getBrushDirection() const;

    MCNAPI ::Actor* tryGetOrCreateDisplayEntity(::BlockSource&);

    MCNAPI void update(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getLootTableFromVariant(::BrushableBlockActor::Placement const);

    MCNAPI static ::BrushableBlockActor* tryGet(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const&, ::BlockPos const&, ::BrushableBlockActor::Placement);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI void $onRemoved(::BlockSource&);

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $onChanged(::BlockSource&);

    MCNAPI void $serverInitItemStackIds(int, int, std::function<void(int, const ItemStack&)>);

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI ::ItemStack const& $getItem(int) const;

    MCNAPI void $setItem(int, ::ItemStack const&);

    MCNAPI void $stopOpen(::Actor&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
