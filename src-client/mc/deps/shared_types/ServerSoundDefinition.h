#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/DurationInfo.h"
#include "mc/deps/shared_types/MusicInfo.h"
#include "mc/deps/shared_types/TagValueList.h"

namespace SharedTypes::Beta::Sound {

struct ServerSoundDefinition {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mSoundEventName;
    ::ll::TypedStorage<4, 12, std::optional<SharedTypes::Beta::Sound::DurationInfo>> mDurationInfo;
    ::ll::TypedStorage<8, 136, std::optional<SharedTypes::Beta::Sound::MusicInfo>> mMusicInfo;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, SharedTypes::Beta::Sound::TagValueList>>> mTags;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::Beta::Sound
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
