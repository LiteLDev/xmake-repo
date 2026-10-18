#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce::framebuilder::gamecomponents { struct GameplayMetadata; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPos;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mFacingDirection;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraMetadata& operator=(CameraMetadata const&);
    CameraMetadata(CameraMetadata const&);
    CameraMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CameraMetadata(::mce::framebuilder::gamecomponents::GameplayMetadata const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::framebuilder::gamecomponents::GameplayMetadata const&);
    // NOLINTEND
};
#else // @header-generator platform
struct CameraMetadata {};
#endif // @header-generator platform

} // namespace mce::framebuilder::bgfxbridge
