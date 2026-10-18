#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleParties {

struct ScriptPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<1, 1, bool>         mIsLeader;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka7a094;
    ::ll::UntypedStorage<1, 1>  mUnkc30280;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartyInfo& operator=(ScriptPartyInfo const&);
    ScriptPartyInfo(ScriptPartyInfo const&);
    ScriptPartyInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPartyInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleParties
