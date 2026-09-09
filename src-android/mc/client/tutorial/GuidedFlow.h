#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
