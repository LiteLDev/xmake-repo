#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/RelaxedSemVersion.h"
#include "mc/platform/UUID.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Header {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mDescription;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                mUUID;
    ::ll::UntypedStorage<8, 24>                           mVersion;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mMinEngineVersion;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mBaseGameVersion;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPackScope;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mPlatformLocked;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mAllowRandomSeed;
    ::ll::UntypedStorage<1, 2>                            mLockTemplateOptions;
    ::ll::UntypedStorage<8, 32>                           mOptimizationVersion;
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
