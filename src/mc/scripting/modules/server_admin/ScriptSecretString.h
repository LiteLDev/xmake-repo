#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptSecretString : public ::Scripting::WeakHandleFromThis<ScriptModuleServerAdmin::ScriptSecretString> {
#else // @header-generator platform
class ScriptSecretString : public ::Scripting::WeakHandleFromThis<::ScriptModuleServerAdmin::ScriptSecretString> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka4633b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptSecretString& operator=(ScriptSecretString const&);
#endif // @header-generator platform
    ScriptSecretString();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSecretString(::ScriptModuleServerAdmin::ScriptSecretString const&);

    MCNAPI ~ScriptSecretString();
    // NOLINTEND
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleServerAdmin::ScriptSecretString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleServerAdmin
