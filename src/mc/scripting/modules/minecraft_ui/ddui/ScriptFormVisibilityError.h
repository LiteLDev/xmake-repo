#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptFormVisibilityErrorReason.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptFormVisibilityError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                     mFormId;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityErrorReason> mReason;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf8d668;
    ::ll::UntypedStorage<4, 4>  mUnk6a86c1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptFormVisibilityError& operator=(ScriptFormVisibilityError const&);
    ScriptFormVisibilityError(ScriptFormVisibilityError const&);
#endif // @header-generator platform
    ScriptFormVisibilityError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptFormVisibilityError(std::string, ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityErrorReason);

    MCNAPI ~ScriptFormVisibilityError();
#else // @header-generator platform
    MCNAPI ScriptFormVisibilityError(
        ::std::string                                                    formId,
        ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityErrorReason reason
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityErrorReason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string formId, ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityErrorReason reason);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
