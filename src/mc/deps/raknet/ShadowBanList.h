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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 16, std::array<std::byte, 16>>                         ip;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> banTime;
        ::ll::TypedStorage<2, 2, ushort>                                             count;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 16> mUnkf16431;
        ::ll::UntypedStorage<8, 8>  mUnke80799;
        ::ll::UntypedStorage<2, 2>  mUnk309783;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using Time = std::chrono::duration<long long, std::ratio<1, 1>>;
#else // @header-generator platform
    using BanCallback = ::std::function<void(::std::string const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BanCallback = std::function<void(const std::string&)>;
#else // @header-generator platform
    using Ip = ::std::array<::std::byte, 16>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Ip = std::array<std::byte, 16>;
#else // @header-generator platform
    using LoggingFunctor = ::std::function<void(::std::string const&)>;

    using Time = ::std::chrono::seconds;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>               banExpiryDuration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>               appHandshakeGracePeriod;
    ::ll::TypedStorage<8, 10240, std::array<std::optional<RakNet::ShadowBanList::Entry>, 256>> mEntries;
    ::ll::UntypedStorage<8, 48>                                                                mBanCallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> banExpiryDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> appHandshakeGracePeriod;
    ::ll::TypedStorage<8, 10240, ::std::array<::std::optional<::RakNet::ShadowBanList::Entry>, 256>> mEntries;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>                           mBanCallback;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ShadowBanList();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ShadowBanList(
        std::function<void(const std::string&)>,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        std::chrono::duration<long long, std::ratio<1, 1>>
    );
#else // @header-generator platform
    MCAPI ushort addBan(::RakNet::SystemAddress const& addr, ::std::chrono::seconds time);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort addBan(::RakNet::SystemAddress const&, std::chrono::duration<long long, std::ratio<1, 1>> const);

    MCNAPI ::RakNet::RakPeer::RemoteSystemStruct* shouldDisconnectConnection(
        ::RakNet::SystemAddress,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        ::gsl::span<RakNet::RakPeer::RemoteSystemStruct*>
#else // @header-generator platform
    MCAPI ::RakNet::RakPeer::RemoteSystemStruct* shouldDisconnectConnection(
        ::RakNet::SystemAddress                             srcAddr,
        ::std::chrono::seconds                              now,
        ::gsl::span<::RakNet::RakPeer::RemoteSystemStruct*> remotes
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
