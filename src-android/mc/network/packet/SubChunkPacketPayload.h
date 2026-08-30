#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SubChunkPacketPayload {
public:
    // SubChunkPacketPayload inner types declare
    // clang-format off
    struct SubChunkPosOffset;
    struct HeightmapData;
    struct SubChunkPacketData;
    // clang-format on

    // SubChunkPacketPayload inner types define
    enum class SubChunkRequestResult : uchar {
        Undefined             = 0,
        Success               = 1,
        LevelChunkDoesntExist = 2,
        WrongDimension        = 3,
        PlayerDoesntExist     = 4,
        IndexOutOfBounds      = 5,
        SuccessAllAir         = 6,
    };

    enum class HeightMapDataType : uchar {
        NoData     = 0,
        HasData    = 1,
        AllTooHigh = 2,
        AllTooLow  = 3,
        AllCopied  = 4,
    };

    struct SubChunkPosOffset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, schar> mX;
        ::ll::TypedStorage<1, 1, schar> mY;
        ::ll::TypedStorage<1, 1, schar> mZ;
        // NOLINTEND
    };

    struct HeightmapData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::HeightMapDataType>             mHeightMapType;
        ::ll::TypedStorage<1, 257, std::optional<std::array<std::array<schar, 16>, 16>>> mSubchunkHeightMap;
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::HeightMapDataType>             mRenderHeightMapType;
        ::ll::TypedStorage<1, 257, std::optional<std::array<std::array<schar, 16>, 16>>> mSubchunkRenderHeightMap;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static schar const& HEIGHT_COLUMN_ABOVE_SUBCHUNK();

        MCNAPI static schar const& HEIGHT_COLUMN_BELOW_SUBCHUNK();
        // NOLINTEND
    };

    struct SubChunkPacketData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 3, ::SubChunkPacketPayload::SubChunkPosOffset>     mSubChunkPosOffset;
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::SubChunkRequestResult> mResult;
        ::ll::TypedStorage<8, 32, std::optional<std::string>>                    mSerializedSubChunk;
        ::ll::TypedStorage<1, 516, ::SubChunkPacketPayload::HeightmapData>       mHeightMapData;
        ::ll::TypedStorage<8, 16, std::optional<ulong>>                          mBlobId;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::SubChunkPacketPayload::SubChunkPacketData const&) const;
        // NOLINTEND
    };

    using HeightMapArray = std::array<std::array<schar, 16>, 16>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                    mCacheEnabled;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                         mDimensionType;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPacketPayload::SubChunkPacketData>> mSubChunkData;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                          mCenterPos;
    // NOLINTEND
};
