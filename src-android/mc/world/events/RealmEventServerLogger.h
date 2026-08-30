#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/IRealmEventLogger.h"

// auto generated forward declare list
// clang-format off
class LevelEventCoordinator;
// clang-format on

class RealmEventServerLogger : public ::IRealmEventLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&> mLevelEventCoordinator;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmEventServerLogger& operator=(RealmEventServerLogger const&);
    RealmEventServerLogger(RealmEventServerLogger const&);
    RealmEventServerLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmEventServerLogger();

    virtual void logEvent(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmEventServerLogger(::LevelEventCoordinator&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelEventCoordinator&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $logEvent(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
