#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ContentKeysFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                             mFilePath;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mKeyMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentKeysFile();
};
