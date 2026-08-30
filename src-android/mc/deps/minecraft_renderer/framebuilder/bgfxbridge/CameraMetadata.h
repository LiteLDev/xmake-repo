#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder::gamecomponents { struct GameplayMetadata; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

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

} // namespace mce::framebuilder::bgfxbridge
