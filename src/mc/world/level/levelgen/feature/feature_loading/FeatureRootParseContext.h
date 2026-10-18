#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IFeature;
class IWorldRegistriesProvider;
class ResourcePackManager;
namespace FeatureLoading { struct AbstractFeatureHolder; }
// clang-format on

namespace FeatureLoading {

struct FeatureRootParseContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::reference_wrapper<std::string>>                    mFeatureName;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IWorldRegistriesProvider>>       mRegistryProvider;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const ResourcePackManager>>      mPackManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FeatureLoading::AbstractFeatureHolder>> mFeatureHolder;
    ::ll::TypedStorage<8, 8, ::IFeature*>                                            mFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::std::string>>                    mFeatureName;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IWorldRegistriesProvider>>       mRegistryProvider;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::ResourcePackManager const>>      mPackManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureLoading::AbstractFeatureHolder>> mFeatureHolder;
    ::ll::TypedStorage<8, 8, ::IFeature*>                                                mFeature;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace FeatureLoading
