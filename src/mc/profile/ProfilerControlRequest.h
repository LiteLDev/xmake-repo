#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/profile/ProfilerControlAction.h"
#include "mc/profile/ProfilerControlArgs.h"
#include "mc/profile/ProfilerControlTarget.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Profiling::Control {

struct ProfilerControlRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Bedrock::Profiling::Control::ProfilerControlTarget> mTarget;
    ::ll::TypedStorage<4, 4, ::Bedrock::Profiling::Control::ProfilerControlAction> mAction;
    ::ll::TypedStorage<8, 32, ::Bedrock::Profiling::Control::ProfilerControlArgs>  mArgs;
    ::ll::TypedStorage<4, 4, int>                                                  mOriginatingRequestSeq;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk5c6877;
    ::ll::UntypedStorage<4, 4>  mUnke1c1e1;
    ::ll::UntypedStorage<8, 32> mUnk23db4e;
    ::ll::UntypedStorage<4, 4>  mUnkfcd6bb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlRequest& operator=(ProfilerControlRequest const&);
    ProfilerControlRequest(ProfilerControlRequest const&);
    ProfilerControlRequest();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ProfilerControlRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Bedrock::Profiling::Control
