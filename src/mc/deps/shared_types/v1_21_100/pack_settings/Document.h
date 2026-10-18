#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/pack_settings/Settings.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_100::PackSettingsDefinition { struct Settings; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_100::PackSettingsDefinition {

struct Document {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_100::PackSettingsDefinition::Settings>> mSettingsList;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_100::PackSettingsDefinition::Settings>> mSettingsList;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();

    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::PackSettingsDefinition
