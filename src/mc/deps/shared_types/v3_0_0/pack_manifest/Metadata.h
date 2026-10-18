#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/RelaxedSemVersion.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct RelaxedSemVersion; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Metadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mAuthors;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mUrl;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mLicense;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mProductType;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, std::vector<SharedTypes::v3_0_0::PackManifestDefinition::RelaxedSemVersion>>>> mGeneratedWith;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mAuthors;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mUrl;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mLicense;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mProductType;
    ::ll::TypedStorage<
        8,
        24,
        ::std::optional<
            ::std::map<::std::string, ::std::vector<::SharedTypes::v3_0_0::PackManifestDefinition::RelaxedSemVersion>>>>
        mGeneratedWith;
    // NOLINTEND

public:
    // prevent constructor by default
    Metadata();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Metadata(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&&);

    MCAPI Metadata(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);

    MCAPI ~Metadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&&);

    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
