#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/parties/ScriptPartyInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#else // @header-generator platform
namespace ScriptModuleParties { struct ScriptPartyChangedIntermediateData; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleParties {

struct ScriptPartyChangedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                    mPlayerHandle;
    ::ll::TypedStorage<8, 40, std::optional<ScriptModuleParties::ScriptPartyInfo>> mPartyInformation;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8b1124;
    ::ll::UntypedStorage<8, 48> mUnk25593a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPartyChangedAfterEvent& operator=(ScriptPartyChangedAfterEvent const&);
    ScriptPartyChangedAfterEvent(ScriptPartyChangedAfterEvent const&);
    ScriptPartyChangedAfterEvent();
#endif // @header-generator platform
};

} // namespace ScriptModuleParties
