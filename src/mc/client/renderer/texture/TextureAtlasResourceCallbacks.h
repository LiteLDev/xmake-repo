#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskResult;
// clang-format on

struct TextureAtlasResourceCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mThreadedCallback;
    ::ll::UntypedStorage<8, 48> mMainThreadCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasResourceCallbacks& operator=(TextureAtlasResourceCallbacks const&);
    TextureAtlasResourceCallbacks(TextureAtlasResourceCallbacks const&);
    TextureAtlasResourceCallbacks();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureAtlasResourceCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8f1589;
    ::ll::UntypedStorage<8, 64> mUnkccd709;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasResourceCallbacks& operator=(TextureAtlasResourceCallbacks const&);
    TextureAtlasResourceCallbacks(TextureAtlasResourceCallbacks const&);
    TextureAtlasResourceCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextureAtlasResourceCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TextureAtlasResourceCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
