#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>             mGetScreenName;
    ::ll::TypedStorage<8, 64, ::std::function<::ScreenControllerProxy*()>>  mGetController;
    ::ll::TypedStorage<8, 64, ::std::function<::ScreenViewProxy*()>>        mGetScreenView;
    ::ll::TypedStorage<8, 64, ::std::function<::OreUI::IViewTestHelper*()>> mGetOreUIViewTestHelper;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>             mGetRoute;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractSceneProxyCallbacks& operator=(AbstractSceneProxyCallbacks const&);
    AbstractSceneProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AbstractSceneProxyCallbacks(::AbstractSceneProxyCallbacks const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::AbstractSceneProxyCallbacks const&);
    // NOLINTEND
};
#else // @header-generator platform
struct AbstractSceneProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
