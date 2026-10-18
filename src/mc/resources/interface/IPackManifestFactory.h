#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class PackManifest;
class PackReport;
class ResourceLocation;
class SubpackInfoCollection;
// clang-format on

class IPackManifestFactory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IPackManifestFactory() = default;
#else // @header-generator platform
    virtual ~IPackManifestFactory() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PackManifest> create(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&, ::SubpackInfoCollection*) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackManifest> create(
        ::PackAccessStrategy&     accessStrategy,
        ::ResourceLocation const& location,
        ::PackReport&             report,
        ::SubpackInfoCollection*  subpackInfoStack
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
