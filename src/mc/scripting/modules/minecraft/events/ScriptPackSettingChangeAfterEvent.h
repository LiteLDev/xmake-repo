#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptPackSettingChangeIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPackSettingChangeAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptPackSettingChangeAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mSettingName;
    ::ll::TypedStorage<8, 32, std::variant<float, bool, std::string>> mSettingValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                              mSettingName;
    ::ll::TypedStorage<8, 40, ::std::variant<float, bool, ::std::string>> mSettingValue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptPackSettingChangeAfterEvent& operator=(ScriptPackSettingChangeAfterEvent const&);
#endif // @header-generator platform
    ScriptPackSettingChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPackSettingChangeAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData> const&,
#else // @header-generator platform
    MCAPI ScriptPackSettingChangeAfterEvent(::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent const&);

    MCAPI ScriptPackSettingChangeAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData> const& evtData,
#endif // @header-generator platform
        ::Scripting::WeakLifetimeScope const&
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCAPI ~ScriptPackSettingChangeAfterEvent();
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData> const&,
#else // @header-generator platform
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData> const& evtData,
#endif // @header-generator platform
        ::Scripting::WeakLifetimeScope const&
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
