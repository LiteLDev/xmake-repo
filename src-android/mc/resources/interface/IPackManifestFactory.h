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
    // clang-format off
    virtual ~IPackManifestFactory() = default;

    virtual std::unique_ptr<PackManifest> create(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&, ::SubpackInfoCollection*) = 0;
    // clang-format on
    // NOLINTEND
};
