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
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EncryptedNetworkPeer();

    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;

    virtual bool isEncrypted() const;

    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void enableEncryption(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI bool $isEncrypted() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
        std::string&,
        std::shared_ptr<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
