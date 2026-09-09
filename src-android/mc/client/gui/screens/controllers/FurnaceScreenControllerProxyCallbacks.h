#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
