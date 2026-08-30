#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

// auto generated forward declare list
// clang-format off
struct LevelWeatherChangedEvent;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptWeatherType const> mPreviousWeatherType;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptWeatherType>       mNewWeatherType;
    ::ll::TypedStorage<4, 4, int>                                              mDuration;
    ::ll::TypedStorage<1, 1, bool>                                             mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWeatherChangedBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWeatherChangedBeforeEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType,
        int
    );

    MCNAPI void copyTo(::LevelWeatherChangedEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptWeatherType, ::ScriptModuleMinecraft::ScriptWeatherType, int);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
