#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/world/events/EventCoordinatorNoTracking.h"
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Json { class Value; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptDeferredEventCoordinator : public ::EventCoordinatorNoTracking<ScriptDeferredEventListener> {
public:
    // ScriptDeferredEventCoordinator inner types declare
    // clang-format off
    struct DocumentableEventExecution;
    // clang-format on

    // ScriptDeferredEventCoordinator inner types define
    struct DocumentableEventExecution {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mExecuteEventsFn;
        ::ll::UntypedStorage<8, 48> mDocumentationGenerationFn;
        // NOLINTEND

    public:
        // prevent constructor by default
        DocumentableEventExecution& operator=(DocumentableEventExecution const&);
        DocumentableEventExecution();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (ScriptDeferredFlushTracker&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mFlushCoroutinePublisher;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDeferredEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDeferredEventCoordinator();

    MCNAPI void _sendFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void _sendFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void _sendFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void _sendFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI ::Bedrock::PubSub::Publisher<
        void(ScriptDeferredFlushTracker&),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>&
    getFlushingCoroutinePublisher();

    MCNAPI void sendAllDeferredEvents();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<ScriptDeferredEventCoordinator::DocumentableEventExecution> const& sEventExecutionOrder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
