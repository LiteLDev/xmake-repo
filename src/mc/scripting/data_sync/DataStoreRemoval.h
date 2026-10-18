#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreRemoval {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDataStoreName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mDataStoreName;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::DDUI
