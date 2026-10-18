#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

#if defined(LL_PLAT_C) // @header-generator platform
class WaitTimerImpl {};
#else // @header-generator platform
class WaitTimerImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1ac5c6;
    ::ll::UntypedStorage<8, 8> mUnkf6b381;
    ::ll::UntypedStorage<8, 8> mUnk74e324;
    // NOLINTEND

public:
    // prevent constructor by default
    WaitTimerImpl& operator=(WaitTimerImpl const&);
    WaitTimerImpl(WaitTimerImpl const&);
    WaitTimerImpl();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void WaitCallback(::_TP_CALLBACK_INSTANCE*, void* context, ::_TP_TIMER*);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace OS
#endif // @header-generator platform
