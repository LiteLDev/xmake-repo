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

class ScriptBiomeAtmospherics {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptBiomeAtmospherics inner types define
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
    ::ll::UntypedStorage<8, 8>  mUnkc1823b;
    ::ll::UntypedStorage<8, 32> mUnk7a17e6;
    ::ll::UntypedStorage<8, 8>  mUnk847794;
    ::ll::UntypedStorage<8, 40> mUnkfeed04;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeAtmospherics& operator=(ScriptBiomeAtmospherics const&);
    ScriptBiomeAtmospherics(ScriptBiomeAtmospherics const&);
    ScriptBiomeAtmospherics();

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

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHorizonBlendMax();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHorizonBlendMieStart();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHorizonBlendMin();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHorizonBlendStart();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMoonMieStrength();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetRayleighStrength();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSkyHorizonColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSkyZenithColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSunGlareShape();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSunMieStrength();

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHorizonBlendMax(::std::variant<float, ::std::unordered_map<float, float>> const& blendMax);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHorizonBlendMieStart(::std::variant<float, ::std::unordered_map<float, float>> const& blendMieStart);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHorizonBlendMin(::std::variant<float, ::std::unordered_map<float, float>> const& blendMin);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHorizonBlendStart(::std::variant<float, ::std::unordered_map<float, float>> const& blendStart);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMoonMieStrength(::std::variant<float, ::std::unordered_map<float, float>> const& moonMieStrength);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setRayleighStrength(::std::variant<float, ::std::unordered_map<float, float>> const& rayleighStrength);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSkyHorizonColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSkyZenithColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSunGlareShape(::std::variant<float, ::std::unordered_map<float, float>> const& sunGlareShape);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSunMieStrength(::std::variant<float, ::std::unordered_map<float, float>> const& sunMieStrength);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
