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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<uint>>  mFloorBlocks;
    ::ll::TypedStorage<8, 24, std::vector<uint>>  mCeilingBlocks;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mSeaBlock;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mFoundationBlock;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mBeachBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>  mFloorBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>  mCeilingBlocks;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mSeaBlock;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mFoundationBlock;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mBeachBlock;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BiomeCappedSurfaceData& operator=(BiomeCappedSurfaceData const&);
    BiomeCappedSurfaceData(BiomeCappedSurfaceData const&);
    BiomeCappedSurfaceData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BiomeCappedSurfaceData(::BiomeCappedSurfaceData const&);
#else // @header-generator platform
    MCAPI ::BiomeCappedSurfaceData& operator=(::BiomeCappedSurfaceData&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::BiomeCappedSurfaceData const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::BiomeCappedSurfaceData const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~BiomeCappedSurfaceData();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void write(::BinaryStream& stream) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Bedrock::Result<::BiomeCappedSurfaceData> read(::ReadOnlyBinaryStream& stream);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
