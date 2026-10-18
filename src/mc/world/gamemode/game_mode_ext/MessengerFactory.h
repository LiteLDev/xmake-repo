#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
struct IGameModeMessenger;
// clang-format on

namespace GameModeExt {

struct MessengerFactory {
public:
    // MessengerFactory inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using FactoryFunction = ::gsl::not_null<std::unique_ptr<IGameModeMessenger> (*)(Player&)>;
#else // @header-generator platform
    using FactoryFunction = ::gsl::not_null<::std::unique_ptr<::IGameModeMessenger> (*)(::Player&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IGameModeMessenger> (*)(Player&)>> mCreateClientAuth;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IGameModeMessenger> (*)(Player&)>> mCreateServerAuth;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IGameModeMessenger> (*)(::Player&)>> mCreateClientAuth;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IGameModeMessenger> (*)(::Player&)>> mCreateServerAuth;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace GameModeExt
