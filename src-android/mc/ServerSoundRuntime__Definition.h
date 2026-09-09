#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ServerSoundRuntime__DurationInfo.h"
#include "mc/ServerSoundRuntime__MusicInfo.h"

namespace ServerSoundRuntime {

struct Definition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                              mSoundEventName;
    ::ll::TypedStorage<8, 24, std::optional<ServerSoundRuntime::DurationInfo>>                          mDurationInfo;
    ::ll::TypedStorage<8, 136, std::optional<ServerSoundRuntime::MusicInfo>>                            mMusicInfo;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::vector<std::string>>>> mTags;
    // NOLINTEND
};

} // namespace ServerSoundRuntime
