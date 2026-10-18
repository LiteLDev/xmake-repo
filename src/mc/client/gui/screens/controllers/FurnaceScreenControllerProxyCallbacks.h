#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContainerController;
// clang-format on

struct FurnaceScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetContainerController;
    ::ll::UntypedStorage<8, 48> mGetBurnProgress;
    ::ll::UntypedStorage<8, 48> mGetLitProgress;
    ::ll::UntypedStorage<8, 48> mIsFinished;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceScreenControllerProxyCallbacks& operator=(FurnaceScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FurnaceScreenControllerProxyCallbacks();

    MCNAPI FurnaceScreenControllerProxyCallbacks(::FurnaceScreenControllerProxyCallbacks const&);

    MCNAPI ~FurnaceScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::FurnaceScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContainerController;
// clang-format on

struct FurnaceScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ContainerController*(::std::string const&)>> mGetContainerController;
    ::ll::TypedStorage<8, 64, ::std::function<int()>>                                        mGetBurnProgress;
    ::ll::TypedStorage<8, 64, ::std::function<int()>>                                        mGetLitProgress;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string&, int&, int&)>>             mIsFinished;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceScreenControllerProxyCallbacks& operator=(FurnaceScreenControllerProxyCallbacks const&);
    FurnaceScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FurnaceScreenControllerProxyCallbacks(::FurnaceScreenControllerProxyCallbacks const&);

    MCAPI ~FurnaceScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FurnaceScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct FurnaceScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
