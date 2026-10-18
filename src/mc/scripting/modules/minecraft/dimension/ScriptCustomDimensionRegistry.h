#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/UUID.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
struct ServerScriptManagerEvents;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionInvalidRegistryError; }
namespace ScriptModuleMinecraft { struct ScriptCustomDimensionReloadNewDimensionError; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnReadyForCustomDimensionRegistrationSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ScriptModuleMinecraft::ScriptCustomDimensionRegistry::ScriptCustomDimensionData>> mDimensions;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::ScriptModuleMinecraft::ScriptCustomDimensionRegistry::ScriptCustomDimensionData>>
        mDimensions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomDimensionRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptCustomDimensionRegistry();
#else // @header-generator platform
    virtual void _onReload() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onReload();

    virtual void _onScriptModuleStartupComplete();
#else // @header-generator platform
    virtual void _onScriptModuleStartupComplete() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptCustomDimensionRegistry(::ServerScriptManagerEvents&, ::DimensionManager&);
#else // @header-generator platform
    MCAPI ScriptCustomDimensionRegistry(::ServerScriptManagerEvents& events, ::DimensionManager& dimensionManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onReadyForCustomDimensionRegistration(::DimensionManager&);
#else // @header-generator platform
    MCAPI void _onReadyForCustomDimensionRegistration(::DimensionManager& dimensionManager);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerScriptManagerEvents&, ::DimensionManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ServerScriptManagerEvents& events, ::DimensionManager& dimensionManager);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onReload();
#else // @header-generator platform
    MCAPI void $_onReload();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onScriptModuleStartupComplete();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_onScriptModuleStartupComplete();
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

} // namespace ScriptModuleMinecraft
