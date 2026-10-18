#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_ui/ScriptFormCancelationReason.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleMinecraftServerUI {

class BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsCanceled;
    ::ll::TypedStorage<4, 8, std::optional<ScriptModuleMinecraftServerUI::ScriptFormCancelationReason>> mCancelationReason;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk743ef7;
    ::ll::UntypedStorage<4, 8> mUnkbe8f2e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BaseScriptFormResponse& operator=(BaseScriptFormResponse const&);
    BaseScriptFormResponse(BaseScriptFormResponse const&);
    BaseScriptFormResponse();
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftServerUI
