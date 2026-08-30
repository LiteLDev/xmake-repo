#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/DropdownOption.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct DropdownSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType>                mType;
    ::ll::TypedStorage<8, 24, std::string>                                                              mName;
    ::ll::TypedStorage<8, 24, std::string>                                                              mText;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption>> mOptions;
    ::ll::TypedStorage<8, 24, std::string>                                                              mDefault;
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
