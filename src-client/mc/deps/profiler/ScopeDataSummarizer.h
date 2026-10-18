#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profile/platform/Whisker_ProfileClient.h"
#include "mc/deps/profiler/SlotResolveQueryHelper.h"

namespace Bedrock::Profile::Whisker::Diagnostics {

class ScopeDataSummarizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::Bedrock::Profile::Whisker::SlotResolveQueryHelper> mQueryHelper;
    ::ll::UntypedStorage<8, 16>                                                     mWhiskerHandle;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsSummarizationEnabled;
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker::Diagnostics
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
