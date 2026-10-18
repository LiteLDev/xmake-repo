#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ServerInfoFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mServerInfo;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk326d93;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServerInfoFile& operator=(ServerInfoFile const&);
    ServerInfoFile(ServerInfoFile const&);
#endif // @header-generator platform
    ServerInfoFile();
};
