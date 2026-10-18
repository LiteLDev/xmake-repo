#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/DismountMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/SeatDescription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/HashStringHashGreater.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct SeatDescription;
// clang-format on
#endif // @header-generator platform

struct RideableComponentData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mSeatCount;
    ::ll::TypedStorage<4, 4, int> mControllingSeat;
    ::ll::TypedStorage<1, 1, bool> mSkipInteractIfCrouching;
    ::ll::TypedStorage<8, 24, std::vector<SeatDescription>> mSeats;
    ::ll::TypedStorage<8, 24, std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>> mFamilyTypes;
    ::ll::TypedStorage<8, 24, std::string> mInteractText;
    ::ll::TypedStorage<1, 1, bool> mPullInEntities;
    ::ll::TypedStorage<1, 1, bool> mPassengerCanPick;
    ::ll::TypedStorage<4, 4, float> mPassengerMaxWidth;
    ::ll::TypedStorage<1, 1, ::DismountMode> mDismountMode;
    ::ll::TypedStorage<8, 24, std::string> mOnRiderEnterEvent;
    ::ll::TypedStorage<8, 24, std::string> mOnRiderExitEvent;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                        mSeatCount;
    ::ll::TypedStorage<4, 4, int>                                                        mControllingSeat;
    ::ll::TypedStorage<1, 1, bool>                                                       mSkipInteractIfCrouching;
    ::ll::TypedStorage<8, 24, ::std::vector<::SeatDescription>>                          mSeats;
    ::ll::TypedStorage<8, 16, ::std::set<::HashedString, ::Util::HashStringHashGreater>> mFamilyTypes;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mInteractText;
    ::ll::TypedStorage<1, 1, bool>                                                       mPullInEntities;
    ::ll::TypedStorage<1, 1, bool>                                                       mPassengerCanPick;
    ::ll::TypedStorage<4, 4, float>                                                      mPassengerMaxWidth;
    ::ll::TypedStorage<1, 1, ::DismountMode>                                             mDismountMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mOnRiderEnterEvent;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mOnRiderExitEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RideableComponentData& operator=(RideableComponentData const&);
    RideableComponentData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RideableComponentData(::RideableComponentData const&);
#else // @header-generator platform
    MCAPI RideableComponentData(::RideableComponentData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RideableComponentData& operator=(::RideableComponentData&&);
#else // @header-generator platform
    MCAPI ::RideableComponentData& operator=(::RideableComponentData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~RideableComponentData();
#else // @header-generator platform
    MCAPI ~RideableComponentData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::RideableComponentData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::RideableComponentData const&);
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
