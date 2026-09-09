#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading::Burst { struct QueueConfig; }
namespace Bedrock::Threading::Burst::Details { class WorkTarget; }
// clang-format on

namespace Bedrock::Threading::Burst::Strategy {

class Console {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mPrimaryWorkerCount;
    ::ll::TypedStorage<8, 8, ulong> mSecondaryWorkerCount;
    // NOLINTEND

public:
    // prevent constructor by default
    Console();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Console(::Bedrock::Threading::Burst::QueueConfig const&);

    MCNAPI void fillTarget(ulong, ulong, ::Bedrock::Threading::Burst::Details::WorkTarget&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Threading::Burst::QueueConfig const&);
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Strategy
