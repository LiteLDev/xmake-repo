#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ClubsService;
class IMinecraftEventing;
namespace OreUI { class Router; }
namespace Realms { class ContentService; }
namespace Realms { class GenericRequestServiceHandler; }
namespace Realms { class IContentApi; }
namespace Realms { class IInvitesApi; }
namespace Realms { class ISubscriptionApi; }
namespace Realms { class InvitesService; }
namespace Realms { class SubscriptionService; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsServices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Realms::ContentService>>                mContentService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::SubscriptionService>>          mSubscriptionService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClubsService>>                         mClubsService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::GenericRequestServiceHandler>> mGenericRequestService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::InvitesService>>               mInvitesService;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void createClubsService(::Bedrock::NonOwnerPointer<Social::IUserManager>, ::IMinecraftEventing&);

    MCNAPI void createContentService(std::weak_ptr<Realms::IContentApi>);

    MCNAPI void createGenericService(::Bedrock::NonOwnerPointer<Social::IUserManager>, ::IMinecraftEventing*);

    MCNAPI void createInvitesService(
        std::weak_ptr<Realms::IInvitesApi>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&
    );

    MCNAPI void createSubscriptionService(std::weak_ptr<Realms::ISubscriptionApi>);

    MCNAPI std::weak_ptr<ClubsService> getClubsService();

    MCNAPI ::Realms::ContentService* getContentService();

    MCNAPI std::weak_ptr<Realms::GenericRequestServiceHandler> getGenericService();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::InvitesService>> getInvitesService();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::SubscriptionService>> getSubscriptionService();

    MCNAPI void setupRouterListener(::OreUI::Router&);

    MCNAPI ~RealmsServices();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsServices {};
#endif // @header-generator platform

} // namespace Realms
