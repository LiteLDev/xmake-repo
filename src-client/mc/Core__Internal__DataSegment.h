#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/container/list_base_hook.h"

namespace Core::Internal {

class DataSegment : public ::Bedrock::Intrusive::list_base_hook<void> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    ::ll::TypedStorage<8, 8, ulong>               mPosition;
    ::ll::TypedStorage<8, 8, ulong>               mPending;
    // NOLINTEND
};

} // namespace Core::Internal
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
