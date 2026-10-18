#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/network/Compressibility.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/MinecraftPacketIds.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/NetworkPeer.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class NetworkPacketRecorder : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPacketTime;
    ::ll::TypedStorage<1, 1, bool> mRecordingToFile;
    ::ll::TypedStorage<8, 16, ::Core::File> mFile;
    ::ll::TypedStorage<1, 1, bool> mIncludeSentPackets;
    ::ll::TypedStorage<1, 1, bool> mIncludeReceivedPackets;
    ::ll::TypedStorage<1, 1, bool> mToBase64;
    ::ll::TypedStorage<8, 24, std::vector<int>> mAllowList;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastPacketTime;
    ::ll::TypedStorage<1, 1, bool>                                    mRecordingToFile;
    ::ll::TypedStorage<8, 16, ::Core::File>                           mFile;
    ::ll::TypedStorage<1, 1, bool>                                    mIncludeSentPackets;
    ::ll::TypedStorage<1, 1, bool>                                    mIncludeReceivedPackets;
    ::ll::TypedStorage<1, 1, bool>                                    mToBase64;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                     mAllowList;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    NetworkPacketRecorder();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);
#else // @header-generator platform
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;
#else // @header-generator platform
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
#else // @header-generator platform
    virtual ::NetworkPeer::DataStatus
    _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
