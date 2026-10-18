#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandParamInterface.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCustomCommandParamInterface; }
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mDescription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>           mName;
    ::ll::TypedStorage<8, 32, ::std::string>           mDescription;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mPermissionLevel;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>> mCheatsRequired;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptModuleMinecraft::ScriptCustomCommandParamInterface>>> mMandatoryParams;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptModuleMinecraft::ScriptCustomCommandParamInterface>>> mOptionalParams;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>    mCheatsRequired;
    ::ll::
        TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptCustomCommandParamInterface>>>
            mMandatoryParams;
    ::ll::
        TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptCustomCommandParamInterface>>>
            mOptionalParams;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptCustomCommandInterface(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&) const;

    MCNAPI ~ScriptCustomCommandInterface();
#else // @header-generator platform
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptCustomCommandInterface const& other) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
