#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/NetworkSettingOptions.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/NetworkSettingOptions.h"

class CompressedNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>             mSendBuffer;
    ::ll::TypedStorage<8, 24, std::string>             mReceiveBuffer;
    ::ll::TypedStorage<1, 1, bool>                     mCompressionEnabled;
    ::ll::TypedStorage<1, 1, bool>                     mHybridCompressionEnabled;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mSendBuffer;
    ::ll::TypedStorage<8, 32, ::std::string> mReceiveBuffer;
    ::ll::TypedStorage<1, 1, bool>           mCompressionEnabled;
    ::ll::TypedStorage<1, 1, bool>           mHybridCompressionEnabled;
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 8, uint64> mMaxDecompressedSize;
#endif
#endif // @header-generator platform
    ::ll::TypedStorage<4, 20, ::NetworkSettingOptions> mNetworkSettings;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CompressedNetworkPeer();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CompressedNetworkPeer();
#else // @header-generator platform
    virtual ~CompressedNetworkPeer() /*override*/ = default;
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
    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CompressedNetworkPeer(std::shared_ptr<NetworkPeer>);

    MCNAPI void setCompressionEnabled(::NetworkSettingOptions);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<NetworkPeer>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    MCNAPI void
    $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);
#endif // @header-generator platform

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string&,
        std::shared_ptr<std::chrono::time_point<
            std::chrono::steady_clock,
            std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&
#else // @header-generator platform
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
