#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/NetworkID.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::Utils { template<typename T0> class ThreadSafe; }
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
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastActiveTime;
        ::ll::UntypedStorage<8, 72> mAddress;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        PeerRecord& operator=(PeerRecord const&);
        PeerRecord();
    };

    using PeerRecordContainer =
        ::NetherNet::Utils::ThreadSafe<std::map<NetherNet::NetworkID, NetherNet::PeerRecordTable::PeerRecord>>;

    using PeerRecordContainerView =
        ::NetherNet::Utils::ThreadSafe<std::map<NetherNet::NetworkID, NetherNet::PeerRecordTable::PeerRecord>>::View;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mTable;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerRecordTable();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PeerRecordTable();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddOrUpdate(
        ::NetherNet::NetworkID,
        ::webrtc::SocketAddress const&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

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
    // NOLINTEND
};

} // namespace NetherNet
