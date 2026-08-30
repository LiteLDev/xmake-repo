#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct PackDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
    ::ll::UntypedStorage<8, 24>            mVersion;
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
