#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

// auto generated forward declare list
// clang-format off
class OceanMonumentPiece;
class Random;
class RoomDefinition;
// clang-format on

class FitDoubleYRoom : public ::MonumentRoomFitter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FitDoubleYRoom();

    virtual bool fits(::RoomDefinition const&) const;

    virtual std::unique_ptr<OceanMonumentPiece> create(int&, std::shared_ptr<RoomDefinition>, ::Random&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $fits(::RoomDefinition const&) const;

    MCNAPI std::unique_ptr<OceanMonumentPiece> $create(int&, std::shared_ptr<RoomDefinition>, ::Random&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
