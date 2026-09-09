#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

struct MoodyCamelBedrockMemoryTraits : public ::moodycamel::ConcurrentQueueDefaultTraits {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void free(void*);

    MCNAPI static void* malloc(ulong);
    // NOLINTEND
};

} // namespace Bedrock::Memory
