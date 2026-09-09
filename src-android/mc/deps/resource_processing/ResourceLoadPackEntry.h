#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct ResourceLoadPackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                           packId;
    ::ll::TypedStorage<8, 24, std::string>                           packVersion;
    ::ll::TypedStorage<8, 24, std::string>                           packType;
    ::ll::TypedStorage<8, 24, std::string>                           optVersion;
    ::ll::TypedStorage<4, 4, uint>                                   mFileCount;
    ::ll::TypedStorage<8, 8, ulong>                                  mSizeInB;
    ::ll::TypedStorage<4, 4, uint>                                   mAssetLoadCpuMs;
    ::ll::TypedStorage<8, 8, ulong>                                  mDataReadInB;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, uint>> mAssetCounts;
    // NOLINTEND
};

} // namespace Bedrock::Resources
