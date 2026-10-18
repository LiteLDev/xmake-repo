#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/DropdownSetting.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/Header.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/LabelSetting.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/Metadata.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v3_0_0/pack_manifest/Module.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v3_0_0/pack_manifest/NativeModuleDependency.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/PackDependency.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SliderSetting.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v3_0_0/pack_manifest/Subpack.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v3_0_0/pack_manifest/ToggleSetting.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct Module; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct Subpack; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct PackManifestDocument {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, uchar> mFormatVersion;
    ::ll::UntypedStorage<8, 232> mHeader;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v3_0_0::PackManifestDefinition::Module>> mModules;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::variant<SharedTypes::v3_0_0::PackManifestDefinition::PackDependency, SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency>>>> mDependencies;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mCapabilities;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::variant<SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting, SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting, SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting, SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>>>> mSettings;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v3_0_0::PackManifestDefinition::Subpack>>> mSubpacks;
    ::ll::TypedStorage<8, 168, std::optional<SharedTypes::v3_0_0::PackManifestDefinition::Metadata>> mMetadata;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mHasEducationMetadata;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                                                 mFormatVersion;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v3_0_0::PackManifestDefinition::Header>               mHeader;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v3_0_0::PackManifestDefinition::Module>> mModules;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::PackDependency,
            ::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency>>>>
                                                                             mDependencies;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mCapabilities;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>>>>
        mSettings;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v3_0_0::PackManifestDefinition::Subpack>>>
                                                                                                         mSubpacks;
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v3_0_0::PackManifestDefinition::Metadata>> mMetadata;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mHasEducationMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManifestDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackManifestDocument(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument const&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument&&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument const&);

    MCAPI ~PackManifestDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::PackManifestDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
