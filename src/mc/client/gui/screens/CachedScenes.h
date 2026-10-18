#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LayoutManager;
class TaskGroup;
class UIControlFactory;
class VisualTree;
struct CachedScene;
namespace Json { class Value; }
// clang-format on

class CachedScenes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                       mLowMemoryDevice;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mDestroyScreenTaskGroup;
    ::ll::UntypedStorage<8, 24>                          mCachedScene;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedScenes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CachedScenes(bool);

    MCNAPI void
        cacheVisualTree(std::unique_ptr<VisualTree>, std::shared_ptr<UIControlFactory>, std::unique_ptr<LayoutManager>);

    MCNAPI void clearCache();

    MCNAPI std::unique_ptr<CachedScene> getCachedScene(::Json::Value const&);

    MCNAPI bool hasCachedScene(::Json::Value const&) const;

    MCNAPI ~CachedScenes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class LayoutManager;
class TaskGroup;
class UIControlFactory;
class VisualTree;
struct CachedScene;
// clang-format on

class CachedScenes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                         mLowMemoryDevice;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                               mDestroyScreenTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::map<::Json::Value, ::std::unique_ptr<::CachedScene>>> mCachedScene;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedScenes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CachedScenes(bool lowMemoryDevice);

    MCAPI void cacheVisualTree(
        ::std::unique_ptr<::VisualTree>       screen,
        ::std::shared_ptr<::UIControlFactory> factory,
        ::std::unique_ptr<::LayoutManager>    layoutManager
    );

    MCAPI ~CachedScenes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool lowMemoryDevice);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class CachedScenes {};
#endif // @header-generator platform
#endif // @header-generator platform
