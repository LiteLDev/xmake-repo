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
    ::ll::UntypedStorage<8, 72>                                                             mAdapter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentSignalCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptItemCustomComponentSignalCollection();

    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onPreFlushAfterEvents();

    virtual void onPostFlushAfterEvents();

    virtual void registerClosures(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);

    virtual void subscribeToItemForComponent(::ComponentItem&, std::vector<ItemCustomComponentData> const&);

    virtual void clear();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptItemCustomComponentSignalCollection(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptCustomComponentEventMetadata<
        ScriptModuleMinecraft::ScriptItemCustomComponentInterface> const
    _getEventMetadata();

    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);

    MCNAPI static void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onPreFlushAfterEvents();

    MCNAPI void $onPostFlushAfterEvents();

    MCNAPI void $registerClosures(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&);

    MCNAPI void $subscribeToItemForComponent(::ComponentItem&, std::vector<ItemCustomComponentData> const&);

    MCNAPI void $clear();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
