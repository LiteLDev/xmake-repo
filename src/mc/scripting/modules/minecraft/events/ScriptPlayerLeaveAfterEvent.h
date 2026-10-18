#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptPlayerLeaveAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mPlayerName;
    ::ll::TypedStorage<8, 24, std::string> mPlayerId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerName;
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptPlayerLeaveAfterEvent& operator=(ScriptPlayerLeaveAfterEvent const&);
#endif // @header-generator platform
    ScriptPlayerLeaveAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerLeaveAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData> const&,
#else // @header-generator platform
    MCAPI ScriptPlayerLeaveAfterEvent(::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent const&);

    MCAPI ScriptPlayerLeaveAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData> const& eventData,
#endif // @header-generator platform
        ::Scripting::WeakLifetimeScope const&
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCFOLD ::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&&);
#endif // @header-generator platform
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData> const&,
#else // @header-generator platform
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData> const& eventData,
#endif // @header-generator platform
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
