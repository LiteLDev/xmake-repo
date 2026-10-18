#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_21_100::PackSettingsDefinition {

struct Settings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                   mPackId;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                                          mLastUsed;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::variant<float, bool, std::string>>> mNamedValueMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                           mPackId;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                               mLastUsed;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::variant<float, bool, ::std::string>>> mNamedValueMap;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::PackSettingsDefinition
