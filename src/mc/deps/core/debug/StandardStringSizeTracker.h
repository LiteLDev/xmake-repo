#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct StandardStringSizeTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mZero;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mSmall1;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mSmall2;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mBig;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk114aa8;
    ::ll::UntypedStorage<8, 8> mUnk818947;
    ::ll::UntypedStorage<8, 8> mUnkd654f4;
    ::ll::UntypedStorage<8, 8> mUnk48e6b3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StandardStringSizeTracker& operator=(StandardStringSizeTracker const&);
    StandardStringSizeTracker(StandardStringSizeTracker const&);
    StandardStringSizeTracker();
#endif // @header-generator platform
};

} // namespace Bedrock
