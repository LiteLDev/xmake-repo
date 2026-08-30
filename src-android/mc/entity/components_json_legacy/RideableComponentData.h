#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/DismountMode.h"
#include "mc/entity/components_json_legacy/SeatDescription.h"
#include "mc/util/HashStringHashGreater.h"

struct RideableComponentData {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    RideableComponentData& operator=(RideableComponentData const&);
    RideableComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RideableComponentData(::RideableComponentData const&);

    MCNAPI ::RideableComponentData& operator=(::RideableComponentData&&);

    MCNAPI ~RideableComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RideableComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
