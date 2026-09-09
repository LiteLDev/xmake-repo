#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/renderer/VertexField.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct MeshDataVertexFieldCounts; }
// clang-format on

namespace mce {

class MeshData {
public:
    // MeshData inner types define
    using Index = uint;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::mce::PrimitiveMode> mMode;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<3, float, (glm::qualifier)0>>> mPositions;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<4, float, (glm::qualifier)0>>> mNormals;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<4, float, (glm::qualifier)0>>> mTangents;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mIndices;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mColors;
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mBoneId0s;
    ::ll::TypedStorage<8, 72, std::vector<glm::vec<2, float, (glm::qualifier)0>>[3]> mTextureUVs;
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mPBRTextureIndices;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mMERS;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mGeoType;
    ::ll::TypedStorage<4, 24, std::pair<glm::vec<3, float, (glm::qualifier)0>, glm::vec<3, float, (glm::qualifier)0>>> mAABB;
    ::ll::TypedStorage<1, 15, std::array<bool, 15>> mFieldEnabled;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshData(::mce::MeshData&&);

    MCNAPI MeshData(::mce::MeshData const&);

    MCNAPI void clear();

    MCNAPI void enableField(::mce::VertexField const);

    MCNAPI void expandAABBWith(::glm::vec<3, float, (glm::qualifier)0> const&);

    MCNAPI void
    expandAABBWith(const glm::vec<3, float, (glm::qualifier)0>*, const glm::vec<3, float, (glm::qualifier)0>*);

    MCNAPI void freeMemory();

    MCNAPI ::mce::MeshDataVertexFieldCounts getVertexFieldCount() const;

    MCNAPI bool hasField(::mce::VertexField const) const;

    MCNAPI ::mce::MeshData& operator=(::mce::MeshData&&);

    MCNAPI ulong size() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::MeshData&&);

    MCNAPI void* $ctor(::mce::MeshData const&);
    // NOLINTEND
};

} // namespace mce
