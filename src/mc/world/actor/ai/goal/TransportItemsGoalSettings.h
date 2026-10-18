#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/BlockDescriptor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on
#endif // @header-generator platform

struct TransportItemsGoalSettings {
public:
    // TransportItemsGoalSettings inner types define
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
#else // @header-generator platform
    enum class SearchStrategy : int {
        Nearest = 0,
        Random  = 1,
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>                mSourceContainerTypes;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>                mDestinationContainerTypes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>            mSourceContainerTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>            mDestinationContainerTypes;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                         mMaxStackSize;
    ::ll::TypedStorage<4, 4, float>                                        mInteractionTime;
    ::ll::TypedStorage<1, 1, bool>                                         mAllowSimultaneousInteraction;
    ::ll::TypedStorage<4, 4, ::TransportItemsGoalSettings::SearchStrategy> mSearchStrategy;
    ::ll::TypedStorage<4, 8, ::Vec2>                                       mSearchDistance;
    ::ll::TypedStorage<4, 4, uint>                                         mMaxVisitedContainers;
    ::ll::TypedStorage<4, 4, uint>                                         mIdleCooldown;
    ::ll::TypedStorage<4, 4, ::TransportItemsGoalSettings::PlaceStrategy>  mPlaceStrategy;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>                 mAllowedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>                 mDisallowedItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>             mAllowedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>             mDisallowedItems;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TransportItemsGoalSettings& operator=(TransportItemsGoalSettings const&);
    TransportItemsGoalSettings(TransportItemsGoalSettings const&);
    TransportItemsGoalSettings();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TransportItemsGoalSettings();
#else // @header-generator platform
    MCAPI ~TransportItemsGoalSettings();
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
