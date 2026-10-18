#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptRGB; }
#endif // @header-generator platform
namespace ScriptModuleServerGraphics { struct BiomeKey; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeLighting {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptBiomeLighting inner types define
    using Key = ::ScriptModuleServerGraphics::BiomeKey;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerLevel*>                         mServerLevel;
    ::ll::TypedStorage<8, 24, std::string>                           mBiomeId;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptPlayer*> mPlayer;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>            mPlayerId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk78dde0;
    ::ll::UntypedStorage<8, 32> mUnkf75dd0;
    ::ll::UntypedStorage<8, 8>  mUnk79888d;
    ::ll::UntypedStorage<8, 40> mUnkd81ff9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeLighting(ScriptBiomeLighting const&);
    ScriptBiomeLighting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    _sendResetPacket(::GraphicsOverrideParameterType parameterType);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType parameterType,
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& inKeyframes
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType                                  parameterType,
        ::std::variant<float, ::std::unordered_map<float, float>> const& inKeyframes,
        float                                                            minValue,
        float                                                            maxValue
    );

    MCNAPI ::ScriptModuleServerGraphics::ScriptBiomeLighting&
    operator=(::ScriptModuleServerGraphics::ScriptBiomeLighting const&);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetAmbientColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetAmbientIlluminance();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetEmissiveDesaturation();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetFlashColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetFlashIlluminance();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMoonColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMoonIlluminance();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetOrbitalOffsetDegrees();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSkyIntensity();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSunColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSunIlluminance();

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setAmbientColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setAmbientIlluminance(::std::variant<float, ::std::unordered_map<float, float>> const& illuminance);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setFlashColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setFlashIlluminance(::std::variant<float, ::std::unordered_map<float, float>> const& illuminance);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMoonColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMoonIlluminance(::std::variant<float, ::std::unordered_map<float, float>> const& illuminance);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setOrbitalOffsetDegrees(::std::variant<float, ::std::unordered_map<float, float>> const& degrees);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSkyIntensity(::std::variant<float, ::std::unordered_map<float, float>> const& intensity);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSunColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSunIlluminance(::std::variant<float, ::std::unordered_map<float, float>> const& illuminance);

    MCNAPI ~ScriptBiomeLighting();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
