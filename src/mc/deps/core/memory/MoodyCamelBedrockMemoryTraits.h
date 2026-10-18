#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

#if defined(LL_PLAT_A) // @header-generator platform
struct MoodyCamelBedrockMemoryTraits : public ::moodycamel::ConcurrentQueueDefaultTraits {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void free(void*);

    MCNAPI static void* malloc(ulong);
    // NOLINTEND
};
#else // @header-generator platform
struct MoodyCamelBedrockMemoryTraits : public ::moodycamel::ConcurrentQueueDefaultTraits {};
#endif // @header-generator platform

} // namespace Bedrock::Memory
