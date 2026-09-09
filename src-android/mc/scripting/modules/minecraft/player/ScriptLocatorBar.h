#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/world/WaypointGroup.h"
#include "mc/world/actor/player/ServerLocatorBar.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerWaypointGroup;
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { class ScriptWaypoint; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptLocatorBarError; }
namespace ScriptModuleMinecraft { struct ScriptWaypointTextureSelector; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
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
        ::ll::UntypedStorage<8, 32>                                mScriptWaypoint;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWaypointSetProperty;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemove;
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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                 mPlayerRef;
    ::ll::UntypedStorage<8, 16>                                mWaypointGroupHandle;
    ::ll::TypedStorage<1, 1, bool>                             mHandleInitialized;
    ::ll::UntypedStorage<8, 24>                                mWaypoints;
    ::ll::TypedStorage<4, 4, int const>                        mMaxCount;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnInvalidWaypointRemoved;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLocatorBar();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initializeGroupHandle();

    MCNAPI void _onWaypointPropertyUpdate(
        std::variant<
            bool,
            std::optional<ScriptModuleMinecraft::ScriptRGB>,
            ScriptModuleMinecraft::ScriptWaypointTextureSelector,
            ScriptModuleMinecraft::ScriptDimensionLocation> const&,
        ::WaypointGroup::WaypointHandle
    );

    MCNAPI void _onWaypointRemoveEvent(::WaypointGroup::WaypointHandle);

    MCNAPI void _removeInvalidWaypoints(std::vector<WaypointGroup::WaypointHandle> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
