#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/AttemptMap.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XboxLiveStorageHandlerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 144>                    xalMutex;
    ::ll::TypedStorage<8, 24, ::Social::AttemptMap> xalReadAttempts;
    ::ll::TypedStorage<8, 24, ::Social::AttemptMap> xalWriteAttempts;
    ::ll::TypedStorage<8, 24, ::Social::AttemptMap> xalClearAttempts;
    ::ll::UntypedStorage<1, 144>                    xblMutex;
    ::ll::TypedStorage<8, 24, ::Social::AttemptMap> xblReadAttempts;
    ::ll::TypedStorage<8, 24, ::Social::AttemptMap> xblWriteAttempts;
    ::ll::TypedStorage<8, 24, ::Social::AttemptMap> xblClearAttempts;
    // NOLINTEND
};
#else // @header-generator platform
class XboxLiveStorageHandlerContext {};
#endif // @header-generator platform

} // namespace Social
