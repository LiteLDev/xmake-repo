#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::Legacy { struct ItemDescriptor; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct PickupItemsGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                              mSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                               mTrackTarget;
    ::ll::TypedStorage<4, 4, int>                                                mMaxDist;
    ::ll::TypedStorage<4, 4, int>                                                mSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                              mGoalRadius;
    ::ll::TypedStorage<1, 1, bool>                                               mPickupBasedOnChance;
    ::ll::TypedStorage<1, 1, bool>                                               mCanPickupAnyItem;
    ::ll::TypedStorage<4, 4, int>                                                mTimeoutAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                                               mCanPickupToHandOrEquipment;
    ::ll::TypedStorage<1, 1, bool>                                               mPickupSameItemsAsInHand;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnStartEvent;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnEndEvent;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>>  mExcludedItemsList;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                 mSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                                  mTrackTarget;
    ::ll::TypedStorage<4, 4, int>                                                   mMaxDist;
    ::ll::TypedStorage<4, 4, int>                                                   mSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                                 mGoalRadius;
    ::ll::TypedStorage<1, 1, bool>                                                  mPickupBasedOnChance;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanPickupAnyItem;
    ::ll::TypedStorage<4, 4, int>                                                   mTimeoutAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanPickupToHandOrEquipment;
    ::ll::TypedStorage<1, 1, bool>                                                  mPickupSameItemsAsInHand;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>    mOnStartEvent;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>    mOnEndEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mExcludedItemsList;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    PickupItemsGoalDefinition& operator=(PickupItemsGoalDefinition const&);
#else // @header-generator platform
#endif // @header-generator platform
    PickupItemsGoalDefinition(PickupItemsGoalDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PickupItemsGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::PickupItemsGoalDefinition&
#else // @header-generator platform
    MCAPI PickupItemsGoalDefinition(::SharedTypes::v1_26_20::PickupItemsGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_20::PickupItemsGoalDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_26_20::PickupItemsGoalDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_20::PickupItemsGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_20::PickupItemsGoalDefinition&
    operator=(::SharedTypes::v1_26_20::PickupItemsGoalDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PickupItemsGoalDefinition();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_20::PickupItemsGoalDefinition const&) const;

    MCAPI ~PickupItemsGoalDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::PickupItemsGoalDefinition&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
