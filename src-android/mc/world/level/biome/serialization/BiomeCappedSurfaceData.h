#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeCappedSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uint>>  mFloorBlocks;
    ::ll::TypedStorage<8, 24, std::vector<uint>>  mCeilingBlocks;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mSeaBlock;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mFoundationBlock;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mBeachBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeCappedSurfaceData(::BiomeCappedSurfaceData const&);

    MCNAPI bool operator==(::BiomeCappedSurfaceData const&) const;

    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~BiomeCappedSurfaceData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BiomeCappedSurfaceData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeCappedSurfaceData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
