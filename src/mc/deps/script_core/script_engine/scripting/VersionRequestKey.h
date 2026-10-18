#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct VersionRequestKey {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID> uuid;
    ::ll::TypedStorage<8, 24, std::string> name;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk392781;
    ::ll::UntypedStorage<8, 32> mUnk2fa9c5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRequestKey& operator=(VersionRequestKey const&);
    VersionRequestKey(VersionRequestKey const&);
    VersionRequestKey();
};

} // namespace Scripting
