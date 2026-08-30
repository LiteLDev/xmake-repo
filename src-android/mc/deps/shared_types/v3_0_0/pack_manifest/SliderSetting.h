#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct SliderSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType> mType;
    ::ll::TypedStorage<8, 24, std::string>                                               mName;
    ::ll::TypedStorage<8, 24, std::string>                                               mText;
    ::ll::TypedStorage<4, 4, float>                                                      mMin;
    ::ll::TypedStorage<4, 4, float>                                                      mMax;
    ::ll::TypedStorage<4, 4, float>                                                      mStep;
    ::ll::TypedStorage<4, 4, float>                                                      mDefault;
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
