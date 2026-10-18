#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace AgentComponents {

struct ActionDetails {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        requestId;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> cmdVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka60ca8;
    ::ll::UntypedStorage<4, 4>  mUnka6f6b0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActionDetails& operator=(ActionDetails const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActionDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    ActionDetails(ActionDetails const&);
    ActionDetails();
#endif // @header-generator platform
};

} // namespace AgentComponents
