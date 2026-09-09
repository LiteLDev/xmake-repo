#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakPeer.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ShadowBanList {
public:
    // ShadowBanList inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // ShadowBanList inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 16, std::array<std::byte, 16>>                         ip;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> banTime;
        ::ll::TypedStorage<2, 2, ushort>                                             count;
        // NOLINTEND
    };

    using Time = std::chrono::duration<long long, std::ratio<1, 1>>;

    using BanCallback = std::function<void(const std::string&)>;

    using Ip = std::array<std::byte, 16>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>               banExpiryDuration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>               appHandshakeGracePeriod;
    ::ll::TypedStorage<8, 10240, std::array<std::optional<RakNet::ShadowBanList::Entry>, 256>> mEntries;
    ::ll::UntypedStorage<8, 48>                                                                mBanCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowBanList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShadowBanList(
        std::function<void(const std::string&)>,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        std::chrono::duration<long long, std::ratio<1, 1>>
    );

    MCNAPI ushort addBan(::RakNet::SystemAddress const&, std::chrono::duration<long long, std::ratio<1, 1>> const);

    MCNAPI ::RakNet::RakPeer::RemoteSystemStruct* shouldDisconnectConnection(
        ::RakNet::SystemAddress,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        ::gsl::span<RakNet::RakPeer::RemoteSystemStruct*>
    );

    MCNAPI bool tryUnban(::RakNet::SystemAddress const&);

    MCNAPI ulong updateBans(std::chrono::duration<long long, std::ratio<1, 1>> const);

    MCNAPI ~ShadowBanList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<void(const std::string&)>,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        std::chrono::duration<long long, std::ratio<1, 1>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
