#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class NetworkReplayReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                         mReplayFolderPath;
    ::ll::TypedStorage<8, 24, std::string>              mReplayName;
    ::ll::TypedStorage<4, 4, uint const>                mVersion;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPacketData;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkReplayReader();
};
