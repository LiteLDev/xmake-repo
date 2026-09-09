#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

// auto generated forward declare list
// clang-format off
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardListener : public ::ScoreboardEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mScoreboardHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptScoreboardListener();

    virtual ::EventResult onObjectiveRemoved(std::string const&);

    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onObjectiveRemoved(std::string const&);

    MCNAPI ::EventResult $onScoreboardIdentityRemoved(::ScoreboardId const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
