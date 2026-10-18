#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/PlayerRoleActions.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerRoleWithActionsList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mRealmId;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerRole>                    mRole;
    ::ll::TypedStorage<8, 24, std::vector<Realms::PlayerRoleActions>> mActions;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRoleWithActionsList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerRoleWithActionsList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::PlayerRoleWithActionsList createOwnerRoleActionsList(std::string const);

    MCNAPI static std::optional<Realms::PlayerRoleWithActionsList> fromJson(::Json::Value const&, std::string const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PlayerRoleWithActionsList {};
#endif // @header-generator platform

} // namespace Realms
