#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/common/utility/ThreadOwnerBehavior.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Application {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, ::Bedrock::Application::ThreadOwnerBehavior T1>
class ThreadOwner {};
#else // @header-generator platform
template <typename T0, int = 0>
class ThreadOwner {
public:
    T0              mObject;
    bool            mThreadIdInitialized{};
    std::thread::id mThreadId;
    uint            mThreadCheckIndex{};

public:
    // prevent constructor by default
    ThreadOwner& operator=(ThreadOwner const&) = delete;
    ThreadOwner(ThreadOwner const&)            = delete;
    ThreadOwner()                              = delete;
};
#endif // @header-generator platform

} // namespace Bedrock::Application
