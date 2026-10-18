#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IBreakpointValidator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginManager;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ScriptBreakpointValidator : public ::Scripting::IBreakpointValidator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptPluginManager&>    mPluginManager;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>> mTargetModuleUUID;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnka66c41;
    ::ll::UntypedStorage<8, 24> mUnk61ce14;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBreakpointValidator& operator=(ScriptBreakpointValidator const&);
    ScriptBreakpointValidator(ScriptBreakpointValidator const&);
    ScriptBreakpointValidator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptBreakpointValidator();
#else // @header-generator platform
    virtual ~ScriptBreakpointValidator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool validatePath(std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool validatePath(::std::string_view sourcePath) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $validatePath(std::string_view);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI bool $validatePath(::std::string_view sourcePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
