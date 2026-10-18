#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptTransferPlayerIpPortOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> hostname;
    ::ll::TypedStorage<2, 2, ushort>       port;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk80deea;
    ::ll::UntypedStorage<2, 2>  mUnk13cef2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptTransferPlayerIpPortOptions& operator=(ScriptTransferPlayerIpPortOptions const&);
    ScriptTransferPlayerIpPortOptions(ScriptTransferPlayerIpPortOptions const&);
    ScriptTransferPlayerIpPortOptions();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
