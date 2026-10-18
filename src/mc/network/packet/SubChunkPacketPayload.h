#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SubChunkPacketPayload {
public:
    // SubChunkPacketPayload inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct SubChunkPosOffset;
#else // @header-generator platform
#endif // @header-generator platform
    struct HeightmapData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct SubChunkPosOffset;
#endif // @header-generator platform
    struct SubChunkPacketData;
    // clang-format on

    // SubChunkPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class HeightMapDataType : uchar {
        NoData     = 0,
        HasData    = 1,
        AllTooHigh = 2,
        AllTooLow  = 3,
        AllCopied  = 4,
    };

#endif // @header-generator platform
    enum class SubChunkRequestResult : uchar {
        Undefined             = 0,
        Success               = 1,
        LevelChunkDoesntExist = 2,
        WrongDimension        = 3,
        PlayerDoesntExist     = 4,
        IndexOutOfBounds      = 5,
        SuccessAllAir         = 6,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class HeightMapDataType : uchar {
        NoData     = 0,
        HasData    = 1,
        AllTooHigh = 2,
        AllTooLow  = 3,
        AllCopied  = 4,
#else // @header-generator platform
    struct HeightmapData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::HeightMapDataType>                   mHeightMapType;
        ::ll::TypedStorage<1, 257, ::std::optional<::std::array<::std::array<schar, 16>, 16>>> mSubchunkHeightMap;
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::HeightMapDataType>                   mRenderHeightMapType;
        ::ll::TypedStorage<1, 257, ::std::optional<::std::array<::std::array<schar, 16>, 16>>> mSubchunkRenderHeightMap;
        // NOLINTEND

    public:
        HeightmapData() {
            mHeightMapType       = HeightMapDataType::NoData;
            mRenderHeightMapType = HeightMapDataType::NoData;
        }
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct SubChunkPacketData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 3, ::SubChunkPacketPayload::SubChunkPosOffset>     mSubChunkPosOffset;
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::SubChunkRequestResult> mResult;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 32, std::optional<std::string>>                    mSerializedSubChunk;
#else // @header-generator platform
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mSerializedSubChunk;
#endif // @header-generator platform
        ::ll::TypedStorage<1, 516, ::SubChunkPacketPayload::HeightmapData>       mHeightMapData;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::optional<ulong>>                          mBlobId;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                       mBlobId;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        SubChunkPacketData(SubChunkPosOffset const& pos, SubChunkRequestResult requestResult) {
            mSubChunkPosOffset                   = pos;
            mResult                              = requestResult;
            mSerializedSubChunk                  = {};
            mHeightMapData->mHeightMapType       = HeightMapDataType::NoData;
            mHeightMapData->mRenderHeightMapType = HeightMapDataType::NoData;
            mBlobId                              = 0;
        }

        SubChunkPacketData& operator=(SubChunkPacketData const& rhs) {
            mSubChunkPosOffset                   = rhs.mSubChunkPosOffset;
            mSerializedSubChunk                  = rhs.mSerializedSubChunk;
            mResult                              = rhs.mResult;
            mHeightMapData->mHeightMapType       = rhs.mHeightMapData->mHeightMapType;
            mHeightMapData->mRenderHeightMapType = rhs.mHeightMapData->mRenderHeightMapType;
            mBlobId                              = rhs.mBlobId;
            return *this;
        }

        SubChunkPacketData() {
            mSubChunkPosOffset = {
                0,
                0,
                0,
            };
            mResult                              = SubChunkRequestResult::Undefined;
            mSerializedSubChunk                  = {};
            mHeightMapData->mHeightMapType       = HeightMapDataType::NoData;
            mHeightMapData->mRenderHeightMapType = HeightMapDataType::NoData;
            mBlobId                              = 0;
        }
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::SubChunkPacketPayload::SubChunkPacketData const&) const;
#else // @header-generator platform
        MCAPI bool operator==(::SubChunkPacketPayload::SubChunkPacketData const&) const;

#ifdef LL_PLAT_C
        MCAPI ~SubChunkPacketData();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using HeightMapArray = std::array<std::array<schar, 16>, 16>;
#else // @header-generator platform
    using HeightMapArray = ::std::array<::std::array<schar, 16>, 16>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                    mCacheEnabled;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                         mDimensionType;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPacketPayload::SubChunkPacketData>> mSubChunkData;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                          mCenterPos;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                        mCacheEnabled;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                             mDimensionType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPacketPayload::SubChunkPacketData>> mSubChunkData;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                              mCenterPos;
#endif // @header-generator platform
    // NOLINTEND
};
