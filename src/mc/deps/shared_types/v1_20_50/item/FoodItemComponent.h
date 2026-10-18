#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_20_50 {

struct FoodItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Legacy::ItemDescriptor> mUsingConvertsTo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mUsingConvertsTo;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                    mNutrition;
    ::ll::TypedStorage<4, 4, float>                                  mSaturationModifier;
    ::ll::TypedStorage<1, 1, bool>                                   mCanAlwaysEat;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FoodItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_20_50
