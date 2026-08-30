#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/RelaxedSemVersion.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/VersionSelectType.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct NativeModuleDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mModuleName;
    ::ll::UntypedStorage<8, 32>            mVersion;
    ::ll::TypedStorage<1, 1, bool>         mOptional;
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
