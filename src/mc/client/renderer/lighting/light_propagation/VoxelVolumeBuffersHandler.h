#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class Pool;
namespace dragon { struct ResolvedShaderBufferResource; }
namespace mce { class VolumeOffsetMap; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace LightPropagation {

class VoxelVolumeBuffersHandler {
public:
    // VoxelVolumeBuffersHandler inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct VolumeBlob;
#else // @header-generator platform
#endif // @header-generator platform
    struct GpuUploadSnapshot;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct VolumeBlob;
#endif // @header-generator platform
    // clang-format on

    // VoxelVolumeBuffersHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct VolumeBlob {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16504, std::array<uint, 4126>> mData;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct GpuUploadSnapshot {
    public:
        // GpuUploadSnapshot inner types declare
        // clang-format off
        struct VolumeUpload;
        // clang-format on

        // GpuUploadSnapshot inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct VolumeUpload {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, uint>                                                                      mOffset;
            ::ll::TypedStorage<8, 16, std::shared_ptr<LightPropagation::VoxelVolumeBuffersHandler::VolumeBlob>> mBuffer;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::vector<LightPropagation::VoxelVolumeBuffersHandler::GpuUploadSnapshot::VolumeUpload>> mUploads;
        ::ll::TypedStorage<8, 40, std::unordered_map<glm::vec<4, short, (glm::qualifier)0>, uint>> mActiveOffsets;
        ::ll::TypedStorage<8, 8, ulong> mLinearBufferSize;
        ::ll::TypedStorage<1, 1, bool> mOffsetMapChanged;
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
        struct VolumeUpload {};
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                                      mModifiedOffsetsMutex;
    ::ll::UntypedStorage<8, 24>                                                                mModifiedOffsets;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::VolumeOffsetMap>>                            mVolumeOffsetMap;
    ::ll::TypedStorage<8, 8, ulong>                                                            mVoxelBufferElementCount;
    ::ll::UntypedStorage<8, 24>                                                                mGpuVoxelBuffer;
    ::ll::UntypedStorage<8, 24>                                                                mGpuVolumeOffsets;
    ::ll::TypedStorage<8, 40, std::unordered_map<glm::vec<4, short, (glm::qualifier)0>, uint>> mLastUploadedOffsets;
    ::ll::UntypedStorage<8, 8>                                                                 mVolumeBlobPool;
    // NOLINTEND
#else // @header-generator platform
    struct VolumeBlob {};
#endif // @header-generator platform
};

} // namespace LightPropagation
