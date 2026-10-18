#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/levelgen/feature/registry/FeatureTypeVersion.h"
#include "mc/world/level/levelgen/feature/registry/SupportedFeatureSchema.h"
#include "mc/world/level/levelgen/feature/registry/SupportedFeatureUpgrader.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class FeatureLoader;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class FeatureTypeVersion;
#endif // @header-generator platform
class IWorldRegistriesProvider;
class MinEngineVersion;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
#endif // @header-generator platform
struct FeatureParserContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SupportedFeatureSchema;
struct SupportedFeatureUpgrader;
namespace Documentation { struct Node; }
#endif // @header-generator platform
namespace Json { class Value; }
namespace Puv { class VersionRange; }
// clang-format on

class FeatureTypeFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SupportedFeatureSchema>>                 mSupportedSchemas;
    ::ll::TypedStorage<8, 24, std::vector<SupportedFeatureUpgrader>>               mSupportedUpgraders;
    ::ll::UntypedStorage<8, 24>                                                    mDocumentationGenerators;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, FeatureTypeVersion>> mRegisteredFeatureTypeVersions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FeatureLoader>>                       mLoader;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FeatureParserContext>>                mParserContext;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SupportedFeatureSchema>>                      mSupportedSchemas;
    ::ll::TypedStorage<8, 24, ::std::vector<::SupportedFeatureUpgrader>>                    mSupportedUpgraders;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::Documentation::Node&)>>> mDocumentationGenerators;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::FeatureTypeVersion>> mRegisteredFeatureTypeVersions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureLoader>>                         mLoader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureParserContext>>                  mParserContext;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FeatureTypeFactory();
#else // @header-generator platform
    virtual ~FeatureTypeFactory() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FeatureTypeFactory();
#else // @header-generator platform
    MCAPI FeatureTypeFactory();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong addSupportedSchema(std::optional<Puv::VersionRange>);
#else // @header-generator platform
    MCAPI uint64 addSupportedSchema(::std::optional<::Puv::VersionRange> versionRange);

#ifdef LL_PLAT_C
    MCAPI bool processFeature(
        ::IWorldRegistriesProvider&  lookupProvider,
        bool                         isBasePack,
        ::ResourcePackManager const& rpm,
        ::std::string const&         expectedFeatureName,
        ::Json::Value const&         featureData,
        ::MinEngineVersion const&    minEngineVersion
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
