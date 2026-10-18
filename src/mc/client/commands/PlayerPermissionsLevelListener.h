#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/LevelListener.h"

class PlayerPermissionsLevelListener : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCommandsChangedCallback;
    ::ll::UntypedStorage<8, 48> mWorldTemplateOptionsUnlockedCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerPermissionsLevelListener();

    virtual void onLevelDataCommandsChanged(bool);

    virtual void onLevelDataWorldTemplateOptionsUnlocked();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerPermissionsLevelListener(std::function<void(bool)>, std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void(bool)>, std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLevelDataCommandsChanged(bool);

    MCNAPI void $onLevelDataWorldTemplateOptionsUnlocked();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PlayerPermissionsLevelListener {};
#endif // @header-generator platform
