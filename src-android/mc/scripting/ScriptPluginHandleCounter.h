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
        ::ll::TypedStorage<8, 24, std::string>             name;
        ::ll::TypedStorage<8, 8, ::entt::meta_type const&> type;
        ::ll::TypedStorage<1, 1, bool>                     isBound;
        ::ll::TypedStorage<4, 4, int>                      makeObjectCount;
        ::ll::TypedStorage<4, 4, int>                      peakMakeObjectCount;
        ::ll::TypedStorage<4, 4, int>                      totalMakeObjectCount;
        ::ll::TypedStorage<8, 8, long>                     bytesUsed;
        ::ll::TypedStorage<8, 8, long>                     peakBytesUsed;
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
    ::ll::TypedStorage<8, 8, ::ScriptPlugin&>                                                 mPlugin;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ScriptPluginHandleCounter::TypeStats>> mStats;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                                              mOrderedList;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginHandleCounter& operator=(ScriptPluginHandleCounter const&);
    ScriptPluginHandleCounter(ScriptPluginHandleCounter const&);
    ScriptPluginHandleCounter();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptPluginHandleCounter();

    virtual void onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    virtual void onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPluginHandleCounter(::ScriptPlugin&);

    MCNAPI ::ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(::entt::meta_type const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptPlugin&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $onMakeObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);

    MCNAPI void
    $onDestroyObject(::Scripting::LifetimeRegistry&, ::Scripting::ObjectHandle, ::entt::meta_type const&, uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
