#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace Bedrock::Profiling::Control {

struct ProfilerControlResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                 mSuccess;
    ::ll::TypedStorage<4, 4, int>                                  mOriginatingRequestSeq;
    ::ll::TypedStorage<8, 24, std::string>                         mResponseMessage;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mArgs;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlResult& operator=(ProfilerControlResult const&);
    ProfilerControlResult(ProfilerControlResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ProfilerControlResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Control
