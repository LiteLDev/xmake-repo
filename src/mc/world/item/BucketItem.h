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
#if defined(LL_PLAT_A) // @header-generator platform
class BlockType;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDefinitionIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>     mInitEvent;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>   mInitEvent;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        FillTypeEntityData& operator=(FillTypeEntityData const&);
        FillTypeEntityData();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::BucketFillType> mFillType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BucketItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BucketItem();
#else // @header-generator platform
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isBucket() const;
#else // @header-generator platform
    virtual uchar getMaxStackSize(::ItemDescriptor const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDestructive(int) const;
#else // @header-generator platform
    virtual bool canUseOnSimTick() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLiquidClipItem() const;
#else // @header-generator platform
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    virtual void releaseUsing(::ItemStack& inoutInstance, ::Player* player, int durationLeft) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidAuxValue(int) const;
#else // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool uniqueAuxValues() const;
#else // @header-generator platform
    virtual bool uniqueAuxValues() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUseOnSimTick() const;
#else // @header-generator platform
    virtual bool isBucket() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    virtual bool isLiquidClipItem() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    virtual bool validFishInteraction(int) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual ::Brightness getLightEmission(int) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar getMaxStackSize(::ItemDescriptor const&) const;
#else // @header-generator platform
    virtual bool isValidAuxValue(int auxValue) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool validFishInteraction(int) const;
#else // @header-generator platform
    virtual bool isDestructive(int auxValue) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item& setIconInfo(std::string const&, int);
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Brightness getLightEmission(int) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BucketItem(std::string const&, int, ::BucketFillType);
#else // @header-generator platform
    MCAPI void _broadcastBucketEmptySound(::BlockSource& region, ::Actor& entity, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _broadcastBucketEmptySound(::BlockSource&, ::Actor&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool _emptyBucket(
        ::BlockSource&     region,
        ::Block const&     contents,
        ::BlockPos const&  pos,
        ::Actor*           placer,
        ::ItemStack const& instance,
        uchar              face
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _broadcastBucketFillSound(::BlockSource&, ::Actor&, ::Material const&) const;
#else // @header-generator platform
    MCAPI bool
    _supportsWaterlessEntity(::Actor const& entity, ::HashedString& bucketType, bool const onlyCheckActorType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    _emptyBucket(::BlockSource&, ::Block const&, ::BlockPos const&, ::Actor*, ::ItemStack const&, uchar) const;
#else // @header-generator platform
    MCAPI bool readBucketEntitySaveData(
        ::BlockSource&        region,
        ::Actor*              placer,
        ::BlockPos            pos,
        ::ItemInstance const& instance
    ) const;
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _replaceWithEmptyBucket(::ItemStack&, ::Actor&) const;
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _broadcastBucketFillSound(::BlockSource& region, ::Actor& entity, ::Material const& material);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _supportsWaterlessEntity(::Actor const&, ::HashedString&, bool const) const;

    MCNAPI bool readBucketEntitySaveData(::BlockSource&, ::Actor*, ::BlockPos, ::ItemInstance const&) const;
#else // @header-generator platform
    MCAPI static void _replaceWithEmptyBucket(::ItemStack& instance, ::Actor& entity);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::vector<::BucketItem::FillTypeEntityData> const& mFillTypeEntityData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBucket() const;
#else // @header-generator platform
    MCAPI ::Item& $setIconInfo(::std::string const& name, int id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDestructive(int) const;
#else // @header-generator platform
    MCAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLiquidClipItem() const;
#else // @header-generator platform
    MCAPI bool $canUseOnSimTick() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidAuxValue(int) const;
#else // @header-generator platform
    MCFOLD void $releaseUsing(::ItemStack& inoutInstance, ::Player* player, int durationLeft) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $uniqueAuxValues() const;
#else // @header-generator platform
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseOnSimTick() const;
#else // @header-generator platform
    MCFOLD bool $uniqueAuxValues() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCFOLD bool $isBucket() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    MCAPI bool $isLiquidClipItem() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI bool $validFishInteraction(int) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;
#else // @header-generator platform
    MCAPI ::Brightness $getLightEmission(int) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $validFishInteraction(int) const;
#else // @header-generator platform
    MCFOLD bool $isValidAuxValue(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item& $setIconInfo(std::string const&, int);
#else // @header-generator platform
    MCAPI bool $isDestructive(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness $getLightEmission(int) const;
#else // @header-generator platform
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
