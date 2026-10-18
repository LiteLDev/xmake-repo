#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineControlPoint.h"
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineProgressKeyFrame.h"
#include "mc/deps/shared_types/v1_26_0/camera/CameraSplineRotationKeyFrame.h"
#include "mc/platform/Result.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
#else // @header-generator platform
namespace SharedTypes::v1_26_0 { struct CameraSplineControlPoint; }
namespace SharedTypes::v1_26_0 { struct CameraSplineProgressKeyFrame; }
namespace SharedTypes::v1_26_0 { struct CameraSplineRotationKeyFrame; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct CameraSplineDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                     mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                            mTotalTime;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                     mSplineType;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineControlPoint>>     mSplineControlPoints;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineProgressKeyFrame>> mSplineProgressFrames;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_0::CameraSplineRotationKeyFrame>> mSplineRotationFrames;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mSplineType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineControlPoint>> mSplineControlPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineProgressKeyFrame>>
        mSplineProgressFrames;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::CameraSplineRotationKeyFrame>>
        mSplineRotationFrames;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    CameraSplineDefinition(CameraSplineDefinition const&);
#else // @header-generator platform
    CameraSplineDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraSplineDefinition();
#else // @header-generator platform
    MCAPI CameraSplineDefinition(::SharedTypes::v1_26_0::CameraSplineDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_0::CameraSplineDefinition& operator=(::SharedTypes::v1_26_0::CameraSplineDefinition&&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_0::CameraSplineDefinition& operator=(::SharedTypes::v1_26_0::CameraSplineDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_0::CameraSplineDefinition const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_0::CameraSplineDefinition&
    operator=(::SharedTypes::v1_26_0::CameraSplineDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_0::CameraSplineDefinition const& rhs) const;

    MCAPI ~CameraSplineDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_0::CameraSplineDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
