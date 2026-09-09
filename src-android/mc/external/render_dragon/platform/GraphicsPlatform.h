#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/ShaderCodePlatform.h"

namespace dragon::platform {

struct GraphicsPlatform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mHiDefSupport;
    ::ll::TypedStorage<1, 1, ::dragon::materials::ShaderCodePlatform> mShaderPlatform;
    ::ll::TypedStorage<8, 24, std::string>                            mChipsetName;
    ::ll::TypedStorage<8, 24, std::string>                            mChipsetVendorName;
    ::ll::TypedStorage<8, 24, std::string>                            mGraphicsVersion;
    ::ll::TypedStorage<8, 24, std::string>                            mDriverVersion;
    ::ll::TypedStorage<8, 24, std::string>                            mGraphicsExtensions;
    ::ll::TypedStorage<8, 24, std::string>                            mGraphicsPlatformExtensions;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, uint, (glm::qualifier)0>>  mScreenDimensions;
    ::ll::TypedStorage<4, 4, uint>                                    mVendorId;
    ::ll::TypedStorage<4, 4, uint>                                    mDeviceId;
    ::ll::TypedStorage<4, 4, uint>                                    mSubSysId;
    ::ll::TypedStorage<4, 4, uint>                                    mRevision;
    ::ll::TypedStorage<8, 8, ulong>                                   mDedicatedVideoMemory;
    ::ll::TypedStorage<8, 8, ulong>                                   mDedicatedSystemMemory;
    ::ll::TypedStorage<8, 8, ulong>                                   mSharedSystemMemory;
    ::ll::TypedStorage<8, 8, ulong>                                   mReservedVideoMemory;
    ::ll::TypedStorage<1, 1, bool>                                    mRaytracing;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsPlatform& operator=(GraphicsPlatform const&);
    GraphicsPlatform();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GraphicsPlatform(::dragon::platform::GraphicsPlatform const&);

    MCNAPI ~GraphicsPlatform();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::platform::GraphicsPlatform const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::platform
