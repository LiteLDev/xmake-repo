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

struct ScriptPartyDestinationCookieResponseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mCookie;
    ::ll::TypedStorage<1, 1, bool>                                    mAccepted;
    ::ll::UntypedStorage<8, 32>                                       mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::ScriptModuleParties::ScriptPartyInfo> mPartyInformation;
    // NOLINTEND
};

} // namespace ScriptModuleParties
