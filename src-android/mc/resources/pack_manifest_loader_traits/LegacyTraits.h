#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackCapabilityRegistry;
class PackManifest;
class PackReport;
class SubpackInfoCollection;
// clang-format on

namespace PackManifestLoaderTraits {

struct LegacyTraits {
public:
    // LegacyTraits inner types define
    using LegacyParseArgs =
        std::tuple<PackManifest*, PackReport*, SubpackInfoCollection*, const PackCapabilityRegistry*>;
};

} // namespace PackManifestLoaderTraits
