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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
    ::ll::UntypedStorage<8, 24>            mVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>  mUUID;
    ::ll::TypedStorage<8, 24, ::SemVersion> mVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::PackDependency const& other) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
