#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/BucketFillType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class CompoundTag;
class Container;
class HashedString;
class InteractionResult;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Material;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct Brightness;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class BucketItem : public ::Item {
public:
    // BucketItem inner types declare
    // clang-format off
    struct FillTypeEntityData;
    // clang-format on

    // BucketItem inner types define
    struct FillTypeEntityData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::BucketFillType> mBucketFillType;
        ::ll::TypedStorage<4, 4, ::ActorType>      mActorType;
        ::ll::TypedStorage<8, 24, std::string>     mInitEvent;
        // NOLINTEND

    public:
        // prevent constructor by default
        FillTypeEntityData& operator=(FillTypeEntityData const&);
        FillTypeEntityData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::BucketFillType> mFillType;
    // NOLINTEND

public:
    // prevent constructor by default
    BucketItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BucketItem();

    virtual bool isBucket() const;

    virtual bool isDestructive(int) const;

    virtual bool isLiquidClipItem() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidAuxValue(int) const;

    virtual bool uniqueAuxValues() const;

    virtual bool canUseOnSimTick() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;

    virtual bool validFishInteraction(int) const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::Brightness getLightEmission(int) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BucketItem(std::string const&, int, ::BucketFillType);

    MCNAPI void _broadcastBucketEmptySound(::BlockSource&, ::Actor&, ::BlockPos const&) const;

    MCNAPI void _broadcastBucketFillSound(::BlockSource&, ::Actor&, ::Material const&) const;

    MCNAPI bool
    _emptyBucket(::BlockSource&, ::Block const&, ::BlockPos const&, ::Actor*, ::ItemStack const&, uchar) const;

    MCNAPI void _replaceWithEmptyBucket(::ItemStack&, ::Actor&) const;

    MCNAPI bool _supportsWaterlessEntity(::Actor const&, ::HashedString&, bool const) const;

    MCNAPI bool readBucketEntitySaveData(::BlockSource&, ::Actor*, ::BlockPos, ::ItemInstance const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DRINK_DURATION();

    MCNAPI static std::vector<BucketItem::FillTypeEntityData> const& mFillTypeEntityData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::BucketFillType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isBucket() const;

    MCNAPI bool $isDestructive(int) const;

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI bool $canUseOnSimTick() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCNAPI bool $validFishInteraction(int) const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::Brightness $getLightEmission(int) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
