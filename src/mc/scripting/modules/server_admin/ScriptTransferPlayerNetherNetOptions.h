#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptTransferPlayerNetherNetOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> netherNetId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka78014;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptTransferPlayerNetherNetOptions& operator=(ScriptTransferPlayerNetherNetOptions const&);
    ScriptTransferPlayerNetherNetOptions(ScriptTransferPlayerNetherNetOptions const&);
    ScriptTransferPlayerNetherNetOptions();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
