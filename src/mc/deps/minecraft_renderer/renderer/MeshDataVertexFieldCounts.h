#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct MeshDataVertexFieldCounts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mPositions;
    ::ll::TypedStorage<1, 1, bool>  mNormals;
    ::ll::TypedStorage<1, 1, bool>  mTangents;
    ::ll::TypedStorage<1, 1, bool>  mIndices;
    ::ll::TypedStorage<1, 1, bool>  mColors;
    ::ll::TypedStorage<1, 1, bool>  mBoneId0s;
    ::ll::TypedStorage<1, 1, bool>  mTextureUVs;
    ::ll::TypedStorage<1, 1, bool>  mPBRTextureIndices;
    ::ll::TypedStorage<1, 1, bool>  mMERSs;
    ::ll::TypedStorage<1, 1, bool>  mGeoType;
    ::ll::TypedStorage<8, 8, ulong> mCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MeshDataVertexFieldCounts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mPositions;
    ::ll::TypedStorage<1, 1, bool>   mNormals;
    ::ll::TypedStorage<1, 1, bool>   mTangents;
    ::ll::TypedStorage<1, 1, bool>   mIndices;
    ::ll::TypedStorage<1, 1, bool>   mColors;
    ::ll::TypedStorage<1, 1, bool>   mBoneId0s;
    ::ll::TypedStorage<1, 1, bool>   mTextureUVs;
    ::ll::TypedStorage<1, 1, bool>   mPBRTextureIndices;
    ::ll::TypedStorage<1, 1, bool>   mMERSs;
    ::ll::TypedStorage<1, 1, bool>   mGeoType;
    ::ll::TypedStorage<8, 8, uint64> mCount;
    // NOLINTEND
};
#else // @header-generator platform
struct MeshDataVertexFieldCounts {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
