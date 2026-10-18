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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                               mName;
    ::ll::TypedStorage<8, 24, std::string>                                               mText;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                             mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mText;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                      mMin;
    ::ll::TypedStorage<4, 4, float>                                                      mMax;
    ::ll::TypedStorage<4, 4, float>                                                      mStep;
    ::ll::TypedStorage<4, 4, float>                                                      mDefault;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SliderSetting& operator=(SliderSetting const&);
    SliderSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SliderSetting(::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting const&);

    MCAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting const& other) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting const&);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
