#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/CameraMatrices.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class MeshInstanceConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> OVERLAY_COLOR;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> TILE_LIGHT_COLOR;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  TILE_LIGHT_INTENSITY;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> BLOCK_LIGHT_COLOR;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> CHANGE_COLOR;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> GLINT_COLOR;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> UV_ANIM;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> MULTIPLICATIVE_TINT_CHANGE_COLOR;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  UV_OFFSET;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  UV_ROTATION;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  UV_SCALE;
    ::ll::TypedStorage<4, 192, ::mce::CameraMatrices>                  mCamera;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshInstanceConstants& operator=(MeshInstanceConstants const&);
    MeshInstanceConstants();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MeshInstanceConstants(::ScreenContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScreenContext&);
    // NOLINTEND
};
