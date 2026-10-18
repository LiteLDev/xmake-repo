#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct InviteLink {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> linkId;
    ::ll::TypedStorage<8, 24, std::string> profileUuid;
    ::ll::TypedStorage<8, 24, std::string> type;
    ::ll::TypedStorage<8, 8, long>         timestamp;
    ::ll::TypedStorage<8, 24, std::string> url;
    ::ll::TypedStorage<1, 1, bool>         enabled;
    ::ll::TypedStorage<8, 8, long>         expirationDate;
    // NOLINTEND

public:
    // prevent constructor by default
    InviteLink& operator=(InviteLink const&);
    InviteLink(InviteLink const&);
    InviteLink();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool hasInviteLinkExpired(long) const;

    MCNAPI bool isInviteLinkActive(long) const;

    MCNAPI bool isInviteLinkInfinite() const;

    MCNAPI bool isValid() const;

    MCNAPI ~InviteLink();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::InviteLink fromJson(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct InviteLink {};
#endif // @header-generator platform

} // namespace Realms
