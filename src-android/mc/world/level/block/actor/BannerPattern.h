#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Tag;
// clang-format on

class BannerPattern : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>        mID;
    ::ll::UntypedStorage<8, 32>            mPattern;
    ::ll::UntypedStorage<8, 48>            mIngredientItemFunctor;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mNameID;
    ::ll::TypedStorage<2, 2, short>        mPatternItemType;
    ::ll::TypedStorage<1, 1, bool>         mIgnoreAux;
    ::ll::UntypedStorage<1, 13>            mHiddenFromCrafting;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerPattern& operator=(BannerPattern const&);
    BannerPattern();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerPattern();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BannerPattern(std::string const&, std::string const&, bool);

    MCNAPI BannerPattern(std::string const&, std::string const&, std::function<ItemStack()>&&, short);

    MCNAPI
    BannerPattern(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);

    MCNAPI BannerPattern(std::string const&, std::string const&, std::function<ItemStack()>&&, short, bool);

    MCNAPI bool getIgnoreAux() const;

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const* const& BASE_NAME();

    MCNAPI static char const* const& CREEPER_NAME_ID();

    MCNAPI static char const* const& CURLY_BORDER_NAME_ID();

    MCNAPI static char const* const& SQUARE_TOP_LEFT_NAME_ID();

    MCNAPI static std::vector<BannerPattern> const& mPatterns();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&, bool);

    MCNAPI void* $ctor(std::string const&, std::string const&, std::function<ItemStack()>&&, short);

    MCNAPI void*
    $ctor(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);

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
    // NOLINTEND
};
