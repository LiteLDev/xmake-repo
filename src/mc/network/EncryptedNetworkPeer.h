#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class HMAC; }
namespace Crypto::Symmetric { class Symmetric; }
// clang-format on

class EncryptedNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Symmetric::Symmetric>> mDecryption;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Hash::HMAC>>           mEncryptionMAC;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Symmetric::Symmetric>> mEncryption;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Hash::HMAC>>           mDecryptionMAC;
    ::ll::TypedStorage<8, 8, ulong>                                         mSendCounter;
    ::ll::TypedStorage<8, 8, ulong>                                         mReceiveCounter;
    ::ll::TypedStorage<8, 24, std::string>                                  mSendEncryptedDataBuffer;
    ::ll::TypedStorage<8, 24, std::string>                                  mSendSignedDataBuffer;
    ::ll::TypedStorage<8, 24, std::string>                                  mRecvEncryptedDataBuffer;
    ::ll::TypedStorage<8, 24, std::string>                                  mRecvSignedDataBuffer;
    ::ll::TypedStorage<8, 24, std::string>                                  mRecvDecryptedDataBuffer;
    ::ll::TypedStorage<1, 1, bool>                                          mSkipEncryption;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Symmetric::Symmetric>> mDecryption;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Hash::HMAC>>           mEncryptionMAC;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Symmetric::Symmetric>> mEncryption;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Hash::HMAC>>           mDecryptionMAC;
    ::ll::TypedStorage<8, 8, uint64>                                            mSendCounter;
    ::ll::TypedStorage<8, 8, uint64>                                            mReceiveCounter;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSendEncryptedDataBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSendSignedDataBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mRecvEncryptedDataBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mRecvSignedDataBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mRecvDecryptedDataBuffer;
    ::ll::TypedStorage<1, 1, bool>                                              mSkipEncryption;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EncryptedNetworkPeer();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~EncryptedNetworkPeer();
#else // @header-generator platform
    virtual ~EncryptedNetworkPeer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    virtual void sendPacket(
        ::std::string const&       data,
        ::NetworkPeer::Reliability reliability,
        ::Compressibility          compressible
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;
#else // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEncrypted() const;
#else // @header-generator platform
    virtual bool isEncrypted() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
#else // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enableEncryption(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void enableEncryption(::std::string const& symmetricKey);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    MCAPI void
    $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
#else // @header-generator platform
    MCFOLD ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEncrypted() const;
#else // @header-generator platform
    MCAPI bool $isEncrypted() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
        std::string&,
        std::shared_ptr<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
#else // @header-generator platform
    MCAPI ::NetworkPeer::DataStatus $_receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
