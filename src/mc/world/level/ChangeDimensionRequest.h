#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class ChangeDimensionRequest {
public:
    // ChangeDimensionRequest inner types define
    enum class State : int {
        PrepareRegion     = 0,
        WaitingForChunks  = 1,
        WaitingForRespawn = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ChangeDimensionRequest::State> mState;
    ::ll::TypedStorage<4, 4, ::DimensionType>                 mFromDimensionId;
    ::ll::TypedStorage<4, 4, ::DimensionType>                 mToDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mFromLocation;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mToLocation;
    ::ll::TypedStorage<1, 1, bool>                            mUsePortal;
    ::ll::TypedStorage<1, 1, bool>                            mRespawn;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>>    mAgentTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ChangeDimensionRequest& operator=(ChangeDimensionRequest const&);
    ChangeDimensionRequest(ChangeDimensionRequest const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChangeDimensionRequest();

    MCNAPI ChangeDimensionRequest(::ChangeDimensionRequest&&);

    MCNAPI ChangeDimensionRequest(::DimensionType, ::DimensionType, ::Vec3, ::Vec3, bool, bool);

    MCNAPI ::ChangeDimensionRequest& operator=(::ChangeDimensionRequest&&);

    MCNAPI ~ChangeDimensionRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ChangeDimensionRequest&&);

    MCNAPI void* $ctor(::DimensionType, ::DimensionType, ::Vec3, ::Vec3, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ChangeDimensionRequest::State>  mState;
    ::ll::TypedStorage<4, 4, ::DimensionType>                  mFromDimensionId;
    ::ll::TypedStorage<4, 4, ::DimensionType>                  mToDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mFromLocation;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mToLocation;
    ::ll::TypedStorage<1, 1, bool>                             mUsePortal;
    ::ll::TypedStorage<1, 1, bool>                             mRespawn;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mAgentTag;
#endif // @header-generator platform
    // NOLINTEND
};
