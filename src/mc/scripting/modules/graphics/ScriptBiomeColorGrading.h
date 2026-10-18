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
class Vec3;
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

class ScriptBiomeColorGrading {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptBiomeColorGrading inner types define
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
    ::ll::UntypedStorage<8, 8>  mUnk255e2d;
    ::ll::UntypedStorage<8, 32> mUnkb3ab0b;
    ::ll::UntypedStorage<8, 8>  mUnk5c890c;
    ::ll::UntypedStorage<8, 40> mUnk81b971;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeColorGrading(ScriptBiomeColorGrading const&);
    ScriptBiomeColorGrading();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    _sendResetPacket(::GraphicsOverrideParameterType parameterType);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType parameterType,
        ::Vec3 const&                   inValue,
        ::Vec3 const&                   minValue,
        ::Vec3 const&                   maxValue
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    _sendSetPacket(::GraphicsOverrideParameterType parameterType, float inValue, float minValue, float maxValue);

    MCNAPI ::ScriptModuleServerGraphics::ScriptBiomeColorGrading&
    operator=(::ScriptModuleServerGraphics::ScriptBiomeColorGrading const&);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsContrast();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsGain();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsGamma();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsMin();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsOffset();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsSaturation();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesContrast();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesGain();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesGamma();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesOffset();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesSaturation();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsContrast();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsGain();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsGamma();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsMax();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsOffset();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsSaturation();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetTemperature();

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsContrast(::Vec3 const& highlightsContrast);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHighlightsGain(::Vec3 highlightsGain);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHighlightsGamma(::Vec3 highlightsGamma);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHighlightsMin(float highlightsMin);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHighlightsOffset(::Vec3 highlightsOffset);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsSaturation(::Vec3 highlightsSaturation);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesContrast(::Vec3 const& midtonesContrast);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMidtonesGain(::Vec3 midtonesGain);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMidtonesGamma(::Vec3 midtonesGamma);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMidtonesOffset(::Vec3 midtonesOffset);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesSaturation(::Vec3 midtonesSaturation);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setShadowsContrast(::Vec3 const& shadowsContrast);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsGain(::Vec3 shadowsGain);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsGamma(::Vec3 shadowsGamma);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsMax(float shadowsMax);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsOffset(::Vec3 shadowsOffset);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsSaturation(::Vec3 shadowsSaturation);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setTemperature(float temperature);

    MCNAPI ~ScriptBiomeColorGrading();
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
