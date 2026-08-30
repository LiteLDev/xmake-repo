#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/registry/FeatureTypeVersion.h"
#include "mc/world/level/levelgen/feature/registry/SupportedFeatureSchema.h"
#include "mc/world/level/levelgen/feature/registry/SupportedFeatureUpgrader.h"

// auto generated forward declare list
// clang-format off
class FeatureLoader;
class IWorldRegistriesProvider;
class MinEngineVersion;
class ResourcePackManager;
class SemVersion;
struct FeatureParserContext;
namespace Json { class Value; }
namespace Puv { class VersionRange; }
// clang-format on

class FeatureTypeFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SupportedFeatureSchema>>                 mSupportedSchemas;
    ::ll::TypedStorage<8, 24, std::vector<SupportedFeatureUpgrader>>               mSupportedUpgraders;
    ::ll::UntypedStorage<8, 24>                                                    mDocumentationGenerators;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, FeatureTypeVersion>> mRegisteredFeatureTypeVersions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FeatureLoader>>                       mLoader;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FeatureParserContext>>                mParserContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeatureTypeFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeatureTypeFactory();

    MCNAPI ulong addSupportedSchema(std::optional<Puv::VersionRange>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
