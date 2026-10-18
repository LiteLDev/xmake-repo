#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
class ItemInstance;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class ItemStackBase;
#if defined(LL_PLAT_A) // @header-generator platform
class Tag;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BannerPattern : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>        mID;
    ::ll::UntypedStorage<8, 32>            mPattern;
    ::ll::UntypedStorage<8, 48>            mIngredientItemFunctor;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mNameID;
    ::ll::TypedStorage<2, 2, short>        mPatternItemType;
    ::ll::TypedStorage<1, 1, bool>         mIgnoreAux;
    ::ll::UntypedStorage<1, 13>            mHiddenFromCrafting;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                           mID;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mPattern;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack()>> mIngredientItemFunctor;
    ::ll::TypedStorage<8, 32, ::std::string>                  mName;
    ::ll::TypedStorage<8, 32, ::std::string>                  mNameID;
    ::ll::TypedStorage<2, 2, short>                           mPatternItemType;
    ::ll::TypedStorage<1, 1, bool>                            mIgnoreAux;
    ::ll::TypedStorage<1, 1, bool>                            mHiddenFromCrafting;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    BannerPattern& operator=(BannerPattern const&);
#else // @header-generator platform
#endif // @header-generator platform
    BannerPattern();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerPattern();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BannerPattern(std::string const&, std::string const&, bool);
#else // @header-generator platform
    MCAPI BannerPattern(::std::string const& name, ::std::string const& nameID, bool hiddenFromCrafting);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BannerPattern(std::string const&, std::string const&, std::function<ItemStack()>&&, short);
#else // @header-generator platform
    MCAPI BannerPattern(
        ::std::string const&             name,
        ::std::string const&             nameID,
        ::std::function<::ItemStack()>&& itemFunctor,
        short                            patternItemType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    BannerPattern(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI BannerPattern(
        ::std::string const&             name,
        ::std::string const&             nameID,
        ::std::function<::ItemStack()>&& itemFunctor,
        short                            patternItemType,
        bool                             ignoreAux
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BannerPattern(std::string const&, std::string const&, std::function<ItemStack()>&&, short, bool);
#else // @header-generator platform
    MCAPI BannerPattern(
        ::std::string const& name,
        ::std::string const& nameID,
        ::std::string const& row1,
        ::std::string const& row2,
        ::std::string const& row3
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIgnoreAux() const;
#else // @header-generator platform
    MCAPI bool hasPattern() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack getIngredientItem() const;

    MCNAPI std::string const& getName() const;

    MCNAPI std::string const& getNameID() const;

    MCNAPI std::vector<std::string> const& getPattern() const;

    MCNAPI bool hasPattern() const;

    MCNAPI bool isHiddenFromCrafting() const;

    MCNAPI bool matchesPatternItem(::ItemStackBase const&) const;

    MCNAPI bool requiresIngredientItem() const;

    MCNAPI bool requiresPatternItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<uchar> findPatternIndexByNameID(std::string const&);

    MCNAPI static ::ItemInstance getItemFromPattern(::BannerPattern const&);

    MCNAPI static std::optional<uchar> getPatternIndexFromName(std::string const&);

    MCNAPI static uchar getPatternIndexFromNameID(std::string const&);

    MCNAPI static std::optional<std::reference_wrapper<const std::string>> getPatternNameFromIndex(uchar);

    MCNAPI static ::CompoundTag const* tryGetPatternDataFromTag(::Tag const*);
#else // @header-generator platform
    MCAPI bool matchesPatternItem(::ItemStackBase const& item) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const* const& BASE_NAME();

    MCNAPI static char const* const& CREEPER_NAME_ID();

    MCNAPI static char const* const& CURLY_BORDER_NAME_ID();

    MCNAPI static char const* const& SQUARE_TOP_LEFT_NAME_ID();

    MCNAPI static std::vector<BannerPattern> const& mPatterns();
#else // @header-generator platform
    MCAPI static ::std::vector<::BannerPattern> const& mPatterns();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& name, ::std::string const& nameID, bool hiddenFromCrafting);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&, std::function<ItemStack()>&&, short);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&             name,
        ::std::string const&             nameID,
        ::std::function<::ItemStack()>&& itemFunctor,
        short                            patternItemType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&             name,
        ::std::string const&             nameID,
        ::std::function<::ItemStack()>&& itemFunctor,
        short                            patternItemType,
        bool                             ignoreAux
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&, std::function<ItemStack()>&&, short, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const& name,
        ::std::string const& nameID,
        ::std::string const& row1,
        ::std::string const& row2,
        ::std::string const& row3
    );
#endif // @header-generator platform
    // NOLINTEND
};
