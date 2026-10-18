#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 24, std::string> mType;
            ::ll::TypedStorage<8, 24, std::string> mNetworkType;
            ::ll::TypedStorage<8, 24, std::string> mIp;
            ::ll::TypedStorage<8, 24, std::string> mUrl;
#else // @header-generator platform
            ::ll::UntypedStorage<8, 32> mUnk1da984;
            ::ll::UntypedStorage<8, 32> mUnk72a20a;
            ::ll::UntypedStorage<8, 32> mUnk9e82e7;
            ::ll::UntypedStorage<8, 32> mUnk26c7c4;
#endif // @header-generator platform
            // NOLINTEND

        public:
            // prevent constructor by default
            CandidateInfo& operator=(CandidateInfo const&);
            CandidateInfo(CandidateInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
            CandidateInfo();
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
            ::ll::UntypedStorage<8, 32> mUnkecd324;
            ::ll::UntypedStorage<8, 32> mUnka0240a;
            ::ll::UntypedStorage<8, 24> mUnkc65c79;
            ::ll::UntypedStorage<8, 8>  mUnk9cf83a;
            ::ll::UntypedStorage<8, 8>  mUnkf780a2;
            ::ll::UntypedStorage<8, 8>  mUnk51d3ea;
            ::ll::UntypedStorage<8, 8>  mUnkfe4c93;
            ::ll::UntypedStorage<8, 8>  mUnk3df295;
            ::ll::UntypedStorage<4, 4>  mUnkbfc03b;
            ::ll::UntypedStorage<8, 8>  mUnk29fa9b;
            ::ll::UntypedStorage<8, 8>  mUnk1c379a;
            ::ll::UntypedStorage<4, 4>  mUnk5f1714;
            ::ll::UntypedStorage<8, 8>  mUnkc27c2b;
            ::ll::UntypedStorage<8, 8>  mUnkf48383;
            ::ll::UntypedStorage<4, 4>  mUnkb3ec4f;
            ::ll::UntypedStorage<8, 8>  mUnkf708bb;
            ::ll::UntypedStorage<8, 8>  mUnkffaa5c;
            ::ll::UntypedStorage<4, 4>  mUnk843055;
            ::ll::UntypedStorage<8, 8>  mUnk24f73f;
            ::ll::UntypedStorage<4, 4>  mUnkf1cbb8;
            ::ll::UntypedStorage<4, 4>  mUnkdb74d9;
#endif // @header-generator platform
            // NOLINTEND

        public:
            // prevent constructor by default
            CandidatePairInfo& operator=(CandidatePairInfo const&);
            CandidatePairInfo(CandidatePairInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
            CandidatePairInfo();
#endif // @header-generator platform
        };

        struct Error {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            // clang-format off
            ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>>> mTime;
            ::ll::TypedStorage<8, 24, std::string> mAddress;
            ::ll::TypedStorage<4, 4, int> mPort;
            ::ll::TypedStorage<8, 24, std::string> mUrl;
            ::ll::TypedStorage<4, 4, int> mErrorCode;
            ::ll::TypedStorage<8, 24, std::string> mErrorMessage;
            // clang-format on
#else // @header-generator platform
            ::ll::UntypedStorage<8, 8>  mUnkecf3e0;
            ::ll::UntypedStorage<8, 32> mUnk1a61f0;
            ::ll::UntypedStorage<4, 4>  mUnk9f98c7;
            ::ll::UntypedStorage<8, 32> mUnk73b258;
            ::ll::UntypedStorage<4, 4>  mUnkbf3ab7;
            ::ll::UntypedStorage<8, 32> mUnk863119;
#endif // @header-generator platform
            // NOLINTEND

        public:
            // prevent constructor by default
            Error& operator=(Error const&);
            Error(Error const&);
            Error();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000>>>> mStartTime;
        ::ll::UntypedStorage<8, 48> mLocalCandidates;
        ::ll::UntypedStorage<8, 48> mRemoteCandidates;
        ::ll::UntypedStorage<8, 48> mPairs;
        ::ll::TypedStorage<8, 24, std::string> mActivePair;
        ::ll::TypedStorage<8, 8, ulong> mSamples;
        ::ll::TypedStorage<8, 24, std::vector<NetherNet::Statistics::Snapshot::Error>> mErrors;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnkf0a43b;
        ::ll::UntypedStorage<8, 48> mUnk6455ae;
        ::ll::UntypedStorage<8, 48> mUnkbd8162;
        ::ll::UntypedStorage<8, 48> mUnkafd951;
        ::ll::UntypedStorage<8, 32> mUnkc4514a;
        ::ll::UntypedStorage<8, 8>  mUnk513830;
        ::ll::UntypedStorage<8, 24> mUnk629ac1;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Snapshot& operator=(Snapshot const&);
        Snapshot(Snapshot const&);
        Snapshot();
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 248> mSnapshot;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mSnapshotTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mIceCandidateErrorSub;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 296> mUnk34ba9e;
    ::ll::UntypedStorage<8, 8>   mUnk51aac8;
    ::ll::UntypedStorage<8, 16>  mUnkb3c95c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Statistics& operator=(Statistics const&);
    Statistics(Statistics const&);
#endif // @header-generator platform
    Statistics();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Statistics(::NetherNet::PeerConnectionObserver&);
#else // @header-generator platform
    MCNAPI explicit Statistics(::NetherNet::PeerConnectionObserver& peerObserver);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onIceCandidateError(std::string const&, int, std::string const&, int, std::string const&);

    MCNAPI void addSnapshot(
        ::gsl::span<std::reference_wrapper<const webrtc::RTCTransportStats>>,
        ::gsl::span<std::reference_wrapper<const webrtc::RTCLocalIceCandidateStats>>,
        ::gsl::span<std::reference_wrapper<const webrtc::RTCRemoteIceCandidateStats>>,
        ::gsl::span<std::reference_wrapper<const webrtc::RTCIceCandidatePairStats>>
#else // @header-generator platform
    MCNAPI void _onIceCandidateError(
        ::std::string const& address,
        int                  port,
        ::std::string const& url,
        int                  errorCode,
        ::std::string const& errorMessage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value createSummary() const;
#else // @header-generator platform
    MCNAPI void addSnapshot(
        ::gsl::span<::std::reference_wrapper<::webrtc::RTCTransportStats const>>          transportsStats,
        ::gsl::span<::std::reference_wrapper<::webrtc::RTCLocalIceCandidateStats const>>  localCandidatesStats,
        ::gsl::span<::std::reference_wrapper<::webrtc::RTCRemoteIceCandidateStats const>> remoteCandidatesStats,
        ::gsl::span<::std::reference_wrapper<::webrtc::RTCIceCandidatePairStats const>>   candidatePairsStats
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getLastSnapshot(::NetherNet::SessionState&) const;
#else // @header-generator platform
    MCNAPI bool getLastSnapshot(::NetherNet::SessionState& state) const;
#endif // @header-generator platform

    MCNAPI ~Statistics();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::NetherNet::PeerConnectionObserver&);
#else // @header-generator platform
    MCNAPI void* $ctor(::NetherNet::PeerConnectionObserver& peerObserver);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
