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
#if defined(LL_PLAT_A) // @header-generator platform
        _count          = 10,
#else // @header-generator platform
        Count           = 10,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BannerPatternItem::Type> mType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BannerPatternItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BannerPatternItem();
#else // @header-generator platform
    virtual bool isPattern() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPattern() const;

    virtual int getPatternIndex() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BannerPatternItem(std::string const&, int, ::BannerPatternItem::Type);
#else // @header-generator platform
    virtual int getPatternIndex() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string_view getItemNameIdForType(::BannerPatternItem::Type type);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPattern() const;
#else // @header-generator platform
    MCFOLD bool $isPattern() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getPatternIndex() const;
#else // @header-generator platform
    MCFOLD int $getPatternIndex() const;


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
