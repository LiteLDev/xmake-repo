#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"
#include "mc/world/level/BlockPos.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage inner types declare
    // clang-format off
    struct BlockCause;
    // clang-format on

    // ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage inner types define
    struct BlockCause {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos const> mPos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData> const> mEntity;
    ::ll::TypedStorage<4, 16, std::optional<ScriptModuleMinecraft::ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage::BlockCause> const> mDestructionCauseBlock;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
