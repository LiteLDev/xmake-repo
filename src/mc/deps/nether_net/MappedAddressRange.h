#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct MappedAddressRange {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mInternalAddress;
    ::ll::TypedStorage<2, 2, ushort>                      mInternalPortMin;
    ::ll::TypedStorage<2, 2, ushort>                      mInternalPortMax;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExternalAddress;
    ::ll::TypedStorage<4, 4, int>                         mExternalPortOffset;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnk2c501a;
    ::ll::UntypedStorage<2, 2>  mUnk3ddbaf;
    ::ll::UntypedStorage<2, 2>  mUnk92d2bd;
    ::ll::UntypedStorage<8, 40> mUnk26d101;
    ::ll::UntypedStorage<4, 4>  mUnk869426;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MappedAddressRange& operator=(MappedAddressRange const&);
    MappedAddressRange(MappedAddressRange const&);
    MappedAddressRange();
#endif // @header-generator platform
};

} // namespace NetherNet
