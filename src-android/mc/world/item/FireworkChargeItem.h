#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
namespace mce { class Color; }
// clang-format on

class FireworkChargeItem : public ::Item {
public:
    // FireworkChargeItem inner types define
    enum Shape : uint {
        SHAPE_NONE         = 0,
        SHAPE_LARGE_BALL   = 1,
        SHAPE_STAR         = 2,
        SHAPE_HEAD_CREEPER = 3,
        SHAPE_BURST        = 4,
        SHAPE_COUNT        = 5,
    };

public:
    // prevent constructor by default
    FireworkChargeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FireworkChargeItem();

    virtual bool isDyeable() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidAuxValue(int) const;

    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FireworkChargeItem(std::string const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _initFireworkChargeItem(
        ::ItemStackBase&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
    );

    MCNAPI static void appendColors(::Bedrock::Safety::RedactableString&, std::vector<uchar> const&);

    MCNAPI static void
    getFormattedHoverText(::CompoundTag const&, ::Bedrock::Safety::RedactableString&, std::string const&);

    MCNAPI static ::ItemInstance const& initFireworkChargeItem(
        ::ItemInstance&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
    );

    MCNAPI static ::ItemStack const& initFireworkChargeItem(
        ::ItemStack&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& TAG_EXPLOSION();

    MCNAPI static std::string const& TAG_E_COLORS();

    MCNAPI static std::string const& TAG_E_FADECOLORS();

    MCNAPI static std::string const& TAG_E_FLICKER();

    MCNAPI static std::string const& TAG_E_TRAIL();

    MCNAPI static std::string const& TAG_E_TYPE();
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
    MCNAPI bool $isDyeable() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidAuxValue(int) const;

    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCNAPI bool $hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
