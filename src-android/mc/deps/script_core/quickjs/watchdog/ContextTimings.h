#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

namespace Scripting::QuickJS {

class ContextTimings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                                         mContextId;
    ::ll::TypedStorage<4, 4, uint>                                                           mTimeBufferIdx;
    ::ll::TypedStorage<1, 1, bool>                                                           mOutOfMemory;
    ::ll::TypedStorage<1, 1, bool>                                                           mStackOverflow;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>>       mAverageFrameTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>>       mCurrentFrameTime;
    ::ll::TypedStorage<8, 320, std::chrono::duration<long long, std::ratio<1, 1000000>>[40]> mTimeBuffer;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>>       mTimeBufferSum;
    // NOLINTEND
};

} // namespace Scripting::QuickJS
