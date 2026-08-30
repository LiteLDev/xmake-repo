#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptDimensionLocation.h"
#include "mc/scripting/modules/minecraft/ScriptRGB.h"
#include "mc/scripting/modules/minecraft/ScriptWaypointTextureSelector.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointTextureSelectorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptWaypointTextureSelector> mTextureSelector;
    ::ll::TypedStorage<8, 32, std::optional<ScriptModuleMinecraft::ScriptRGB>>        mColor;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsEnabled;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope const>                   mScope;
    ::ll::UntypedStorage<8, 88>                                                       mOnSetPropertyEvent;
    ::ll::UntypedStorage<8, 88>                                                       mOnRemoveEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptWaypoint();

    virtual std::unique_ptr<ServerWaypoint> createWaypoint() const = 0;

    virtual ::Scripting::Result<ScriptModuleMinecraft::ScriptDimensionLocation, ScriptModuleMinecraft::ScriptInvalidWaypointError, ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError> getDimensionLocation() const = 0;

    virtual bool isValid() const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWaypoint(
        ::Scripting::WeakLifetimeScope const&,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector const&,
        std::optional<ScriptModuleMinecraft::ScriptRGB> const&
    );

    MCNAPI ::Scripting::Result<
        std::optional<ScriptModuleMinecraft::ScriptRGB>,
        ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getColor() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getIsEnabled() const;

    MCNAPI ::Bedrock::PubSub::Connector<void()>& getOnRemoveEvent();

    MCNAPI ::Bedrock::PubSub::Connector<void(const std::variant<
                                             bool,
                                             std::optional<ScriptModuleMinecraft::ScriptRGB>,
                                             ScriptModuleMinecraft::ScriptWaypointTextureSelector,
                                             ScriptModuleMinecraft::ScriptDimensionLocation>&)>&
    getOnSetPropertyEvent();

    MCNAPI ::Scripting::Result<
        ScriptModuleMinecraft::ScriptWaypointTextureSelector,
        ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getTextureSelector() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector const&,
        std::optional<ScriptModuleMinecraft::ScriptRGB> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
