#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabAccountInfo.h"

// auto generated forward declare list
// clang-format off
class SecureStorage;
namespace Social { class ISecureStorageProvider; }
namespace Social { class PlayFabApi; }
// clang-format on

namespace Social {

class PlayFabSecureStorage {
public:
    // PlayFabSecureStorage inner types define
    using SecureStoragePtr = ::gsl::not_null<std::shared_ptr<SecureStorage>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::Social::PlayFabAccountInfo>                   mAccountInfo;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::ISecureStorageProvider>> mStorageProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabSecureStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayFabSecureStorage(std::unique_ptr<Social::ISecureStorageProvider>);

    MCNAPI ::Social::PlayFabAccountInfo
    getDeviceAccountInfo(bool, ::gsl::not_null<std::shared_ptr<Social::PlayFabApi>>);

    MCNAPI void removeDeviceAccount(::gsl::not_null<std::shared_ptr<Social::PlayFabApi>>);

    MCNAPI ~PlayFabSecureStorage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Social::PlayFabSecureStorage& getInstance(std::unique_ptr<Social::ISecureStorageProvider>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<Social::ISecureStorageProvider>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
