#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/server/FileReadResult.h"

// auto generated forward declare list
// clang-format off
class AllowList;
namespace Core { class Path; }
// clang-format on

class AllowListFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                          mFilePath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AllowList>> mAllowList;
    ::ll::TypedStorage<1, 1, bool>                       mIsDisabledBecauseNoOnlineAuth;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListFile();
};
