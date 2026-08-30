#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/profile/ProfilerControlAction.h"
#include "mc/profile/ProfilerControlArgs.h"
#include "mc/profile/ProfilerControlTarget.h"

namespace Bedrock::Profiling::Control {

struct ProfilerControlRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Bedrock::Profiling::Control::ProfilerControlTarget> mTarget;
    ::ll::TypedStorage<4, 4, ::Bedrock::Profiling::Control::ProfilerControlAction> mAction;
    ::ll::TypedStorage<8, 32, ::Bedrock::Profiling::Control::ProfilerControlArgs>  mArgs;
    ::ll::TypedStorage<4, 4, int>                                                  mOriginatingRequestSeq;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlRequest& operator=(ProfilerControlRequest const&);
    ProfilerControlRequest(ProfilerControlRequest const&);
    ProfilerControlRequest();
};

} // namespace Bedrock::Profiling::Control
