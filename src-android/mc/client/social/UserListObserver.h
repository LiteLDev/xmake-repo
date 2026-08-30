#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Social { class User; }
// clang-format on

namespace Social {

class UserListObserver : public ::Core::Observer<Social::UserListObserver, Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual void onUserAdded(std::shared_ptr<Social::User> const&);

    virtual void onUserRemoved(std::shared_ptr<Social::User> const&);

    virtual void onUserStorageAreaChanged(std::shared_ptr<Social::User> const&, std::shared_ptr<Core::FileStorageArea>&);
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUserAdded(std::shared_ptr<Social::User> const&);

    MCNAPI void
    $onUserStorageAreaChanged(std::shared_ptr<Social::User> const&, std::shared_ptr<Core::FileStorageArea>&);
    // NOLINTEND
};

} // namespace Social
