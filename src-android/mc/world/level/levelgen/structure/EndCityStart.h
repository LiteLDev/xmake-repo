#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class Random;
// clang-format on

class EndCityStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsValid;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EndCityStart();

    virtual bool isValid() const;

    virtual std::string_view getStructureName() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getYPositionForFeature(::ChunkPos const&, ::Dimension&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
