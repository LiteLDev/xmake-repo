#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/certificates/PrivateKeyManager.h"

// auto generated forward declare list
// clang-format off
struct PlayerAuthenticationInfo;
struct RawGameServerToken;
// clang-format on

class LocalAuthentication {
public:
    // LocalAuthentication inner types define
    enum class Signer : int {
        Self = 0,
        Host = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::PrivateKeyManager> mLocalKeys;
    ::ll::TypedStorage<8, 24, std::string>         mSelfSignedId;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalAuthentication();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LocalAuthentication(std::string const&);

    MCNAPI std::string const& getSelfSignedId() const;

    MCNAPI ::RawGameServerToken
    makeToken(::LocalAuthentication::Signer, ::PlayerAuthenticationInfo, bool, ulong, bool, long);

    MCNAPI void overrideLocalKeys(::PrivateKeyManager const&);

    MCNAPI ~LocalAuthentication();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
