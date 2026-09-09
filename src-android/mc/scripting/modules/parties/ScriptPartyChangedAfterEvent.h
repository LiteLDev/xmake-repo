#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/parties/ScriptPartyInfo.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleParties {

struct ScriptPartyChangedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                                    mPlayerHandle;
    ::ll::TypedStorage<8, 40, std::optional<ScriptModuleParties::ScriptPartyInfo>> mPartyInformation;
    // NOLINTEND
};

} // namespace ScriptModuleParties
