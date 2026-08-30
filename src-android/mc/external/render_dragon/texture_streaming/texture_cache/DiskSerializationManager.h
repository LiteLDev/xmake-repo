#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/dragon__texturestreaming__PendingWriteBuffer.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace dragon::texturestreaming { struct CachedMipData; }
// clang-format on

namespace dragon::texturestreaming {

struct DiskSerializationManager {
public:
    // DiskSerializationManager inner types declare
    // clang-format off
    struct ImageTime;
    struct ImageMetadata;
    // clang-format on

    // DiskSerializationManager inner types define
    struct ImageTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> mYear;
        ::ll::TypedStorage<1, 1, uchar>  mMonth;
        ::ll::TypedStorage<1, 1, uchar>  mDay;
        ::ll::TypedStorage<1, 1, uchar>  mHour;
        ::ll::TypedStorage<1, 1, uchar>  mMinute;
        ::ll::TypedStorage<1, 1, uchar>  mSecond;
        // NOLINTEND
    };

    struct ImageMetadata {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                                                           mStartingMip;
        ::ll::TypedStorage<2, 2, ushort>                                                          mWidth;
        ::ll::TypedStorage<2, 2, ushort>                                                          mHeight;
        ::ll::TypedStorage<4, 4, uint>                                                            mFormat;
        ::ll::TypedStorage<2, 8, ::dragon::texturestreaming::DiskSerializationManager::ImageTime> mImageTime;
        ::ll::TypedStorage<4, 4, uint>                                                            mStartingBlock;
        ::ll::TypedStorage<1, 1, bool>                                                            mValidityByte;
        // NOLINTEND
    };

    using BlockAddressType = uint;

    using CheckSum = uint;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mCacheRestarts;
    ::ll::TypedStorage<8, 8, ulong> mReadCount;
    ::ll::TypedStorage<1, 1, bool> mWriteDisabled;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    ::ll::TypedStorage<8, 16, ::Core::File> mDiskCache;
    ::ll::TypedStorage<8, 24, std::string> mDiskCachePath;
    ::ll::TypedStorage<4, 4, uint> mBlockSize;
    ::ll::TypedStorage<4, 4, uint> mNumberOfBlocks;
    ::ll::TypedStorage<4, 4, uint> mMaxMipSize;
    ::ll::TypedStorage<4, 4, uint const> mHeaderSize;
    ::ll::TypedStorage<4, 4, uint const> mResidencyTableEntrySize;
    ::ll::TypedStorage<4, 4, uint> mResidencyTableSize;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, dragon::texturestreaming::DiskSerializationManager::ImageMetadata>> mResidencyTable;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mFreeResidentTableEntries;
    ::ll::TypedStorage<4, 4, uint> mBlockFreeListSize;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mBlockFreeList;
    ::ll::TypedStorage<4, 4, uint> mLastFreeBlock;
    ::ll::TypedStorage<8, 64, ::dragon::texturestreaming::PendingWriteBuffer> mPendingWriteBuffer;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DiskSerializationManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiskSerializationManager(std::string, uint, uint, uint, uint, bool);

    MCNAPI std::optional<std::vector<uint>> _claimFirstFreeBlocks(uint);

    MCNAPI void _forceRestartCache();

    MCNAPI void _initializeFreeBlockList();

    MCNAPI void _initializeResidencyTable();

    MCNAPI std::optional<dragon::texturestreaming::DiskSerializationManager::ImageMetadata>
           _isImageResident(ulong const&);

    MCNAPI ulong _read(void*, ulong&, ulong);

    MCNAPI std::optional<std::vector<cg::ImageBuffer>>
           _readImageAt(::dragon::texturestreaming::DiskSerializationManager::ImageMetadata const&);

    MCNAPI void _writeMipChainToDisk(std::vector<cg::ImageBuffer> const&, std::vector<uint> const&, uchar);

    MCNAPI bool _writeMipChainToResidencyTable(
        ulong const&,
        std::vector<cg::ImageBuffer> const&,
        std::vector<uint> const&,
        uchar,
        uchar,
        ushort,
        ushort
    );

    MCNAPI bool _writeNewFile();

    MCNAPI std::optional<dragon::texturestreaming::CachedMipData> deserialize(ulong const&);

    MCNAPI void flush();

    MCNAPI float getAverageBytesWrittenPerMinute() const;

    MCNAPI float getAverageReadsPerSecond() const;

    MCNAPI float getAverageWritesPerMinute() const;

    MCNAPI float getBlockUsePercentage() const;

    MCNAPI ulong getOnDiskSize();

    MCNAPI std::vector<std::pair<ulong, std::string>> getSerializationDebugEntries() const;

    MCNAPI void serialize(ulong const&, ::dragon::texturestreaming::CachedMipData const&);

    MCNAPI ~DiskSerializationManager();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<uint, 256> const& mCrcTable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, uint, uint, uint, uint, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::texturestreaming
