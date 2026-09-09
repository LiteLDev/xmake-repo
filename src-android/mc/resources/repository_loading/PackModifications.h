#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class Pack;
class ResourcePack;
// clang-format on

namespace RepositoryLoading {

struct PackModifications {
public:
    // PackModifications inner types declare
    // clang-format off
    struct ReportError;
    struct DependencyError;
    struct CurrentWorldTemplatePacks;
    // clang-format on

    // PackModifications inner types define
    struct ReportError {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::ResourceLocation> mLocation;
        ::ll::TypedStorage<1, 1, ::PackType>          mType;
        // NOLINTEND
    };

    struct DependencyError {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>> mPack;
        // NOLINTEND
    };

    struct CurrentWorldTemplatePacks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<Pack>> mTemplatePack;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<RepositoryLoading::PackModifications::ReportError>> mReportErrors;
    ::ll::TypedStorage<8, 24, std::vector<RepositoryLoading::PackModifications::DependencyError>> mDependencyErrors;
    ::ll::TypedStorage<8, 24, std::vector<RepositoryLoading::PackModifications::CurrentWorldTemplatePacks>> mTemplatePacks;
    // clang-format on
    // NOLINTEND
};

} // namespace RepositoryLoading
