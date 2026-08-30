#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class MessPublicKeyManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // MessPublicKeyManager inner types define
    enum class PublicKeysEndpoint : ushort {
        Login      = 0,
        Signing    = 1,
        Encryption = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::monostate>> mAlive;
    ::ll::TypedStorage<4, 40, std::mutex>                      mPublicKeyMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mMessLoginPublicKeys;
    ::ll::TypedStorage<4, 40, std::mutex>                      mSigningMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mMessSigningPublicKeys;
    ::ll::TypedStorage<4, 40, std::mutex>                      mEncryptionMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mMessEncryptionPublicKeys;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MessPublicKeyManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessPublicKeyManager();

    MCNAPI std::vector<std::string> getMessLoginPublicKeys();

    MCNAPI std::vector<std::string> getMessSigningPublicKeys();

    MCNAPI void requestPublicKeys(::MessPublicKeyManager::PublicKeysEndpoint, std::function<void(bool)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
