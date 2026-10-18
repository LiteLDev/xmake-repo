#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/OptInState.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct StoriesSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Realms::OptInState> realmOptIn;
    ::ll::TypedStorage<4, 4, ::Realms::OptInState> playerOptIn;
    ::ll::TypedStorage<1, 1, bool>                 areNotificationsEnabled;
    ::ll::TypedStorage<1, 1, bool>                 areRealmEventsEnabled;
    ::ll::TypedStorage<1, 1, bool>                 areRealmCoordinatesEnabled;
    ::ll::TypedStorage<1, 1, bool>                 isRealmTimelineEnabled;
    ::ll::TypedStorage<1, 1, bool>                 isRealmTimelineRequired;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Realms::StoriesSettings const&) const;

    MCNAPI bool shouldShowUnreadCount() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::StoriesSettings fromJson(::Json::Value const&);

    MCNAPI static ::Realms::OptInState optInStringToEnum(std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
struct StoriesSettings {};
#endif // @header-generator platform

} // namespace Realms
