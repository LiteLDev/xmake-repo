#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/RelaxedSemVersion.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Metadata {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mAuthors;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mUrl;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mLicense;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mProductType;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, std::vector<SharedTypes::v3_0_0::PackManifestDefinition::RelaxedSemVersion>>>> mGeneratedWith;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
