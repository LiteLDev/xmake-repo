#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptObjectiveSortOrderType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjectiveDisplayOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                                  mObjective;
    ::ll::TypedStorage<4, 8, std::optional<ScriptModuleMinecraft::ScriptObjectiveSortOrderType>> mSortOrder;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>
                                                                                                     mObjective;
    ::ll::TypedStorage<4, 8, ::std::optional<::ScriptModuleMinecraft::ScriptObjectiveSortOrderType>> mSortOrder;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardObjectiveDisplayOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptScoreboardObjectiveDisplayOptions(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective> objective,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType                                    sortOrder
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective> objective,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType                                    sortOrder
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
