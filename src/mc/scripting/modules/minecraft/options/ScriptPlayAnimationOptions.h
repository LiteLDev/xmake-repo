#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayAnimationOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mPlayerNames;
    ::ll::UntypedStorage<8, 32>                                        mPlayers;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              mNextState;
    ::ll::TypedStorage<4, 8, std::optional<float>>                     mBlendOutTime;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              mStopExpression;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              mController;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mPlayerNames;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>>
                                                              mPlayers;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mNextState;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>          mBlendOutTime;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mStopExpression;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mController;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPlayAnimationOptions();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
#else // @header-generator platform
    MCAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptPlayAnimationOptions();
#else // @header-generator platform
    MCAPI ~ScriptPlayAnimationOptions();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindV1();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindV1();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindV2();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindV2();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
