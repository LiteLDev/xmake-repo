#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WorldTemplatePackSource;
// clang-format on

struct WorldTemplateMutableInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<WorldTemplatePackSource>>> mPacksInWorldTemplate;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<std::string>>>                mAllowListPath;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateMutableInfo& operator=(WorldTemplateMutableInfo const&);
    WorldTemplateMutableInfo(WorldTemplateMutableInfo const&);

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
};
