#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct LevelWeatherChangedEvent;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptWeatherType, ::ScriptModuleMinecraft::ScriptWeatherType, int);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
