#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace NetherNet { class PeerConnectionObserver; }
namespace NetherNet { struct SessionState; }
namespace webrtc { class RTCIceCandidatePairStats; }
namespace webrtc { class RTCLocalIceCandidateStats; }
namespace webrtc { class RTCRemoteIceCandidateStats; }
namespace webrtc { class RTCTransportStats; }
// clang-format on

namespace NetherNet {

class Statistics {
public:
    // Statistics inner types declare
    // clang-format off
    struct Snapshot;
    // clang-format on

    // Statistics inner types define
    struct Snapshot {
    public:
        // Snapshot inner types declare
        // clang-format off
        struct CandidateInfo;
        struct CandidatePairInfo;
        struct Error;
        // clang-format on

        // Snapshot inner types define
        struct CandidateInfo {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, std::string> mType;
            ::ll::TypedStorage<8, 24, std::string> mNetworkType;
            ::ll::TypedStorage<8, 24, std::string> mIp;
            ::ll::TypedStorage<8, 24, std::string> mUrl;
            // NOLINTEND

        public:
            // prevent constructor by default
            CandidateInfo& operator=(CandidateInfo const&);
            CandidateInfo(CandidateInfo const&);

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::Json::Value toJson() const;
            // NOLINTEND
        };

        struct CandidatePairInfo {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, std::string>                                   mLocalCandidate;
            ::ll::TypedStorage<8, 24, std::string>                                   mRemoteCandidate;
            ::ll::TypedStorage<8, 24, std::vector<std::string>>                      mStates;
            ::ll::TypedStorage<8, 8, ulong>                                          mTotalBytesSent;
            ::ll::TypedStorage<8, 8, ulong>                                          mTotalPacketsSent;
            ::ll::TypedStorage<8, 8, ulong>                                          mTotalBytesReceived;
            ::ll::TypedStorage<8, 8, ulong>                                          mTotalPacketsReceived;
            ::ll::TypedStorage<8, 8, ulong>                                          mBytesSentPerSecond;
            ::ll::TypedStorage<4, 4, float>                                          mAvgBytesSentPerSecond;
            ::ll::TypedStorage<8, 8, ulong>                                          mMaxBytesSentPerSecond;
            ::ll::TypedStorage<8, 8, ulong>                                          mPacketsSentPerSecond;
            ::ll::TypedStorage<4, 4, float>                                          mAvgPacketsSentPerSecond;
            ::ll::TypedStorage<8, 8, ulong>                                          mMaxPacketsSentPerSecond;
            ::ll::TypedStorage<8, 8, ulong>                                          mBytesReceivedPerSecond;
            ::ll::TypedStorage<4, 4, float>                                          mAvgBytesReceivedPerSecond;
            ::ll::TypedStorage<8, 8, ulong>                                          mMaxBytesReceivedPerSecond;
            ::ll::TypedStorage<8, 8, ulong>                                          mPacketsReceivedPerSecond;
            ::ll::TypedStorage<4, 4, float>                                          mAvgPacketsReceivedPerSecond;
            ::ll::TypedStorage<8, 8, ulong>                                          mMaxPacketsReceivedPerSecond;
            ::ll::TypedStorage<4, 4, std::chrono::duration<float, std::ratio<1, 1>>> mRTT;
            ::ll::TypedStorage<4, 4, std::chrono::duration<float, std::ratio<1, 1>>> mAvgRTT;
            // NOLINTEND

        public:
            // prevent constructor by default
            CandidatePairInfo& operator=(CandidatePairInfo const&);
            CandidatePairInfo(CandidatePairInfo const&);
        };

        struct Error {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>>> mTime;
            ::ll::TypedStorage<8, 24, std::string> mAddress;
            ::ll::TypedStorage<4, 4, int> mPort;
            ::ll::TypedStorage<8, 24, std::string> mUrl;
            ::ll::TypedStorage<4, 4, int> mErrorCode;
            ::ll::TypedStorage<8, 24, std::string> mErrorMessage;
            // clang-format on
            // NOLINTEND

        public:
            // prevent constructor by default
            Error& operator=(Error const&);
            Error(Error const&);
            Error();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~Error();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>>> mStartTime;
        ::ll::UntypedStorage<8, 48> mLocalCandidates;
        ::ll::UntypedStorage<8, 48> mRemoteCandidates;
        ::ll::UntypedStorage<8, 48> mPairs;
        ::ll::TypedStorage<8, 24, std::string> mActivePair;
        ::ll::TypedStorage<8, 8, ulong> mSamples;
        ::ll::TypedStorage<8, 24, std::vector<NetherNet::Statistics::Snapshot::Error>> mErrors;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Json::Value summarize() const;

        MCNAPI ~Snapshot();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 248> mSnapshot;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mSnapshotTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mIceCandidateErrorSub;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Statistics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Statistics(::NetherNet::PeerConnectionObserver&);

    MCNAPI void _onIceCandidateError(std::string const&, int, std::string const&, int, std::string const&);

    MCNAPI void addSnapshot(
        ::gsl::span<std::reference_wrapper<const webrtc::RTCTransportStats>>,
        ::gsl::span<std::reference_wrapper<const webrtc::RTCLocalIceCandidateStats>>,
        ::gsl::span<std::reference_wrapper<const webrtc::RTCRemoteIceCandidateStats>>,
        ::gsl::span<std::reference_wrapper<const webrtc::RTCIceCandidatePairStats>>
    );

    MCNAPI ::Json::Value createSummary() const;

    MCNAPI bool getLastSnapshot(::NetherNet::SessionState&) const;

    MCNAPI ~Statistics();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::PeerConnectionObserver&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
