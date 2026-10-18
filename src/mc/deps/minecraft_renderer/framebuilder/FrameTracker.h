#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/SlidingWindow.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
class FrameTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTargetFrameTime;
    ::ll::TypedStorage<8, 8, ulong> mMinFrames;
    ::ll::UntypedStorage<8, 1616>   mFrames;
    // NOLINTEND
};
#else // @header-generator platform
class FrameTracker {};
#endif // @header-generator platform

} // namespace mce::framebuilder
