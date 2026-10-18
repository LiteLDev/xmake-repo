#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/UserImpl.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/GameUserType.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
template<typename T0> class CallbackTokenContext;
namespace Core { class FileStorageArea; }
namespace Social { struct UserDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class User_generic : public ::Social::UserImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    User_generic();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~User_generic();

    virtual void _doDisconnect();

    virtual void _doConnectAsync(std::shared_ptr<CallbackTokenContext<std::function<void (Social::UserPlatformConnectionResult)>>>, bool);

    virtual std::string _getPlatformDisplayName() const;

    virtual bool _checkPlatformUserXBLSignInConstraints() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_doDisconnect();

    MCNAPI void $_doConnectAsync(
        std::shared_ptr<CallbackTokenContext<std::function<void(Social::UserPlatformConnectionResult)>>>,
        bool
    );

    MCNAPI std::string $_getPlatformDisplayName() const;

    MCNAPI bool $_checkPlatformUserXBLSignInConstraints() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class User_generic {};
#endif // @header-generator platform

} // namespace Social
