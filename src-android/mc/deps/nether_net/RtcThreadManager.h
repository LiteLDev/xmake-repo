#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ThreadConfiguration;
namespace webrtc { class SocketServer; }
namespace webrtc { class Thread; }
// clang-format on

namespace NetherNet {

class RtcThreadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<webrtc::Thread>> mRtcThread;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::thread>>     mThread;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::Thread* GetRtcThread() const;

    MCNAPI void Initialize(char const*, ::ThreadConfiguration const&, std::unique_ptr<webrtc::SocketServer>&&);

    MCNAPI std::shared_ptr<webrtc::Thread> LoadRtcThread() const;

    MCNAPI void SetRtcThread(std::shared_ptr<webrtc::Thread>);

    MCNAPI void Shutdown();
    // NOLINTEND
};

} // namespace NetherNet
