#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class PlatformStoreIconModel {
public:
    // PlatformStoreIconModel inner types declare
    // clang-format off
    struct PlatformStoreIconVisibility;
    // clang-format on

    // PlatformStoreIconModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PlatformStoreIconVisibility {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIsInGameBrowsing;
        ::ll::TypedStorage<1, 1, bool> mIsCheckoutInProgress;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId>                                                        mSubClientId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformStoreIconModel::PlatformStoreIconVisibility>> mIconVisibility;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformStoreIconModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updatePlatformStoreIcon();

    MCNAPI ~PlatformStoreIconModel();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& sIsIconVisible();

    MCNAPI static std::unordered_map<SubClientId, std::vector<PlatformStoreIconModel::PlatformStoreIconVisibility*>>&
    sPlatformStoreIconVisibilityStacks();

    MCNAPI static std::mutex& sStacksMutex();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PlatformStoreIconVisibility {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIsInGameBrowsing;
        ::ll::TypedStorage<1, 1, bool> mIsCheckoutInProgress;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId>                                                            mSubClientId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformStoreIconModel::PlatformStoreIconVisibility>> mIconVisibility;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformStoreIconModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlatformStoreIconModel(::SubClientId subClientId);

    MCAPI void _updatePlatformStoreIcon();

    MCAPI void setIsInGameBrowsing(bool isInGameBrowsing);

    MCAPI ~PlatformStoreIconModel();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& sIsIconVisible();

    MCAPI static ::std::
        unordered_map<::SubClientId, ::std::vector<::PlatformStoreIconModel::PlatformStoreIconVisibility*>>&
        sPlatformStoreIconVisibilityStacks();

    MCAPI static ::Bedrock::Threading::Mutex& sStacksMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubClientId subClientId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct PlatformStoreIconVisibility {};
#endif // @header-generator platform
#endif // @header-generator platform
};
