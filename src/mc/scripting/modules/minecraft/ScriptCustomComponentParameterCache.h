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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 32>                               mCachedParameters;
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            32,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters>>
            mCachedParameters;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        CachedHandle& operator=(CachedHandle const&);
        CachedHandle(CachedHandle const&);
        CachedHandle();
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct ParameterCache {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptCustomComponentParameterCache::CachedHandle>> mCachedScriptHandles;
        ::ll::TypedStorage<8, 24, ::Scripting::JSON> mPayload;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            24,
            ::std::vector<::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::CachedHandle>>
                                                     mCachedScriptHandles;
        ::ll::TypedStorage<8, 32, ::Scripting::JSON> mPayload;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ParameterCache& operator=(ParameterCache const&);
        ParameterCache(ParameterCache const&);
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~ParameterCache();
#else // @header-generator platform
        MCAPI ~ParameterCache();
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

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache>> mCache;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint64, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache>>
                                                               mCache;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnReloadSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache> mEmptyCache;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache> mEmptyCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentParameterCache();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptCustomComponentParameterCache(::ServerScriptManagerEvents&);
#else // @header-generator platform
    MCAPI explicit ScriptCustomComponentParameterCache(::ServerScriptManagerEvents& events);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
#endif // @header-generator platform
    _getOrCreatePayload(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache::ParameterCache& cache,
        ::Scripting::WeakLifetimeScope const&                                         scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
#endif // @header-generator platform
    getOrCreateParameterPayload(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle const& handle,
        ::Scripting::WeakLifetimeScope const&                                     scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle
    registerParameterPayload(::cereal::DynamicValue const&);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle
    registerParameterPayload(::cereal::DynamicValue const& payload);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerScriptManagerEvents&);
#else // @header-generator platform
    MCAPI void* $ctor(::ServerScriptManagerEvents& events);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
