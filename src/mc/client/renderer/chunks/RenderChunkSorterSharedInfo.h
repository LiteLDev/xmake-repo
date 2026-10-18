#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class RenderChunkSorterSharedInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, std::atomic<float>> x;
    ::ll::TypedStorage<4, 4, std::atomic<float>> y;
    ::ll::TypedStorage<4, 4, std::atomic<float>> z;
    ::ll::TypedStorage<4, 4, std::atomic<float>> dx;
    ::ll::TypedStorage<4, 4, std::atomic<float>> dy;
    ::ll::TypedStorage<4, 4, std::atomic<float>> dz;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>  cameraIsOrthographic;
    // NOLINTEND
};
#else // @header-generator platform
class RenderChunkSorterSharedInfo {};
#endif // @header-generator platform
