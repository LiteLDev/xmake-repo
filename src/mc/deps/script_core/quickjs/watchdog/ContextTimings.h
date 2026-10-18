#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class ContextTimings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                                         mContextId;
    ::ll::TypedStorage<4, 4, uint>                                                           mTimeBufferIdx;
    ::ll::TypedStorage<1, 1, bool>                                                           mOutOfMemory;
    ::ll::TypedStorage<1, 1, bool>                                                           mStackOverflow;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>>       mAverageFrameTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>>       mCurrentFrameTime;
    ::ll::TypedStorage<8, 320, std::chrono::duration<long long, std::ratio<1, 1000000>>[40]> mTimeBuffer;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000>>>       mTimeBufferSum;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk266c9f;
    ::ll::UntypedStorage<4, 4>   mUnk3bcf5a;
    ::ll::UntypedStorage<1, 1>   mUnkbbe206;
    ::ll::UntypedStorage<1, 1>   mUnk37b26d;
    ::ll::UntypedStorage<8, 8>   mUnkb42a29;
    ::ll::UntypedStorage<8, 8>   mUnkacd550;
    ::ll::UntypedStorage<8, 320> mUnk6d5cac;
    ::ll::UntypedStorage<8, 8>   mUnk199fbf;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ContextTimings& operator=(ContextTimings const&);
    ContextTimings(ContextTimings const&);
    ContextTimings();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS
