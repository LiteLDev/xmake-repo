#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class NetworkReplayReader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                         mReplayFolderPath;
    ::ll::TypedStorage<8, 24, std::string>              mReplayName;
    ::ll::TypedStorage<4, 4, uint const>                mVersion;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPacketData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk37db59;
    ::ll::UntypedStorage<8, 32> mUnk68530d;
    ::ll::UntypedStorage<4, 4>  mUnkbf7149;
    ::ll::UntypedStorage<8, 24> mUnk6521e2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    NetworkReplayReader& operator=(NetworkReplayReader const&);
    NetworkReplayReader(NetworkReplayReader const&);
#endif // @header-generator platform
    NetworkReplayReader();
};
