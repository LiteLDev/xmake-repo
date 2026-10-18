#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/certificates/PrivateKeyManager.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::PrivateKeyManager> mLocalKeys;
    ::ll::TypedStorage<8, 24, std::string>         mSelfSignedId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk6bd560;
    ::ll::UntypedStorage<8, 32> mUnk96bd31;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LocalAuthentication& operator=(LocalAuthentication const&);
    LocalAuthentication(LocalAuthentication const&);
#endif // @header-generator platform
    LocalAuthentication();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LocalAuthentication(std::string const&);

    MCNAPI std::string const& getSelfSignedId() const;

    MCNAPI ::RawGameServerToken
    makeToken(::LocalAuthentication::Signer, ::PlayerAuthenticationInfo, bool, ulong, bool, long);

    MCNAPI void overrideLocalKeys(::PrivateKeyManager const&);

    MCNAPI ~LocalAuthentication();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit LocalAuthentication(::std::string const& selfSignedId);

    MCNAPI ::RawGameServerToken makeToken(
        ::LocalAuthentication::Signer signer,
        ::PlayerAuthenticationInfo    authInfo,
        bool                          isSignedIn,
        uint64                        clientRandomId,
        bool                          isPrimary,
        int64                         timeCorrectionSeconds
    );

    MCNAPI ~LocalAuthentication();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string const& selfSignedId);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
