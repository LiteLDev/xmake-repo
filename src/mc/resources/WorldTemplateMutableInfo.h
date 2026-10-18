#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class WorldTemplatePackSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct WorldTemplateMutableInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<WorldTemplatePackSource>>> mPacksInWorldTemplate;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<std::string>>>                mAllowListPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkc24b6f;
    ::ll::UntypedStorage<8, 16> mUnkd8c596;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateMutableInfo& operator=(WorldTemplateMutableInfo const&);
    WorldTemplateMutableInfo(WorldTemplateMutableInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateMutableInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    WorldTemplateMutableInfo();
#endif // @header-generator platform
};
