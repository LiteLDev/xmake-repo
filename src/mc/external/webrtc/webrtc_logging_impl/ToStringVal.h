#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::webrtc_logging_impl {

struct ToStringVal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk563fef;
    // NOLINTEND

public:
    // prevent constructor by default
    ToStringVal& operator=(ToStringVal const&);
    ToStringVal(ToStringVal const&);
    ToStringVal();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ToStringVal();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::webrtc_logging_impl
#endif // @header-generator platform
