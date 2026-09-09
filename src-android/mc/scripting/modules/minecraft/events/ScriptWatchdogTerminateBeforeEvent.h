#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/WatchdogTerminateReason.h"

// auto generated forward declare list
// clang-format off
struct BeforeWatchdogTerminateEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::WatchdogTerminateReason> mTerminateReason;
    ::ll::TypedStorage<1, 1, bool>                      mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWatchdogTerminateBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptWatchdogTerminateBeforeEvent(::BeforeWatchdogTerminateEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BeforeWatchdogTerminateEvent const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
