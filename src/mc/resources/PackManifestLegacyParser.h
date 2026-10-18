#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/PackManifestFormat.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/TemplateLockState.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class PackCapabilityRegistry;
class PackManifest;
class PackReport;
#if defined(LL_PLAT_A) // @header-generator platform
class ResourceInformation;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class SubpackInfoCollection;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class PackManifestLegacyParser {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isHiddenPack(::mce::UUID const&);
#else // @header-generator platform
    MCNAPI static bool isHiddenPack(::mce::UUID const& packUuid);
#endif // @header-generator platform

    MCNAPI static ::Json::Value parseHeader(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Json::Value const&,
        std::vector<std::string>,
        ::PackManifest&,
        ::PackReport&,
        bool,
        bool,
        std::string const&,
        std::string const&,
        ::PackManifestFormat
#else // @header-generator platform
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings,
        bool                         allowVersionStrings,
        ::std::string const&         versionKey,
        ::std::string const&         idKey,
        ::PackManifestFormat         formatVersion
#endif // @header-generator platform
    );

    MCNAPI static void parseLegacyModuleDependencies(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Json::Value const&,
        std::vector<std::string>,
        ::PackManifest&,
        ::PackReport&,
        bool,
        std::string const&
#else // @header-generator platform
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings,
        ::std::string const&         dependenciesKey
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI static void parseMetadata(
        ::Json::Value const&          root,
        ::std::vector<::std::string>& errorPath,
        ::PackManifest&               manifest,
        ::PackReport&                 report,
        bool                          allowWarnings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    processCapability(::PackManifest&, ::PackReport&, std::string const, ::PackCapabilityRegistry const&);
#else // @header-generator platform
    MCNAPI static void parseModules(
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings,
        bool                         allowVersionStrings
    );

    MCNAPI static void processBaseGameVersion(
        ::PackManifest&              manifest,
        ::PackReport&                report,
        ::BaseGameVersion const&     requiredBaseGameSemVersion,
        ::PackManifestFormat         formatVersion,
        ::std::vector<::std::string> errorPath
    );

    MCNAPI static void processCapability(
        ::PackManifest&                 manifest,
        ::PackReport&                   report,
        ::std::string const             capability,
        ::PackCapabilityRegistry const& packCapabilityRegistry
    );
#endif // @header-generator platform

    MCNAPI static ::mce::UUID readUUIDAndReport(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Json::Value const&,
        std::string const&,
        std::string const&,
        std::vector<std::string>&,
        ::PackReport&,
        bool
#else // @header-generator platform
        ::Json::Value const&          parent,
        ::std::string const&          element,
        ::std::string const&          seed,
        ::std::vector<::std::string>& errorPath,
        ::PackReport&                 report,
        bool                          allowWarnings
#endif // @header-generator platform
    );

    MCNAPI static ::SemVersion readVersionAndReport(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Json::Value const&,
        std::string const&,
        std::vector<std::string>&,
        ::PackReport&,
        bool,
        bool
#else // @header-generator platform
        ::Json::Value const&          parent,
        ::std::string const&          element,
        ::std::vector<::std::string>& errorPath,
        ::PackReport&                 report,
        bool                          allowWarnings,
        bool                          allowVersionStrings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void resolveDuplicateUUIDs(std::vector<std::string>, ::PackManifest&, ::PackReport&, bool);
#else // @header-generator platform
    MCNAPI static void resolveDuplicateUUIDs(
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings
    );
#endif // @header-generator platform
    // NOLINTEND
};
