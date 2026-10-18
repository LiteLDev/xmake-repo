#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/nether_net/NetworkID.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace NetherNet::Utils { template<typename T0> class ThreadSafe; }
#else // @header-generator platform
namespace NetherNet { struct NetworkID; }
#endif // @header-generator platform
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class PeerRecordTable : public ::NetherNet::ContextProxy {
public:
    // PeerRecordTable inner types declare
    // clang-format off
    struct PeerRecord;
    // clang-format on

    // PeerRecordTable inner types define
    struct PeerRecord {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastActiveTime;
        ::ll::UntypedStorage<8, 72> mAddress;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk6d0d23;
        ::ll::UntypedStorage<8, 80> mUnkc826b3;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        PeerRecord& operator=(PeerRecord const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        PeerRecord(PeerRecord const&);
#endif // @header-generator platform
        PeerRecord();
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using PeerRecordContainer =
        ::NetherNet::Utils::ThreadSafe<std::map<NetherNet::NetworkID, NetherNet::PeerRecordTable::PeerRecord>>;

    using PeerRecordContainerView =
        ::NetherNet::Utils::ThreadSafe<std::map<NetherNet::NetworkID, NetherNet::PeerRecordTable::PeerRecord>>::View;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mTable;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 96> mUnkdc67f9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PeerRecordTable& operator=(PeerRecordTable const&);
    PeerRecordTable(PeerRecordTable const&);
#endif // @header-generator platform
    PeerRecordTable();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PeerRecordTable();
#else // @header-generator platform
    virtual ~PeerRecordTable() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddOrUpdate(
#if defined(LL_PLAT_A) // @header-generator platform
        ::NetherNet::NetworkID,
        ::webrtc::SocketAddress const&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
#else // @header-generator platform
        ::NetherNet::NetworkID                  networkID,
        ::webrtc::SocketAddress const&          address,
        ::std::chrono::steady_clock::time_point timeOfDiscovery
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool Contains(::NetherNet::NetworkID);

    MCNAPI bool Find(::NetherNet::NetworkID, ::webrtc::SocketAddress*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<std::pair<NetherNet::NetworkID, NetherNet::PeerRecordTable::PeerRecord>>
    RemoveExpiredRecords(
        ::NetherNet::Utils::ThreadSafe<
            std::map<NetherNet::NetworkID, NetherNet::PeerRecordTable::PeerRecord>>::View const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long, std::ratio<60, 1>> const& EXPIRE_AFTER();
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
#else // @header-generator platform
    MCNAPI bool Find(::NetherNet::NetworkID networkID, ::webrtc::SocketAddress* pOut);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet
