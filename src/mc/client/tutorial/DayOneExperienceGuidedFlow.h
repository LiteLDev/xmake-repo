#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tutorial/GuidedFlow.h"

// auto generated forward declare list
// clang-format off
class IGuidedFlowClient;
// clang-format on

class DayOneExperienceGuidedFlow : public ::GuidedFlow {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayOneExperienceGuidedFlow();

    virtual void initialize(::IGuidedFlowClient const&);

    virtual void finish(::IGuidedFlowClient const&, bool const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canInitialize(::IGuidedFlowClient const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize(::IGuidedFlowClient const&);

    MCNAPI void $finish(::IGuidedFlowClient const&, bool const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DayOneExperienceGuidedFlow {};
#endif // @header-generator platform
