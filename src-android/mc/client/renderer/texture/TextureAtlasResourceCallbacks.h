#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
