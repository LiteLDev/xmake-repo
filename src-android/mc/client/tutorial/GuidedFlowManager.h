#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GuidedFlow;
class IGuidedFlowClient;
// clang-format on

class GuidedFlowManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IGuidedFlowClient>> mGuidedFlowClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GuidedFlow>>        mActiveFlow;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidedFlowManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GuidedFlowManager(std::unique_ptr<IGuidedFlowClient>);

    MCNAPI void finish(bool);

    MCNAPI void initializeGuidedFlow(std::unique_ptr<GuidedFlow>);

    MCNAPI bool isGuidedFlowActive() const;

    MCNAPI ~GuidedFlowManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<IGuidedFlowClient>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
