#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackCapabilityRegistry;
class PackManifest;
class PackReport;
class SubpackInfoCollection;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct PackManifestDocument; }
#endif // @header-generator platform
// clang-format on

namespace PackManifestLoaderTraits {

struct LegacyTraits {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // LegacyTraits inner types define
    using LegacyParseArgs =
        std::tuple<PackManifest*, PackReport*, SubpackInfoCollection*, const PackCapabilityRegistry*>;
#else // @header-generator platform
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument legacyParseFn(
        ::Puv::Input const& input,
        ::Puv::Logger&,
        ::PackManifest*                 manifest,
        ::PackReport*                   report,
        ::SubpackInfoCollection*        subpackInfoStack,
        ::PackCapabilityRegistry const* packReg
    );
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace PackManifestLoaderTraits
