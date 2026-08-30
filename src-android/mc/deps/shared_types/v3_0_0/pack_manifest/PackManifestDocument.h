#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/DropdownSetting.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/Header.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/LabelSetting.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/Metadata.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/Module.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/NativeModuleDependency.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/PackDependency.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SliderSetting.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/Subpack.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/ToggleSetting.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct PackManifestDocument {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
