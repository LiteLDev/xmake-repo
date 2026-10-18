#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransferServiceRequestDataOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk55fc3d;
    ::ll::UntypedStorage<8, 40> mUnk905019;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferServiceRequestDataOptions& operator=(ScriptTransferServiceRequestDataOptions const&);
    ScriptTransferServiceRequestDataOptions(ScriptTransferServiceRequestDataOptions const&);
    ScriptTransferServiceRequestDataOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
#endif // @header-generator platform
