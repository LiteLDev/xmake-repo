#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ThreadConfiguration;
namespace webrtc { class SocketServer; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace webrtc { class Thread; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace NetherNet {

class RtcThreadManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<webrtc::Thread>> mRtcThread;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::thread>>     mThread;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkb04ae0;
    ::ll::UntypedStorage<8, 8>  mUnk8b9d08;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RtcThreadManager& operator=(RtcThreadManager const&);
    RtcThreadManager(RtcThreadManager const&);
    RtcThreadManager();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::webrtc::Thread* GetRtcThread() const;

    MCNAPI void Initialize(char const*, ::ThreadConfiguration const&, std::unique_ptr<webrtc::SocketServer>&&);

    MCNAPI std::shared_ptr<webrtc::Thread> LoadRtcThread() const;

    MCNAPI void SetRtcThread(std::shared_ptr<webrtc::Thread>);
#else // @header-generator platform
    MCNAPI void Initialize(
        char const*                                 threadName,
        ::ThreadConfiguration const&                threadConfiguration,
        ::std::unique_ptr<::webrtc::SocketServer>&& socketServer
    );
#endif // @header-generator platform

    MCNAPI void Shutdown();
    // NOLINTEND
};

} // namespace NetherNet
