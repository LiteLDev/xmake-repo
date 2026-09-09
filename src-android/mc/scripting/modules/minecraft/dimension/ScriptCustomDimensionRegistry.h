#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/platform/UUID.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionReloadNewDimensionError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomDimensionRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // ScriptCustomDimensionRegistry inner types declare
    // clang-format off
    struct ScriptCustomDimensionData;
    // clang-format on

    // ScriptCustomDimensionRegistry inner types define
    struct ScriptCustomDimensionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>         mInitialized;
        ::ll::TypedStorage<8, 16, ::mce::UUID> mPackId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnReadyForCustomDimensionRegistrationSubscription;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ScriptModuleMinecraft::ScriptCustomDimensionRegistry::ScriptCustomDimensionData>> mDimensions;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomDimensionRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptCustomDimensionRegistry();

    virtual void _onReload();

    virtual void _onScriptModuleStartupComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomDimensionRegistry(::ServerScriptManagerEvents&, ::DimensionManager&);

    MCNAPI void _onReadyForCustomDimensionRegistration(::DimensionManager&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents&, ::DimensionManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onReload();

    MCNAPI void $_onScriptModuleStartupComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
