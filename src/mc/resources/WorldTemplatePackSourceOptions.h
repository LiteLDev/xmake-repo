#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class WorldTemplateCollectionView;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct WorldTemplatePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>                          mBase;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateCollectionView>> mView;
    ::ll::TypedStorage<8, 16, ::mce::UUID const>                           mWorldTemplateId;
    ::ll::UntypedStorage<1, 1>                                             mPackType;
    ::ll::UntypedStorage<1, 1>                                             mPackOrigin;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkf9865e;
    ::ll::UntypedStorage<8, 8>  mUnkb186a5;
    ::ll::UntypedStorage<8, 16> mUnk6866b1;
    ::ll::UntypedStorage<1, 1>  mUnkfa6d4c;
    ::ll::UntypedStorage<1, 1>  mUnke10d57;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackSourceOptions& operator=(WorldTemplatePackSourceOptions const&);
    WorldTemplatePackSourceOptions(WorldTemplatePackSourceOptions const&);
    WorldTemplatePackSourceOptions();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplatePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
