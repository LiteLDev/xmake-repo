#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDimension;
    ::ll::TypedStorage<1, 1, bool>         mWasRaining;
    ::ll::TypedStorage<1, 1, bool>         mWasLightning;
    ::ll::TypedStorage<1, 1, bool>         mIsRaining;
    ::ll::TypedStorage<1, 1, bool>         mIsLightning;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWeatherChangedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWeatherChangedAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
