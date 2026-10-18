#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct PackManifestDocument; }
// clang-format on

#endif // @header-generator platform
namespace PackManifestLoaderTraits {

#if defined(LL_PLAT_A) // @header-generator platform
struct ModernTraits {};
#else // @header-generator platform
struct ModernTraits {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void validateFunction(
        ::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument const& doc,
        ::Puv::Logger&                                                             logger
    );
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace PackManifestLoaderTraits
