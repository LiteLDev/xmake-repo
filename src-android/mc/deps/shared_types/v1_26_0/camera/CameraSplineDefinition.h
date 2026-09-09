#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineControlPoint.h"
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineProgressKeyFrame.h"
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineRotationKeyFrame.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct CameraSplineDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                     mName;
    ::ll::TypedStorage<4, 4, float>                                                            mTotalTime;
    ::ll::TypedStorage<8, 24, std::string>                                                     mSplineType;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineControlPoint>>     mSplineControlPoints;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineProgressKeyFrame>> mSplineProgressFrames;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineRotationKeyFrame>> mSplineRotationFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraSplineDefinition(CameraSplineDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraSplineDefinition();

    MCNAPI ::SharedTypes::v1_26_0::CameraSplineDefinition& operator=(::SharedTypes::v1_26_0::CameraSplineDefinition&&);

    MCNAPI bool operator==(::SharedTypes::v1_26_0::CameraSplineDefinition const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
