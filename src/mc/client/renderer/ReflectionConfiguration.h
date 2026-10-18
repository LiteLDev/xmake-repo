#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/options/ReflectionsQuality.h"
#include "mc/deps/minecraft_renderer/framebuilder/ReflectionParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct IBLParameters; }
namespace dragon::framerenderer::modules { struct ScreenSpaceReflectionsParameters; }
namespace mce::framebuilder { struct ProbeRegenParameters; }
// clang-format on

struct ReflectionConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 144, ::mce::framebuilder::ReflectionParameters> low;
    ::ll::TypedStorage<4, 144, ::mce::framebuilder::ReflectionParameters> medium;
    ::ll::TypedStorage<4, 144, ::mce::framebuilder::ReflectionParameters> high;
    ::ll::TypedStorage<4, 144, ::mce::framebuilder::ReflectionParameters> ultra;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReflectionConfiguration();

    MCNAPI ::dragon::framerenderer::modules::IBLParameters getIBLParameters(::ReflectionsQuality) const;

    MCNAPI ::mce::framebuilder::ProbeRegenParameters getRegenParameters(::ReflectionsQuality) const;

    MCNAPI bool getScreenSpaceReflectionsEnabled(::ReflectionsQuality) const;

    MCNAPI ::dragon::framerenderer::modules::ScreenSpaceReflectionsParameters
        getScreenSpaceReflectionsParameters(::ReflectionsQuality) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindIBLParameterType(::cereal::ReflectionCtx&);

    MCNAPI static void bindReflectionParameterType(::cereal::ReflectionCtx&);

    MCNAPI static void bindRegenParameterType(::cereal::ReflectionCtx&);

    MCNAPI static void bindScreenSpaceReflectionsParameterType(::cereal::ReflectionCtx&);

    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct ReflectionConfiguration {};
#endif // @header-generator platform
