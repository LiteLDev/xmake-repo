#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/scripting/JSON.h"

// auto generated forward declare list
// clang-format off
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameterCacheHandle; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomComponentParameterCache {
public:
    // ScriptCustomComponentParameterCache inner types declare
    // clang-format off
    struct CachedHandle;
    struct ParameterCache;
    // clang-format on

    // ScriptCustomComponentParameterCache inner types define
    struct CachedHandle {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
        ::ll::UntypedStorage<8, 32>                               mCachedParameters;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedHandle& operator=(CachedHandle const&);
        CachedHandle(CachedHandle const&);
        CachedHandle();
    };

    struct ParameterCache {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptCustomComponentParameterCache::CachedHandle>> mCachedScriptHandles;
        ::ll::TypedStorage<8, 24, ::Scripting::JSON> mPayload;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        ParameterCache& operator=(ParameterCache const&);
        ParameterCache(ParameterCache const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ParameterCache();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache>> mCache;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnReloadSubscription;
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache> mEmptyCache;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentParameterCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptCustomComponentParameterCache(::ServerScriptManagerEvents&);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    _getOrCreatePayload(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    getOrCreateParameterPayload(
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle
    registerParameterPayload(::cereal::DynamicValue const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
