#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct LabelSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                               mText;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                             mText;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TYPE_NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
