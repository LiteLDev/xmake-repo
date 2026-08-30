#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/script_engine/scripting/ContextConfig.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerSecrets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                            mPackConfigManager;
    ::ll::TypedStorage<8, 240, ::Scripting::ContextConfig> mContextConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerSecrets& operator=(ScriptServerSecrets const&);
    ScriptServerSecrets(ScriptServerSecrets const&);
    ScriptServerSecrets();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptServerSecrets(::Bedrock::NonOwnerPointer<ScriptPackConfigurationManager>, ::Scripting::ContextConfig const&);

    MCNAPI std::vector<std::string> getAllSecretNames() const;

    MCNAPI ~ScriptServerSecrets();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<ScriptPackConfigurationManager>, ::Scripting::ContextConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
