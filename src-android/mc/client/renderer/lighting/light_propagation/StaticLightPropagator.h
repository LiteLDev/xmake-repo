#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Bedrock__Swar__Mode.h"
#include "mc/Bedrock__Swar__SwarBase.h"
#include "mc/client/renderer/lighting/light_propagation/LightInfo.h"
#include "mc/platform/brstd/bitset.h"

// auto generated forward declare list
// clang-format off
class LightGradientColor;
class LightGradientStorage;
namespace LightPropagation { struct AccumulatedColor; }
namespace LightPropagation { struct Light; }
namespace LightPropagation { struct LightAccumulationVolume; }
namespace LightPropagation { struct RelightingParams; }
namespace LightPropagation { struct RenderChunkParams; }
namespace LightPropagation { struct SingleLightParams; }
namespace LightPropagation { struct SubChunkParams; }
namespace LightPropagation { struct Wall; }
// clang-format on

namespace LightPropagation {

class StaticLightPropagator {
public:
    // StaticLightPropagator inner types declare
    // clang-format off
    struct SeedRange;
    struct Seed;
    // clang-format on

    // StaticLightPropagator inner types define
    struct SeedRange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort>                        start;
        ::ll::TypedStorage<2, 2, ushort>                        end;
        ::ll::TypedStorage<2, 4, ::LightPropagation::LightInfo> lightInfo;
        // NOLINTEND
    };

    struct Seed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 3, ::glm::vec<3, uchar, (glm::qualifier)0>> position;
        ::ll::TypedStorage<1, 1, uchar>                                   lightIntensity;
        // NOLINTEND

    public:
        // prevent constructor by default
        Seed& operator=(Seed const&);
    };

    using StorageType = uint;

    using ActiveGradientsArray = std::array<std::array<LightGradientColor, 16>, 8>;

    using LightCell = ::Bedrock::Swar::SwarBase<uint, 4, (Bedrock::Swar::Mode)1>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                                                                 mModifiedVolumes;
    ::ll::TypedStorage<8, 24, std::vector<LightPropagation::StaticLightPropagator::SeedRange>> mSeedRanges;
    ::ll::TypedStorage<8, 24, std::vector<LightPropagation::StaticLightPropagator::Seed>>      mSeeds;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<3, uchar, (glm::qualifier)0>>>              mCurrentQueue;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<3, uchar, (glm::qualifier)0>>>              mNextQueue;
    ::ll::UntypedStorage<8, 13824>                                                             mVisited;
    ::ll::UntypedStorage<8, 24>                                                                mLights;
    ::ll::UntypedStorage<8, 24>                                                                mWalls;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initLights(
        std::vector<LightPropagation::Light> const&,
        std::variant<
            LightPropagation::SubChunkParams,
            LightPropagation::RenderChunkParams,
            LightPropagation::SingleLightParams,
            LightPropagation::RelightingParams>
    );

    MCNAPI ::brstd::bitset<27, uint>
    propagate(::LightPropagation::LightAccumulationVolume&, ::LightGradientStorage const&);
    // NOLINTEND
};

} // namespace LightPropagation
