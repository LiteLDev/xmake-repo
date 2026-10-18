#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/WaypointGroup.h"
#include "mc/world/actor/player/ServerLocatorBar.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
class ServerWaypointGroup;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { class ScriptWaypoint; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptLocatorBarError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptWaypointTextureSelector; }
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct EngineError; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLocatorBar {
public:
    // ScriptLocatorBar inner types declare
    // clang-format off
    struct WaypointEntry;
    // clang-format on

    // ScriptLocatorBar inner types define
    struct WaypointEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 32>                                mScriptWaypoint;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWaypoint>>
                                                                   mScriptWaypoint;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWaypointSetProperty;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemove;
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        WaypointEntry& operator=(WaypointEntry const&);
        WaypointEntry(WaypointEntry const&);
        WaypointEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaypointEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                 mPlayerRef;
    ::ll::UntypedStorage<8, 16>                                mWaypointGroupHandle;
    ::ll::TypedStorage<1, 1, bool>                             mHandleInitialized;
    ::ll::UntypedStorage<8, 24>                                mWaypoints;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                       mPlayerRef;
    ::ll::TypedStorage<8, 16, ::ServerLocatorBar::GroupStrongHandle> mWaypointGroupHandle;
    ::ll::TypedStorage<1, 1, bool>                                   mHandleInitialized;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::WaypointGroup::WaypointHandle, ::ScriptModuleMinecraft::ScriptLocatorBar::WaypointEntry>>
                                                               mWaypoints;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int const>                        mMaxCount;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnInvalidWaypointRemoved;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptLocatorBar();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initializeGroupHandle();
#else // @header-generator platform
    MCAPI void _initializeGroupHandle();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onWaypointPropertyUpdate(
        std::variant<
#else // @header-generator platform
    MCAPI void _onWaypointPropertyUpdate(
        ::std::variant<
#endif // @header-generator platform
            bool,
#if defined(LL_PLAT_A) // @header-generator platform
            std::optional<ScriptModuleMinecraft::ScriptRGB>,
            ScriptModuleMinecraft::ScriptWaypointTextureSelector,
            ScriptModuleMinecraft::ScriptDimensionLocation> const&,
        ::WaypointGroup::WaypointHandle
#else // @header-generator platform
            ::std::optional<::ScriptModuleMinecraft::ScriptRGB>,
            ::ScriptModuleMinecraft::ScriptWaypointTextureSelector,
            ::ScriptModuleMinecraft::ScriptDimensionLocation> const& type,
        ::WaypointGroup::WaypointHandle                              handle
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onWaypointRemoveEvent(::WaypointGroup::WaypointHandle);
#else // @header-generator platform
    MCAPI void _onWaypointRemoveEvent(::WaypointGroup::WaypointHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeInvalidWaypoints(std::vector<WaypointGroup::WaypointHandle> const&);
#else // @header-generator platform
    MCAPI void _removeInvalidWaypoints(::std::vector<::WaypointGroup::WaypointHandle> const& handles);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
