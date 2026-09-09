#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineDefinition.h"

struct CameraSplinePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineDefinition>> mSplines;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CameraSplinePacketPayload(std::vector<SharedTypes::v1_26_0::CameraSplineDefinition>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<SharedTypes::v1_26_0::CameraSplineDefinition>);
    // NOLINTEND
};
