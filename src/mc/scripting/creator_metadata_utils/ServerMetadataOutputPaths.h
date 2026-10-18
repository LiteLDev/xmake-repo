#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace CreatorMetadataUtils {

struct ServerMetadataOutputPaths {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24> vanillaDataPath;
    ::ll::UntypedStorage<1, 24> scriptModulePath;
    ::ll::UntypedStorage<1, 24> engineDataPath;
    ::ll::UntypedStorage<1, 24> schemaDataPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk366755;
    ::ll::UntypedStorage<8, 32> mUnkdc9033;
    ::ll::UntypedStorage<8, 32> mUnkf29982;
    ::ll::UntypedStorage<8, 32> mUnk504f4f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ServerMetadataOutputPaths& operator=(ServerMetadataOutputPaths const&);
    ServerMetadataOutputPaths(ServerMetadataOutputPaths const&);
    ServerMetadataOutputPaths();
#endif // @header-generator platform
};

} // namespace CreatorMetadataUtils
