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
#if defined(LL_PLAT_A) // @header-generator platform
    enum Shape : uint {
        SHAPE_NONE         = 0,
        SHAPE_LARGE_BALL   = 1,
        SHAPE_STAR         = 2,
        SHAPE_HEAD_CREEPER = 3,
        SHAPE_BURST        = 4,
        SHAPE_COUNT        = 5,
#else // @header-generator platform
    enum class Shape : int {
        None        = 0,
        LargeBall   = 1,
        Star        = 2,
        HeadCreeper = 3,
        Burst       = 4,
        Count       = 5,
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FireworkChargeItem();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FireworkChargeItem();
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           advancedToolTips
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDyeable() const;
#else // @header-generator platform
    virtual bool hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    virtual bool isDyeable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidAuxValue(int) const;
#else // @header-generator platform
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FireworkChargeItem(std::string const&, int);
#else // @header-generator platform
    virtual bool isValidAuxValue(int auxValue) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _initFireworkChargeItem(
        ::ItemStackBase&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
#else // @header-generator platform
    MCAPI static void _initFireworkChargeItem(
        ::ItemStackBase&            itemInstance,
        ::FireworkChargeItem::Shape shape,
        ::std::vector<uchar>        colors,
        ::std::vector<uchar>        fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void appendColors(::Bedrock::Safety::RedactableString&, std::vector<uchar> const&);
#else // @header-generator platform
    MCAPI static void
    appendColors(::Bedrock::Safety::RedactableString& hovertext, ::std::vector<uchar> const& colorList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    getFormattedHoverText(::CompoundTag const&, ::Bedrock::Safety::RedactableString&, std::string const&);

    MCNAPI static ::ItemInstance const& initFireworkChargeItem(
        ::ItemInstance&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
#else // @header-generator platform
    MCAPI static void getFormattedHoverText(
        ::CompoundTag const&                 explosion,
        ::Bedrock::Safety::RedactableString& hovertext,
        ::std::string const&                 indent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemStack const& initFireworkChargeItem(
        ::ItemStack&,
        ::FireworkChargeItem::Shape,
        std::vector<uchar>,
        std::vector<uchar>,
        bool,
        bool
#else // @header-generator platform
    MCFOLD static ::ItemInstance const& initFireworkChargeItem(
        ::ItemInstance&             itemInstance,
        ::FireworkChargeItem::Shape shape,
        ::std::vector<uchar>        colors,
        ::std::vector<uchar>        fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
    );

    MCFOLD static ::ItemStack const& initFireworkChargeItem(
        ::ItemStack&                item,
        ::FireworkChargeItem::Shape shape,
        ::std::vector<uchar>        colors,
        ::std::vector<uchar>        fadeColors,
        bool                        hasTrail,
        bool                        hasFlicker
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_EXPLOSION();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_EXPLOSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_E_COLORS();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_E_COLORS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_E_FADECOLORS();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_E_FADECOLORS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_E_FLICKER();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_E_FLICKER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& TAG_E_TRAIL();
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_E_TRAIL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::string const& TAG_E_TYPE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDyeable() const;
#else // @header-generator platform
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           advancedToolTips
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    MCAPI bool $hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidAuxValue(int) const;
#else // @header-generator platform
    MCFOLD bool $isDyeable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;
#else // @header-generator platform
    MCAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;
#else // @header-generator platform
    MCFOLD bool $isValidAuxValue(int auxValue) const;


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
