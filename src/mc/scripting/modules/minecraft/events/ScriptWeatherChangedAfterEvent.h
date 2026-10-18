#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptWeatherChangedAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDimension;
    ::ll::TypedStorage<1, 1, bool>         mWasRaining;
    ::ll::TypedStorage<1, 1, bool>         mWasLightning;
    ::ll::TypedStorage<1, 1, bool>         mIsRaining;
    ::ll::TypedStorage<1, 1, bool>         mIsLightning;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mDimension;
    ::ll::TypedStorage<1, 1, bool>           mWasRaining;
    ::ll::TypedStorage<1, 1, bool>           mWasLightning;
    ::ll::TypedStorage<1, 1, bool>           mIsRaining;
    ::ll::TypedStorage<1, 1, bool>           mIsLightning;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWeatherChangedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptWeatherChangedAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData> const&,
#else // @header-generator platform
    MCAPI ScriptWeatherChangedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData> const& eventData,
#endif // @header-generator platform
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData> const&,
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData> const& eventData,
#endif // @header-generator platform
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
