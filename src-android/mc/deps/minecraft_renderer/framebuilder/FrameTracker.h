#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/SlidingWindow.h"

namespace mce::framebuilder {

class FrameTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTargetFrameTime;
    ::ll::TypedStorage<8, 8, ulong> mMinFrames;
    ::ll::UntypedStorage<8, 1616>   mFrames;
    // NOLINTEND
};

} // namespace mce::framebuilder
