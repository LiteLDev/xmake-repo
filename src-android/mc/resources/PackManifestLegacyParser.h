#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#include "mc/resources/PackManifestFormat.h"
#include "mc/resources/TemplateLockState.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class PackCapabilityRegistry;
class PackManifest;
class PackReport;
class ResourceInformation;
class SemVersion;
class SubpackInfoCollection;
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class PackManifestLegacyParser {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isHiddenPack(::mce::UUID const&);

    MCNAPI static ::Json::Value parseHeader(
        ::Json::Value const&,
        std::vector<std::string>,
        ::PackManifest&,
        ::PackReport&,
        bool,
        bool,
        std::string const&,
        std::string const&,
        ::PackManifestFormat
    );

    MCNAPI static void parseLegacyModuleDependencies(
        ::Json::Value const&,
        std::vector<std::string>,
        ::PackManifest&,
        ::PackReport&,
        bool,
        std::string const&
    );

    MCNAPI static void
    parseMetadata(::Json::Value const&, std::vector<std::string>&, ::PackManifest&, ::PackReport&, bool);

    MCNAPI static void
    parseModules(::Json::Value const&, std::vector<std::string>, ::PackManifest&, ::PackReport&, bool, bool);

    MCNAPI static void processBaseGameVersion(
        ::PackManifest&,
        ::PackReport&,
        ::BaseGameVersion const&,
        ::PackManifestFormat,
        std::vector<std::string>
    );

    MCNAPI static void
    processCapability(::PackManifest&, ::PackReport&, std::string const, ::PackCapabilityRegistry const&);

    MCNAPI static ::mce::UUID readUUIDAndReport(
        ::Json::Value const&,
        std::string const&,
        std::string const&,
        std::vector<std::string>&,
        ::PackReport&,
        bool
    );

    MCNAPI static ::SemVersion readVersionAndReport(
        ::Json::Value const&,
        std::string const&,
        std::vector<std::string>&,
        ::PackReport&,
        bool,
        bool
    );

    MCNAPI static void resolveDuplicateUUIDs(std::vector<std::string>, ::PackManifest&, ::PackReport&, bool);
    // NOLINTEND
};
