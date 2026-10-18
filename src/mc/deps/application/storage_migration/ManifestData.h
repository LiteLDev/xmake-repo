#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::StorageMigration {

struct ManifestData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mStatus;
    ::ll::UntypedStorage<8, 24>            mIndexData;
    ::ll::UntypedStorage<8, 24>            mManifestFilePath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk5622a4;
    ::ll::UntypedStorage<8, 16> mUnkcd717f;
    ::ll::UntypedStorage<8, 32> mUnkddaa74;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ManifestData& operator=(ManifestData const&);
    ManifestData(ManifestData const&);
    ManifestData();
#endif // @header-generator platform
};

} // namespace Bedrock::StorageMigration
