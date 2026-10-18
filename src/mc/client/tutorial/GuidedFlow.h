#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IGuidedFlowClient;
// clang-format on

class GuidedFlow {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GuidedFlow();

    virtual void initialize(::IGuidedFlowClient const&) = 0;

    virtual void finish(::IGuidedFlowClient const&, bool const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class GuidedFlow {};
#endif // @header-generator platform
