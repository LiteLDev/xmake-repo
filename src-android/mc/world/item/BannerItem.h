#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/Rarity.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BannerPattern;
class Block;
class BlockPos;
class CompoundTag;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class BannerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mWallBanner;
    ::ll::TypedStorage<8, 8, ::Block const&> mStandingBanner;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerItem& operator=(BannerItem const&);
    BannerItem(BannerItem const&);
    BannerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BannerItem();

    virtual ::Rarity getRarity(::ItemStackBase const&) const;

    virtual bool isWearableThroughLootTable(::CompoundTag const*) const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidAuxValue(int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual void fixupCommon(::ItemStackBase&) const;

    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BannerItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<std::pair<gsl::not_null<const BannerPattern*>, ItemColor>>
    getPatternAndColorPairsFromItemStack(::ItemStackBase const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Rarity $getRarity(::ItemStackBase const&) const;

    MCNAPI bool $isWearableThroughLootTable(::CompoundTag const*) const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI void $fixupCommon(::ItemStackBase&) const;

    MCNAPI ::InteractionResult $_useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
