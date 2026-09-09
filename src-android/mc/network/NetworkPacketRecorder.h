#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/network/Compressibility.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class NetworkPacketRecorder : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPacketTime;
    ::ll::TypedStorage<1, 1, bool> mRecordingToFile;
    ::ll::TypedStorage<8, 16, ::Core::File> mFile;
    ::ll::TypedStorage<1, 1, bool> mIncludeSentPackets;
    ::ll::TypedStorage<1, 1, bool> mIncludeReceivedPackets;
    ::ll::TypedStorage<1, 1, bool> mToBase64;
    ::ll::TypedStorage<8, 24, std::vector<int>> mAllowList;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkPacketRecorder();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const;

    virtual ::NetworkPeer::DataStatus _receivePacket(std::string&, std::shared_ptr<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> const&);
    // clang-format on
    // NOLINTEND
};
