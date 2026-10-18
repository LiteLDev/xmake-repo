#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptInvalidFormModificationError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mFormId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk1aea46;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptInvalidFormModificationError& operator=(ScriptInvalidFormModificationError const&);
    ScriptInvalidFormModificationError(ScriptInvalidFormModificationError const&);
#endif // @header-generator platform
    ScriptInvalidFormModificationError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptInvalidFormModificationError(std::string);

    MCNAPI ~ScriptInvalidFormModificationError();
#else // @header-generator platform
    MCNAPI explicit ScriptInvalidFormModificationError(::std::string formId);
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
    MCNAPI void* $ctor(std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string formId);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
