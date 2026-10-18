#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class NetworkEnableDisableListener {
public:
    // NetworkEnableDisableListener inner types define
    enum class State : int {
        Enabled       = 0,
        Disabled      = 1,
        Uninitialized = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::NetworkEnableDisableListener::State> mState;
    ::ll::UntypedStorage<8, 24>                                     mAppPlatform;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkaf3b65;
    ::ll::UntypedStorage<8, 24> mUnk1d223d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NetworkEnableDisableListener& operator=(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener(NetworkEnableDisableListener const&);
    NetworkEnableDisableListener();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkEnableDisableListener();

    virtual void _onDisable() = 0;

    virtual void _onEnable() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkEnableDisableListener(::Bedrock::NonOwnerPointer<AppPlatform> const&);

    MCNAPI void disable();

    MCNAPI bool isDisabled() const;

    MCNAPI bool isEnabled() const;

    MCNAPI bool isNetworkAllowed() const;

    MCNAPI bool isUninitialized() const;

    MCNAPI void tryEnable();

    MCNAPI void uninitialize();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<AppPlatform> const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
