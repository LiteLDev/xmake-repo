#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptUserDefinedTransactionHandlerId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8811bd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptUserDefinedTransactionHandlerId& operator=(ScriptUserDefinedTransactionHandlerId const&);
    ScriptUserDefinedTransactionHandlerId(ScriptUserDefinedTransactionHandlerId const&);
    ScriptUserDefinedTransactionHandlerId();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
#endif // @header-generator platform
