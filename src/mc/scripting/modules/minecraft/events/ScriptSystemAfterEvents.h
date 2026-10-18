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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemLevelEventListener; }
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ModuleDescriptor; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptSystemAfterEvents : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptSystemAfterEvents> {
#else // @header-generator platform
class ScriptSystemAfterEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptSystemAfterEvents> {
#endif // @header-generator platform
public:
    // ScriptSystemAfterEvents inner types declare
    // clang-format off
    class ScriptSystemAfterEventsDeferredEventListener;
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptSystemAfterEvents inner types define
    class ScriptSystemAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
#if defined(LL_PLAT_A) // @header-generator platform
          ScriptModuleMinecraft::ScriptSystemAfterEvents> {
    public:
        // prevent constructor by default
        ScriptSystemAfterEventsDeferredEventListener();

#else // @header-generator platform
          ::ScriptModuleMinecraft::ScriptSystemAfterEvents> {
#endif // @header-generator platform
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~ScriptSystemAfterEventsDeferredEventListener();

        virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);
        // NOLINTEND
#else // @header-generator platform
        MCAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
        // NOLINTEND
    };

    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 8, ulong>        count;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 8, uint64>         count;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::UntypedStorage<8, 16> mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>> mLevel;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                                   mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents>> mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>>                                                   mLevel;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListener;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptSystemLevelEventListener>> mSystemLevelEventListener;
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::ScriptTickSignal> mScriptTickSignal;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptSystemLevelEventListener>>
                                                                             mSystemLevelEventListener;
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::ScriptTickSignal>     mScriptTickSignal;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptAfterEventList> mEvents;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptSystemAfterEvents::ScriptSystemAfterEventsDeferredEventListener>> mScriptDeferredEventListener;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::ScriptModuleMinecraft::ScriptSystemAfterEvents::ScriptSystemAfterEventsDeferredEventListener>>
        mScriptDeferredEventListener;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystemAfterEvents& operator=(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptSystemAfterEvents(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
#else // @header-generator platform
    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptSystemAfterEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ScriptModuleMinecraft::ScriptSystemAfterEvents::SignalNameSubscriberCount>
           getFineGrainedSignalSubscriberStats() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptTickSignal& getScriptTickSignal();

    MCNAPI ::ScriptModuleMinecraft::ScriptAfterEventList const& getSignalList() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptSystemAfterEvents&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptSystemAfterEvents&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerListener(
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptSystemAfterEvents>,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&
#else // @header-generator platform
    MCAPI void registerListener(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents> handle,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&                             listeners
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptSystemAfterEvents();
#else // @header-generator platform
    MCAPI ~ScriptSystemAfterEvents();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&);

    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& getMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& getMetadata();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
