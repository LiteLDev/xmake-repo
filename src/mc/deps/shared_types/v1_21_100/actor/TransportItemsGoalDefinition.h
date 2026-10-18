#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::Legacy { struct ItemDescriptor; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct TransportItemsGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // TransportItemsGoalDefinition inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SearchStrategy : int {
        Nearest = 0,
        Random  = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class PlaceStrategy : int {
        Any                 = 0,
        WithMatching        = 1,
        WithMatchingOrEmpty = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockDescriptorVec = std::vector<SharedTypes::Legacy::BlockDescriptor>;
#else // @header-generator platform
    enum class SearchStrategy : int {
        Nearest = 0,
        Random  = 1,
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ItemDescriptorVec = std::vector<SharedTypes::Legacy::ItemDescriptor>;
#else // @header-generator platform
    using BlockDescriptorVec = ::std::vector<::SharedTypes::Legacy::BlockDescriptor>;

    using ItemDescriptorVec = ::std::vector<::SharedTypes::Legacy::ItemDescriptor>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mSourceContainerTypes;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mDestinationContainerTypes;
    ::ll::TypedStorage<4, 4, uint>                                               mMaxStackSize;
    ::ll::TypedStorage<4, 4, float>                                              mInteractionTime;
    ::ll::TypedStorage<1, 1, bool>                                               mAllowSimultaneousInteraction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mSourceContainerTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mDestinationContainerTypes;
    ::ll::TypedStorage<4, 4, uint>                                                   mMaxStackSize;
    ::ll::TypedStorage<4, 4, float>                                                  mInteractionTime;
    ::ll::TypedStorage<1, 1, bool>                                                   mAllowSimultaneousInteraction;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_100::TransportItemsGoalDefinition::SearchStrategy> mSearchStrategy;
    ::ll::TypedStorage<4, 8, ::Vec2>                                                                 mSearchDistance;
    ::ll::TypedStorage<4, 4, uint> mMaxVisitedContainers;
    ::ll::TypedStorage<4, 4, uint> mInitialCooldown;
    ::ll::TypedStorage<4, 4, uint> mIdleCooldown;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_100::TransportItemsGoalDefinition::PlaceStrategy> mPlaceStrategy;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>>                     mAllowedItems;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>>                     mDisallowedItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>>                 mAllowedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>>                 mDisallowedItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TransportItemsGoalDefinition& operator=(TransportItemsGoalDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
    TransportItemsGoalDefinition(TransportItemsGoalDefinition const&);
#else // @header-generator platform
    TransportItemsGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_100::TransportItemsGoalDefinition&
#else // @header-generator platform
    MCAPI TransportItemsGoalDefinition(::SharedTypes::v1_21_100::TransportItemsGoalDefinition const&);

    MCAPI ::SharedTypes::v1_21_100::TransportItemsGoalDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_21_100::TransportItemsGoalDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_100::TransportItemsGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_100::TransportItemsGoalDefinition const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TransportItemsGoalDefinition();
#else // @header-generator platform
    MCAPI ~TransportItemsGoalDefinition();
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
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec2 const& SEARCH_DISTANCE();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_100::TransportItemsGoalDefinition const&);
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

} // namespace SharedTypes::v1_21_100
