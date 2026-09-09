#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
