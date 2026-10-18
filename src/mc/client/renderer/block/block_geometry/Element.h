#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/ElementBox.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace BlockGeometry { struct ElementBox; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace BlockGeometry {

#if defined(LL_PLAT_A) // @header-generator platform
struct Element {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                             mName;
    ::ll::TypedStorage<8, 24, std::string>                             mParent;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPivot;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mRotation;
    ::ll::TypedStorage<8, 24, std::vector<BlockGeometry::ElementBox>>  mBoxes;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Element {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mName;
    ::ll::TypedStorage<8, 32, ::std::string>                              mParent;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                mPivot;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                mRotation;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockGeometry::ElementBox>> mBoxes;
    // NOLINTEND
};
#else // @header-generator platform
struct Element {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockGeometry
