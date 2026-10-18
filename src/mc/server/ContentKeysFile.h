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

class ContentKeysFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                             mFilePath;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mKeyMap;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk2d4e60;
    ::ll::UntypedStorage<8, 64> mUnk9f86c5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContentKeysFile& operator=(ContentKeysFile const&);
    ContentKeysFile(ContentKeysFile const&);
#endif // @header-generator platform
    ContentKeysFile();
};
