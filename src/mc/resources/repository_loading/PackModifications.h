#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class Pack;
class ResourcePack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace RepositoryLoading {

struct PackModifications {
public:
    // PackModifications inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ReportError;
    struct DependencyError;
#else // @header-generator platform
#endif // @header-generator platform
    struct CurrentWorldTemplatePacks;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct DependencyError;
    struct ReportError;
#endif // @header-generator platform
    // clang-format on

    // PackModifications inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ReportError {
#else // @header-generator platform
    struct CurrentWorldTemplatePacks {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 48, ::ResourceLocation> mLocation;
        ::ll::TypedStorage<1, 1, ::PackType>          mType;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnkc30c03;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        CurrentWorldTemplatePacks& operator=(CurrentWorldTemplatePacks const&);
        CurrentWorldTemplatePacks(CurrentWorldTemplatePacks const&);
        CurrentWorldTemplatePacks();
#endif // @header-generator platform
    };

    struct DependencyError {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>> mPack;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnkd36637;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        DependencyError& operator=(DependencyError const&);
        DependencyError(DependencyError const&);
        DependencyError();
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct CurrentWorldTemplatePacks {
#else // @header-generator platform
    struct ReportError {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<Pack>> mTemplatePack;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 56> mUnk4a5203;
        ::ll::UntypedStorage<1, 1>  mUnkfadfc9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        ReportError& operator=(ReportError const&);
        ReportError(ReportError const&);
        ReportError();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<RepositoryLoading::PackModifications::ReportError>> mReportErrors;
    ::ll::TypedStorage<8, 24, std::vector<RepositoryLoading::PackModifications::DependencyError>> mDependencyErrors;
    ::ll::TypedStorage<8, 24, std::vector<RepositoryLoading::PackModifications::CurrentWorldTemplatePacks>> mTemplatePacks;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk9498b1;
    ::ll::UntypedStorage<8, 24> mUnkec13f5;
    ::ll::UntypedStorage<8, 24> mUnk4c6bf6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PackModifications& operator=(PackModifications const&);
    PackModifications(PackModifications const&);
    PackModifications();
#endif // @header-generator platform
};

} // namespace RepositoryLoading
