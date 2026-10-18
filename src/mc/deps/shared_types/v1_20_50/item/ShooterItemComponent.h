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

struct ShooterItemComponent {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    struct Ammunition;
    // clang-format on

    // ShooterItemComponent inner types define
    struct Ammunition {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 32, ::SharedTypes::Legacy::ItemDescriptor> mItem;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mItem;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                   mUseOffhand;
        ::ll::TypedStorage<1, 1, bool>                                   mSearchInventory;
        ::ll::TypedStorage<1, 1, bool>                                   mUseInCreative;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_50::ShooterItemComponent::Ammunition>> mAmmunition;
    ::ll::TypedStorage<4, 4, float>                                                                 mMaxDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                                  mChargeOnDraw;
    ::ll::TypedStorage<1, 1, bool> mScalePowerByDrawDuration;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_50::ShooterItemComponent::Ammunition>> mAmmunition;
    ::ll::TypedStorage<4, 4, float> mMaxDrawDuration;
    ::ll::TypedStorage<1, 1, bool>  mChargeOnDraw;
    ::ll::TypedStorage<1, 1, bool>  mScalePowerByDrawDuration;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_20_50::ShooterItemComponent const&) const;
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
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
