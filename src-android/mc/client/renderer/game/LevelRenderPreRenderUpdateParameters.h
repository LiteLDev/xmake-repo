#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/FakeHDRSetting.h"
#include "mc/deps/minecraft_renderer/game/FrustumCullerType.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class FrustumCuller;
// clang-format on

struct LevelRenderPreRenderUpdateParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FrustumCuller&>                         culler;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> cameraWorldPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> cameraTargetWorldPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> cameraForward;
    ::ll::TypedStorage<4, 4, uint const>                               viewBlockRadius;
    ::ll::TypedStorage<4, 4, float const>                              currentTime;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                           region;
    ::ll::TypedStorage<4, 4, ::FakeHDRSetting>                         enableFakeHDR;
    ::ll::TypedStorage<4, 4, float>                                    skyIntensityOverride;
    ::ll::TypedStorage<4, 4, float>                                    renderDistanceScalar;
    ::ll::TypedStorage<1, 1, bool>                                     isVibrantVisualsEnabled;
    ::ll::TypedStorage<1, 1, ::LevelCullerType>                        levelCullerType;
    ::ll::TypedStorage<1, 1, ::LevelCullerType>                        shadowLevelCullerType;
    ::ll::TypedStorage<1, 1, ::FrustumCullerType>                      frustumCullerType;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRenderPreRenderUpdateParameters& operator=(LevelRenderPreRenderUpdateParameters const&);
    LevelRenderPreRenderUpdateParameters(LevelRenderPreRenderUpdateParameters const&);
    LevelRenderPreRenderUpdateParameters();
};
