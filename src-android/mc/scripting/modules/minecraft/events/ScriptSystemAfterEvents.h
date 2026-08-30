#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/ScriptTickSignal.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventList.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
class ServerLevel;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemLevelEventListener; }
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemAfterEvents : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptSystemAfterEvents> {
public:
    // ScriptSystemAfterEvents inner types declare
    // clang-format off
    class ScriptSystemAfterEventsDeferredEventListener;
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptSystemAfterEvents inner types define
    class ScriptSystemAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ScriptModuleMinecraft::ScriptSystemAfterEvents> {
    public:
        // prevent constructor by default
        ScriptSystemAfterEventsDeferredEventListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ScriptSystemAfterEventsDeferredEventListener();

        virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 8, ulong>        count;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 16> mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptSystemLevelEventListener>> mSystemLevelEventListener;
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::ScriptTickSignal> mScriptTickSignal;
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptAfterEventList> mEvents;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptSystemAfterEvents::ScriptSystemAfterEventsDeferredEventListener>> mScriptDeferredEventListener;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystemAfterEvents& operator=(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSystemAfterEvents(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);

    MCNAPI std::vector<ScriptModuleMinecraft::ScriptSystemAfterEvents::SignalNameSubscriberCount>
           getFineGrainedSignalSubscriberStats() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptTickSignal& getScriptTickSignal();

    MCNAPI ::ScriptModuleMinecraft::ScriptAfterEventList const& getSignalList() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptSystemAfterEvents&
    operator=(::ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

    MCNAPI void registerListener(
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptSystemAfterEvents>,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&
    );

    MCNAPI ~ScriptSystemAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);

    MCNAPI static void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&);

    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& getMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
