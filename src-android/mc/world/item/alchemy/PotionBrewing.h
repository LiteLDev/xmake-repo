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

    public:
        // prevent constructor by default
        Ingredient();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int getData() const;

        MCNAPI int getItemId() const;
        // NOLINTEND
    };

    template <typename T0>
    class Mix {};

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addContainerRecipe(::Item const&, ::PotionBrewing::Ingredient const&, ::Item const&);

    MCNAPI static void
    addPotionMix(::ItemDescriptor const&, ::PotionBrewing::Ingredient const&, ::ItemDescriptor const&);

    MCNAPI static ::ItemInstance getChemistryMix(::ItemDescriptor const&, ::ItemDescriptor const&);

    MCNAPI static int getFuelValue(::ItemDescriptor const&);

    MCNAPI static bool hasMix(::ItemInstance const&, ::ItemDescriptor const&);

    MCNAPI static void initPotionBrewing();

    MCNAPI static bool isFuel(::ItemDescriptor const&);

    MCNAPI static bool isIngredient(::ItemDescriptor const&);

    MCNAPI static bool isPotionIngredient(::ItemDescriptor const&);

    MCNAPI static bool isPotionRecipeInput(::ItemDescriptor const&);

    MCNAPI static ::ItemInstance mix(::ItemDescriptor const&, ::ItemInstance const&);

    MCNAPI static void shutdown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<PotionBrewing::Mix<ItemInstance>>& mChemistryMixes();

    MCNAPI static std::vector<PotionBrewing::Mix<const Item&>>& mContainerMixes();

    MCNAPI static bool& mIsInitialized();

    MCNAPI static std::vector<PotionBrewing::Mix<ItemDescriptor>>& mPotionMixes();

    MCNAPI static std::vector<PotionBrewing::Ingredient>& mValidContainers();

    MCNAPI static std::unordered_set<PotionBrewing::Ingredient>& mValidIngredients();

    MCNAPI static std::unordered_set<PotionBrewing::Ingredient>& mValidRecipeInputs();
    // NOLINTEND
};
