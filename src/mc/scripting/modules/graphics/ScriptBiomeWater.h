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

class ScriptBiomeWater {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptBiomeWater inner types define
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
    ::ll::UntypedStorage<8, 8>  mUnk4e5505;
    ::ll::UntypedStorage<8, 32> mUnk6cfe64;
    ::ll::UntypedStorage<8, 8>  mUnk53fac5;
    ::ll::UntypedStorage<8, 40> mUnkf844f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeWater(ScriptBiomeWater const&);
    ScriptBiomeWater();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    _sendResetPacket(::GraphicsOverrideParameterType parameterType);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    _sendSetPacket(::GraphicsOverrideParameterType parameterType, float inValue, float minValue, float maxValue);

    MCNAPI ::ScriptModuleServerGraphics::ScriptBiomeWater&
    operator=(::ScriptModuleServerGraphics::ScriptBiomeWater const&);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetCDOM();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetChlorophyll();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSuspendedSediment();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesDepth();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesDirectionIncrement();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesFrequency();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesFrequencyScaling();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesMix();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesOctaves();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesPull();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesShape();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesSpeed();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesSpeedScaling();

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setCDOM(float cdom);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setChlorophyll(float chlorophyll);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSuspendedSediment(float suspendedSediment);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesDepth(float wavesDepth);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesDirectionIncrement(float wavesDirectionIncrement);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesFrequency(float wavesFrequency);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesFrequencyScaling(float wavesFrequencyScaling);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesMix(float wavesMix);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesPull(float wavesPull);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesShape(float wavesShape);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesSpeed(float wavesSpeed);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesSpeedScaling(float wavesSpeedScaling);

    MCNAPI ~ScriptBiomeWater();
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
