#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/client/social/PresenceTickableType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
namespace Social { class PresenceTickable; }
// clang-format on

namespace Social {

class PresenceManager : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<Social::PresenceTickableType, std::unique_ptr<Social::PresenceTickable>>> mTickables;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PresenceManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PresenceManager();

    virtual void update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PresenceManager(::Bedrock::NonOwnerPointer<Social::IUserManager>);

    MCNAPI void _doRequest(::Social::PresenceTickable&);

    MCNAPI void deregisterPresenceTickable(::Social::PresenceTickableType);

    MCNAPI void registerPresenceTickable(std::unique_ptr<Social::PresenceTickable>, bool);

    MCNAPI void setTickableState(::Social::PresenceTickableType, int, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<Social::IUserManager>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
