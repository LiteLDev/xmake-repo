#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemDescriptor;
class ItemInstance;
// clang-format on

class PotionBrewing {
public:
    // PotionBrewing inner types declare
    // clang-format off
    class Ingredient;
    template<typename T0> class Mix;
    // clang-format on

    // PotionBrewing inner types define
    class Ingredient {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mItemId;
        ::ll::TypedStorage<4, 4, int> mData;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Ingredient();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int getData() const;

        MCNAPI int getItemId() const;
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

    template <typename T0>
    class Mix {};

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addContainerRecipe(::Item const&, ::PotionBrewing::Ingredient const&, ::Item const&);
#else // @header-generator platform
    MCAPI static void
    addContainerRecipe(::Item const& from, ::PotionBrewing::Ingredient const& ingredient, ::Item const& to);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    addPotionMix(::ItemDescriptor const&, ::PotionBrewing::Ingredient const&, ::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static void addPotionMix(
        ::ItemDescriptor const&            from,
        ::PotionBrewing::Ingredient const& ingredient,
        ::ItemDescriptor const&            to
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemInstance getChemistryMix(::ItemDescriptor const&, ::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static ::ItemInstance getChemistryMix(::ItemDescriptor const& from, ::ItemDescriptor const& ingredient);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getFuelValue(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static int getFuelValue(::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool hasMix(::ItemInstance const&, ::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static bool hasMix(::ItemInstance const& source, ::ItemDescriptor const& ingredient);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initPotionBrewing();
#else // @header-generator platform
    MCAPI static void initPotionBrewing();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isFuel(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static bool isFuel(::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isIngredient(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static bool isIngredient(::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isPotionIngredient(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static bool isPotionIngredient(::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isPotionRecipeInput(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI static bool isPotionRecipeInput(::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemInstance mix(::ItemDescriptor const&, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI static ::ItemInstance mix(::ItemDescriptor const& ingredient, ::ItemInstance const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void shutdown();
#else // @header-generator platform
    MCAPI static void shutdown();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<PotionBrewing::Mix<ItemInstance>>& mChemistryMixes();
#else // @header-generator platform
    MCAPI static ::std::vector<::PotionBrewing::Mix<::ItemInstance>>& mChemistryMixes();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<PotionBrewing::Mix<const Item&>>& mContainerMixes();
#else // @header-generator platform
    MCAPI static ::std::vector<::PotionBrewing::Mix<::Item const&>>& mContainerMixes();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool& mIsInitialized();
#else // @header-generator platform
    MCAPI static ::std::vector<::PotionBrewing::Mix<::ItemDescriptor>>& mPotionMixes();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<PotionBrewing::Mix<ItemDescriptor>>& mPotionMixes();
#else // @header-generator platform
    MCAPI static ::std::vector<::PotionBrewing::Ingredient>& mValidContainers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<PotionBrewing::Ingredient>& mValidContainers();
#else // @header-generator platform
    MCAPI static ::std::unordered_set<::PotionBrewing::Ingredient>& mValidIngredients();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_set<PotionBrewing::Ingredient>& mValidIngredients();

    MCNAPI static std::unordered_set<PotionBrewing::Ingredient>& mValidRecipeInputs();
#else // @header-generator platform
    MCAPI static ::std::unordered_set<::PotionBrewing::Ingredient>& mValidRecipeInputs();
#endif // @header-generator platform
    // NOLINTEND
};
