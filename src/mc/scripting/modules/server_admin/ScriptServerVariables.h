#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/ContextConfig.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct JSON; }
#else // @header-generator platform
namespace Scripting { struct ContextConfig; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerVariables {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                            mPackConfigManager;
    ::ll::TypedStorage<8, 240, ::Scripting::ContextConfig> mContextConfig;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnkf89f71;
    ::ll::UntypedStorage<8, 288> mUnkacdc32;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerVariables& operator=(ScriptServerVariables const&);
    ScriptServerVariables(ScriptServerVariables const&);
    ScriptServerVariables();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptServerVariables(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Bedrock::NonOwnerPointer<ScriptPackConfigurationManager>,
        ::Scripting::ContextConfig const&
#else // @header-generator platform
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Scripting::ContextConfig const&                            contextConfig
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getAllVariableNames() const;

    MCNAPI ~ScriptServerVariables();
#else // @header-generator platform
    MCNAPI ::std::vector<::std::string> getAllVariableNames() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<ScriptPackConfigurationManager>, ::Scripting::ContextConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Scripting::ContextConfig const&                            contextConfig
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
