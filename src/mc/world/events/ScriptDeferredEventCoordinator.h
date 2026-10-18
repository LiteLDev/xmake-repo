#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/EventCoordinatorNoTracking.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/ScriptDeferredEventListener.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ScriptDeferredEventListener;
#endif // @header-generator platform
class ScriptDeferredFlushTracker;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Json { class Value; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptDeferredEventCoordinator : public ::EventCoordinatorNoTracking<ScriptDeferredEventListener> {
#else // @header-generator platform
class ScriptDeferredEventCoordinator : public ::EventCoordinatorNoTracking<::ScriptDeferredEventListener> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> mExecuteEventsFn;
        ::ll::UntypedStorage<8, 48> mDocumentationGenerationFn;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, void (ScriptDeferredEventCoordinator::*)(::ScriptDeferredFlushTracker&)>
            mExecuteEventsFn;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Scripting::ModuleDescriptor const&, ::Json::Value&)>>
            mDocumentationGenerationFn;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        DocumentableEventExecution& operator=(DocumentableEventExecution const&);
        DocumentableEventExecution();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (ScriptDeferredFlushTracker&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mFlushCoroutinePublisher;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::ScriptDeferredFlushTracker&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
        mFlushCoroutinePublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDeferredEventCoordinator();
#else // @header-generator platform
    virtual ~ScriptDeferredEventCoordinator() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptDeferredEventCoordinator();
#else // @header-generator platform
    MCAPI ScriptDeferredEventCoordinator();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCAPI void _sendFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCAPI void _sendFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCAPI void _sendFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCAPI void _sendFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Publisher<
        void(ScriptDeferredFlushTracker&),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>&
    getFlushingCoroutinePublisher();
#else // @header-generator platform
    MCAPI void _sendFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendAllDeferredEvents();
#else // @header-generator platform
    MCAPI void _sendFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void _sendFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI void sendAllDeferredEvents();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ScriptDeferredEventCoordinator::DocumentableEventExecution> const& sEventExecutionOrder();
#else // @header-generator platform
    MCAPI static ::std::vector<::ScriptDeferredEventCoordinator::DocumentableEventExecution> const&
    sEventExecutionOrder();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
