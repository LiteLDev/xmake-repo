#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderBatchSkinnedMeshDescription {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::mce::Mesh const*> mMesh;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMaterial;
    ::ll::TypedStorage<2, 2, ushort> mNumBones;
    ::ll::TypedStorage<1, 1, bool> mIsDitheringEnabled;
    ::ll::TypedStorage<4, 28, std::variant<std::pair<glm::vec<3, float, (glm::qualifier)0>, glm::vec<3, float, (glm::qualifier)0>>>> mBoundingVolume;
    // clang-format on
    // NOLINTEND
};

} // namespace mce::framebuilder
