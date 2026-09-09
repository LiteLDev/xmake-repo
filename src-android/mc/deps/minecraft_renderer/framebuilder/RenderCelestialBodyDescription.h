#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderCelestialBodyDescription {
public:
    // RenderCelestialBodyDescription inner types define
    enum class CelestialBodyType : int {
        Sun      = 0,
        Moon     = 1,
        EndFlash = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                                     mMesh;
    ::ll::UntypedStorage<8, 24>                                                                      mTexture;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                                          mColor;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>                            mWorldMatrix;
    ::ll::TypedStorage<2, 2, ushort const>                                                           mViewId;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::RenderCelestialBodyDescription::CelestialBodyType> mType;
    ::ll::TypedStorage<1, 1, bool>                                     mIsCameraUnderLiquid;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mDirectionToLightSource;
    ::ll::TypedStorage<4, 4, float>                                    mSunMoonEmissiveMultiplier;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderCelestialBodyDescription& operator=(RenderCelestialBodyDescription const&);
    RenderCelestialBodyDescription(RenderCelestialBodyDescription const&);
    RenderCelestialBodyDescription();
};

} // namespace mce::framebuilder
