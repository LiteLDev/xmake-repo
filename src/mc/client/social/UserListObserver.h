#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class SingleThreadedLock; }
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class UserListObserver : public ::Core::Observer<::Social::UserListObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onUserAdded(::std::shared_ptr<::Social::User> const& user);

    virtual void onUserRemoved(::std::shared_ptr<::Social::User> const& user);

    virtual void onUserStorageAreaChanged(
        ::std::shared_ptr<::Social::User> const&    user,
        ::std::shared_ptr<::Core::FileStorageArea>& oldStorageArea
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUserAdded(::std::shared_ptr<::Social::User> const& user);

    MCNAPI void $onUserStorageAreaChanged(
        ::std::shared_ptr<::Social::User> const&    user,
        ::std::shared_ptr<::Core::FileStorageArea>& oldStorageArea
    );
    // NOLINTEND
};
#else // @header-generator platform
class UserListObserver {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Social
