#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LayoutManager;
class UIControlFactory;
class VisualTree;
// clang-format on

struct CachedScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<VisualTree>>        mVisualTree;
    ::ll::TypedStorage<8, 16, std::shared_ptr<UIControlFactory>> mControlFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LayoutManager>>     mLayoutManager;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedScene();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CachedScene();
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
class LayoutManager;
class UIControlFactory;
class VisualTree;
// clang-format on

struct CachedScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VisualTree>>        mVisualTree;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControlFactory>> mControlFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LayoutManager>>     mLayoutManager;
    // NOLINTEND
};
#else // @header-generator platform
struct CachedScene {};
#endif // @header-generator platform
#endif // @header-generator platform
