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
namespace ScriptModuleParties { struct ScriptPartyDestinationCookieResponseIntermediateData; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleParties {

struct ScriptPartyDestinationCookieResponseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mCookie;
    ::ll::TypedStorage<1, 1, bool>                                    mAccepted;
    ::ll::UntypedStorage<8, 32>                                       mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::ScriptModuleParties::ScriptPartyInfo> mPartyInformation;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc48a83;
    ::ll::UntypedStorage<1, 1>  mUnkf519ad;
    ::ll::UntypedStorage<8, 32> mUnk2da5d2;
    ::ll::UntypedStorage<8, 40> mUnk7eb591;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPartyDestinationCookieResponseAfterEvent& operator=(ScriptPartyDestinationCookieResponseAfterEvent const&);
    ScriptPartyDestinationCookieResponseAfterEvent(ScriptPartyDestinationCookieResponseAfterEvent const&);
    ScriptPartyDestinationCookieResponseAfterEvent();
#endif // @header-generator platform
};

} // namespace ScriptModuleParties
