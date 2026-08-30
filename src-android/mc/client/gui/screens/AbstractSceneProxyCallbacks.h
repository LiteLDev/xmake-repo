#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenControllerProxy;
class ScreenViewProxy;
namespace OreUI { class IViewTestHelper; }
// clang-format on

struct AbstractSceneProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetScreenName;
    ::ll::UntypedStorage<8, 48> mGetController;
    ::ll::UntypedStorage<8, 48> mGetScreenView;
    ::ll::UntypedStorage<8, 48> mGetOreUIViewTestHelper;
    ::ll::UntypedStorage<8, 48> mGetRoute;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractSceneProxyCallbacks& operator=(AbstractSceneProxyCallbacks const&);
    AbstractSceneProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AbstractSceneProxyCallbacks(::AbstractSceneProxyCallbacks const&);

    MCNAPI ~AbstractSceneProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AbstractSceneProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
