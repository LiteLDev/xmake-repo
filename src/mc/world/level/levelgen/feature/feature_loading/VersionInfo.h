#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/VersionRange.h"
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

#endif // @header-generator platform
namespace FeatureLoading {

struct VersionInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 56>                                mVersionRange;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::Puv::VersionRange>             mVersionRange;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FeatureLoading::FeatureVersion> mFeatureVersion;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SemVersion getMinFormatVersion(::FeatureLoading::FeatureVersion const& version);

    MCAPI static ::std::optional<::Puv::VersionRange>
    getRangeFromVersion(::FeatureLoading::FeatureVersion const& version);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace FeatureLoading
