#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/IScriptItemCustomComponentSignalCollection.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubAdapter.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentAfterEventList.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptCustomComponentEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ScriptDeferredFlushTracker;
struct ItemCustomComponentData;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
namespace ScriptModuleMinecraft::Detail { struct BeforeEventExecutor; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentSignalCollection
: public ::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptCustomComponentAfterEventList> mAfterEventSignals;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 72>                                                             mAdapter;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        96,
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubAdapter<
            ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface,
            ::ComponentItem,
            ::ScriptModuleMinecraft::Detail::BeforeEventExecutor>>
        mAdapter;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentSignalCollection();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptItemCustomComponentSignalCollection();
#else // @header-generator platform
    virtual void registerClosures(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void subscribeToItemForComponent(
        ::ComponentItem&                                item,
        ::std::vector<::ItemCustomComponentData> const& components
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPreFlushAfterEvents();
#else // @header-generator platform
    virtual void clear() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPostFlushAfterEvents();
#else // @header-generator platform
    virtual void onPreFlushAfterEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerClosures(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
#else // @header-generator platform
    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void subscribeToItemForComponent(::ComponentItem&, std::vector<ItemCustomComponentData> const&);

    virtual void clear();
    // clang-format on
#else // @header-generator platform
    virtual void onPostFlushAfterEvents() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptItemCustomComponentSignalCollection(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
#else // @header-generator platform
    MCAPI explicit ScriptItemCustomComponentSignalCollection(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ScriptModuleMinecraft::ScriptItemCustomComponentInterface> const
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface> const
#endif // @header-generator platform
    _getEventMetadata();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&);
#else // @header-generator platform
    MCAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomComponentParameterCache& parameterCache);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCAPI void $registerClosures(
        ::HashedString const&                                         componentName,
        ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&& closures
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPreFlushAfterEvents();
#else // @header-generator platform
    MCAPI void
    $subscribeToItemForComponent(::ComponentItem& item, ::std::vector<::ItemCustomComponentData> const& components);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPostFlushAfterEvents();
#else // @header-generator platform
    MCAPI void $clear();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerClosures(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);
#else // @header-generator platform
    MCAPI void $onPreFlushAfterEvents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $subscribeToItemForComponent(::ComponentItem&, std::vector<ItemCustomComponentData> const&);
#else // @header-generator platform
    MCAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clear();
#else // @header-generator platform
    MCAPI void $onPostFlushAfterEvents();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
