#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IMinecraftEventing;
class ISkinRepository;
class PersonaService;
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
class ServiceFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<PersonaService> build(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::IMinecraftEventing&,
        std::weak_ptr<ISkinRepository>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const
    );
    // NOLINTEND
};
#else // @header-generator platform
class ServiceFactory {};
#endif // @header-generator platform

} // namespace persona
