#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SoundEvent;
class SoundItem;
namespace Core { class PathView; }
// clang-format on

class SoundEventRepository {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                                   mSoundMapLock;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<SoundEvent>>> mSoundEventMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(std::string const&, std::shared_ptr<SoundEvent>);

    MCNAPI void clearEventMap();

    MCNAPI std::shared_ptr<SoundEvent> getEvent(std::string const&) const;

    MCNAPI bool getItem(std::string const&, ::SoundItem&) const;

    MCNAPI bool getItem(std::string const&, ::SoundItem&, uint&) const;

    MCNAPI bool getItem(std::string const&, ::Core::PathView, ::SoundItem&) const;

    MCNAPI ~SoundEventRepository();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
