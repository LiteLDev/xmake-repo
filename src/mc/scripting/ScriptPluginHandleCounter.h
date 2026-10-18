#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ILifetimeObjectListener.h"

// auto generated forward declare list
// clang-format off
class ScriptPlugin;
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

class ScriptPluginHandleCounter : public ::Scripting::ILifetimeObjectListener {
public:
    // ScriptPluginHandleCounter inner types declare
    // clang-format off
    struct TypeStats;
    // clang-format on

    // ScriptPluginHandleCounter inner types define
    struct TypeStats {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>             name;
        ::ll::TypedStorage<8, 8, ::entt::meta_type const&> type;
        ::ll::TypedStorage<1, 1, bool>                     isBound;
        ::ll::TypedStorage<4, 4, int>                      makeObjectCount;
        ::ll::TypedStorage<4, 4, int>                      peakMakeObjectCount;
        ::ll::TypedStorage<4, 4, int>                      totalMakeObjectCount;
        ::ll::TypedStorage<8, 8, long>                     bytesUsed;
        ::ll::TypedStorage<8, 8, long>                     peakBytesUsed;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk3ade5a;
        ::ll::UntypedStorage<8, 8>  mUnk70abe5;
        ::ll::UntypedStorage<1, 1>  mUnkc4270a;
        ::ll::UntypedStorage<4, 4>  mUnkd4cd85;
        ::ll::UntypedStorage<4, 4>  mUnk6d6437;
        ::ll::UntypedStorage<4, 4>  mUnkbf890e;
        ::ll::UntypedStorage<8, 8>  mUnk5cb9a0;
        ::ll::UntypedStorage<8, 8>  mUnk6dc587;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        TypeStats& operator=(TypeStats const&);
        TypeStats(TypeStats const&);
        TypeStats();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptPlugin&>                                                 mPlugin;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ScriptPluginHandleCounter::TypeStats>> mStats;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                                              mOrderedList;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkb0d518;
    ::ll::UntypedStorage<8, 64> mUnkbc6a55;
    ::ll::UntypedStorage<8, 24> mUnkc4a47b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginHandleCounter& operator=(ScriptPluginHandleCounter const&);
    ScriptPluginHandleCounter(ScriptPluginHandleCounter const&);
    ScriptPluginHandleCounter();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptPluginHandleCounter();
#else // @header-generator platform
    virtual void onMakeObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    virtual void onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);
    // clang-format on
#else // @header-generator platform
    virtual void onDestroyObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptPluginHandleCounter(::ScriptPlugin&);
#else // @header-generator platform
    MCNAPI explicit ScriptPluginHandleCounter(::ScriptPlugin& plugin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(::entt::meta_type const&);
#else // @header-generator platform
    MCNAPI ::ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(::entt::meta_type const& type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptPlugin&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::ScriptPlugin& plugin);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
#if defined(LL_PLAT_A) // @header-generator platform
    $onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);
#else // @header-generator platform
    $onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const& type, uint size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $onDestroyObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const& type,
        uint                     size
    );
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
