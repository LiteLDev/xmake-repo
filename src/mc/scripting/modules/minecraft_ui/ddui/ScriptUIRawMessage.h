#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptUIRawMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 176> mMessage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 208> mUnkc37d3a;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraftServerUI::ScriptUIRawMessage const&) const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ScriptUIRawMessage& operator=(ScriptUIRawMessage const&);
    ScriptUIRawMessage(ScriptUIRawMessage const&);
    ScriptUIRawMessage();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
