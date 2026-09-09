#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class BannerPatternItem : public ::Item {
public:
    // BannerPatternItem inner types define
    enum class Type : int {
        CreeperCharge   = 0,
        SkullCharge     = 1,
        FlowerCharge    = 2,
        Thing           = 3,
        FieldMasoned    = 4,
        BordureIndented = 5,
        Snout           = 6,
        Globe           = 7,
        Flow            = 8,
        Guster          = 9,
        _count          = 10,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BannerPatternItem::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerPatternItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerPatternItem();

    virtual bool isPattern() const;

    virtual int getPatternIndex() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BannerPatternItem(std::string const&, int, ::BannerPatternItem::Type);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string_view getItemNameIdForType(::BannerPatternItem::Type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::BannerPatternItem::Type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isPattern() const;

    MCNAPI int $getPatternIndex() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
