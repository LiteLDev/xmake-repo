#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace persona {

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

} // namespace persona
