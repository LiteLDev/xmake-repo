#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ScriptDeferredFlushTracker {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mWorkDone;
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Publisher<void (ScriptDeferredFlushTracker&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>&> mFlushingCoroutinePublisher;
    ::ll::TypedStorage<1, 1, bool> mFlushingCoroutines;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDeferredFlushTracker& operator=(ScriptDeferredFlushTracker const&);
    ScriptDeferredFlushTracker(ScriptDeferredFlushTracker const&);
    ScriptDeferredFlushTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onCoroutineExecuted();

    MCNAPI void onEventSignalExecuted();

    MCNAPI void onSystemRunTaskExecuted();
    // NOLINTEND
};
