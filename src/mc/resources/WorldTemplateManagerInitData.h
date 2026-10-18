#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class PackSource;
class PackSourceFactory;
class WorldTemplateCollection;
class WorldTemplateManagerProxy;
struct WorldTemplateManagerInitDeps;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct WorldTemplateManagerInitData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateCollection>>   mCollection;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>>                mLocalPremiumPackIds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSource>>                mLocalWorldSources;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateManagerProxy>> mProxy;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk219b88;
    ::ll::UntypedStorage<8, 24> mUnkaa4193;
    ::ll::UntypedStorage<8, 8>  mUnk4814f1;
    ::ll::UntypedStorage<8, 8>  mUnkfdec2b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerInitData& operator=(WorldTemplateManagerInitData const&);
    WorldTemplateManagerInitData(WorldTemplateManagerInitData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldTemplateManagerInitData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateManagerInitData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
