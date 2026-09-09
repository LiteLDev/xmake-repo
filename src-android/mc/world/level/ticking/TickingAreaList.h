#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ticking/TickingAreaListBase.h"

// auto generated forward declare list
// clang-format off
class ITickingArea;
class LevelStorage;
class Vec3;
// clang-format on

class TickingAreaList : public ::TickingAreaListBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TickingAreaList();

    virtual bool removeDistantEntityAreasAndCheckForRemoved(std::vector<Vec3> const&, std::function<void (const ITickingArea&)>, ::LevelStorage&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $removeDistantEntityAreasAndCheckForRemoved(
        std::vector<Vec3> const&,
        std::function<void(const ITickingArea&)>,
        ::LevelStorage&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
