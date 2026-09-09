#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ChatEvent;
namespace ScriptModuleMinecraft { struct ScriptChatSendIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::UntypedStorage<8, 32>            mTargets;
    ::ll::UntypedStorage<8, 32>            mSender;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptChatSendAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ScriptChatSendAfterEvent(::ChatEvent const&, ::Player const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI void copyTo(::ChatEvent&, ::Scripting::WeakLifetimeScope const&) const;

    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>>
    getTargets_V010();

    MCNAPI ::Scripting::Result_deprecated<void>
        setTargets_V010(std::vector<Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI void* $ctor(::ChatEvent const&, ::Player const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
