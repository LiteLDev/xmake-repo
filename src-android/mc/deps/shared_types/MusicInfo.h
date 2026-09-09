#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::Sound {

struct MusicInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mGenres;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mMoods;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              mArtist;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              mTitle;
    // NOLINTEND
};

} // namespace SharedTypes::Beta::Sound
