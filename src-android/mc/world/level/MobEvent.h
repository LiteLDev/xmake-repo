#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mLocalizableName;
    ::ll::TypedStorage<1, 1, bool>         mEnabled;
    ::ll::TypedStorage<1, 1, bool>         mIsDefaultSet;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEvent(MobEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getLocalizableName() const;

    MCNAPI bool isEnabled() const;

    MCNAPI ~MobEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
