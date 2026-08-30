#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
struct XTaskQueueObject;
struct XalAndroidArgs;
struct XalPlatformCryptoCallbacks;
struct XalPlatformDateTimeCallbacks;
struct XalPlatformOperationToken;
struct XalPlatformRemoteConnectEventHandlers2;
struct XalPlatformStorageEventHandlers;
struct XalRegistrationToken;
struct XalUser;
struct XalUserGetTokenAndSignatureArgs;
struct XalUserGetTokenAndSignatureData;
struct XalUserLocalId;
enum XalAgeGroup : uint;
enum XalGamertagComponent : uint;
enum XalPlatformOperationResult : uint;
enum XalPrivilege : uint;
enum XalPrivilegeCheckDenyReasons : uint;
enum XalUserChangeType : uint;
enum XalUserState : uint;
// clang-format on

namespace Social {

class XalApiWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~XalApiWrapper();

    virtual void _customInvoke(std::function<void()>&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int addUserWithUiAsync(uint, ::XAsyncBlock*);

    MCNAPI int addUserWithUiResult(::XAsyncBlock*, ::XalUser**);

    MCNAPI int cleanupAsync(::XAsyncBlock*);

    MCNAPI int initialize(::XalAndroidArgs*, ::XTaskQueueObject*);

    MCNAPI int platformRemoteConnectCancelPrompt(::XalPlatformOperationToken*);

    MCNAPI int platformRemoteConnectSetEventHandlers(::XTaskQueueObject*, ::XalPlatformRemoteConnectEventHandlers2*);

    MCNAPI int platformStorageClearComplete(::XalPlatformOperationToken*, ::XalPlatformOperationResult);

    MCNAPI int
    platformStorageReadComplete(::XalPlatformOperationToken*, ::XalPlatformOperationResult, ulong, void const*);

    MCNAPI int platformStorageSetEventHandlers(::XTaskQueueObject*, ::XalPlatformStorageEventHandlers*);

    MCNAPI int platformStorageWriteComplete(::XalPlatformOperationToken*, ::XalPlatformOperationResult);

    MCNAPI int signOutUserAsync(::XalUser*, ::XAsyncBlock*);

    MCNAPI bool signOutUserAsyncIsPresent();

    MCNAPI int signOutUserResult(::XAsyncBlock*);

    MCNAPI int tryAddDefaultUserSilentlyAsync(uint, ::XAsyncBlock*);

    MCNAPI int tryAddDefaultUserSilentlyResult(::XAsyncBlock*, ::XalUser**);

    MCNAPI int userCheckPrivilege(::XalUser*, ::XalPrivilege, bool*, ::XalPrivilegeCheckDenyReasons*);

    MCNAPI void userCloseHandle(::XalUser*);

    MCNAPI int userDuplicateHandle(::XalUser*, ::XalUser**);

    MCNAPI int userGetAgeGroup(::XalUser*, ::XalAgeGroup*);

    MCNAPI int userGetGamertag(::XalUser*, ::XalGamertagComponent, ulong, char*, ulong*);

    MCNAPI ulong userGetGamertagSize(::XalUser*, ::XalGamertagComponent);

    MCNAPI int userGetId(::XalUser*, ulong*);

    MCNAPI int userGetState(::XalUser*, ::XalUserState*);

    MCNAPI int
    userGetTokenAndSignatureSilentlyAsync(::XalUser*, ::XalUserGetTokenAndSignatureArgs const*, ::XAsyncBlock*);

    MCNAPI int
    userGetTokenAndSignatureSilentlyResult(::XAsyncBlock*, ulong, void*, ::XalUserGetTokenAndSignatureData**, ulong*);

    MCNAPI int userGetTokenAndSignatureSilentlyResultSize(::XAsyncBlock*, ulong*);

    MCNAPI bool userIsGuest(::XalUser*);

    MCNAPI void userUnregisterChangeEventHandler(::XalRegistrationToken);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gsl::not_null<std::shared_ptr<Social::XalApiWrapper>> create();

    MCNAPI static ::gsl::not_null<std::shared_ptr<Social::XalApiWrapper>>
    createIfNull(std::shared_ptr<Social::XalApiWrapper>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
