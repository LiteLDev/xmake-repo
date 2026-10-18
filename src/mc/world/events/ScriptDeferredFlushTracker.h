#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ScriptDeferredFlushTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mWorkDone;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Publisher<void (ScriptDeferredFlushTracker&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>&> mFlushingCoroutinePublisher;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
        ::Bedrock::PubSub::
            Publisher<void(::ScriptDeferredFlushTracker&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>&>
                                   mFlushingCoroutinePublisher;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mFlushingCoroutines;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDeferredFlushTracker& operator=(ScriptDeferredFlushTracker const&);
    ScriptDeferredFlushTracker(ScriptDeferredFlushTracker const&);
    ScriptDeferredFlushTracker();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onCoroutineExecuted();

    MCNAPI void onEventSignalExecuted();

    MCNAPI void onSystemRunTaskExecuted();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
