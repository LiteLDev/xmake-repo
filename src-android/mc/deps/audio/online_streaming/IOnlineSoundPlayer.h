#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioDecodeContext; }
namespace Audio { class OnlineAudioStream; }
// clang-format on

namespace Audio {

class IOnlineSoundPlayer {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IOnlineSoundPlayer() = default;

    virtual ulong play(std::shared_ptr<Audio::AudioDecodeContext>, ::WeakRef<Audio::OnlineAudioStream>, float, float) = 0;

    virtual ulong playMusic(std::shared_ptr<Audio::AudioDecodeContext>, ::WeakRef<Audio::OnlineAudioStream>, float, float) = 0;

    virtual bool stop(ulong) = 0;

    virtual bool isPlaying(ulong) const = 0;

    virtual std::vector<ulong> cleanupFinished() = 0;

    virtual void updateGapPausing() = 0;

    virtual void fadeOutMusic(float) = 0;

    virtual void stopMusic() = 0;

    virtual void pauseMusic(bool) = 0;

    virtual bool isPlayingMusic() const = 0;

    virtual void stopAll() = 0;

    virtual ulong getNewSoundHandle() = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Audio
