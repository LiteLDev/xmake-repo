#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v3_0_0/pack_manifest/DropdownOption.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v3_0_0/pack_manifest/SettingType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct DropdownOption; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct DropdownSetting {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType>                mType;
    ::ll::TypedStorage<8, 24, std::string>                                                              mName;
    ::ll::TypedStorage<8, 24, std::string>                                                              mText;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption>> mOptions;
    ::ll::TypedStorage<8, 24, std::string>                                                              mDefault;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::v3_0_0::PackManifestDefinition::SettingType>                    mType;
    ::ll::TypedStorage<8, 32, ::std::string>                                                                mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                                                mText;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v3_0_0::PackManifestDefinition::DropdownOption>> mOptions;
    ::ll::TypedStorage<8, 32, ::std::string>                                                                mDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DropdownSetting(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting const&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting const&);

    MCAPI bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting const& other) const;

    MCAPI ~DropdownSetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition
