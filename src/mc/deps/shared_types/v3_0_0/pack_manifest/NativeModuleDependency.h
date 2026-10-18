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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mModuleName;
    ::ll::UntypedStorage<8, 32>            mVersion;
    ::ll::TypedStorage<1, 1, bool>         mOptional;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mModuleName;
    ::ll::TypedStorage<
        8,
        32,
        ::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::VersionSelectType,
            ::SharedTypes::v3_0_0::PackManifestDefinition::RelaxedSemVersion>>
                                   mVersion;
    ::ll::TypedStorage<1, 1, bool> mOptional;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeModuleDependency& operator=(NativeModuleDependency const&);
    NativeModuleDependency();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NativeModuleDependency(::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
