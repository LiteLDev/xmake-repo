#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/ShadowQuality.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ShadowConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1400, ::mce::framebuilder::ShadowParameters> low;
    ::ll::TypedStorage<8, 1400, ::mce::framebuilder::ShadowParameters> medium;
    ::ll::TypedStorage<8, 1400, ::mce::framebuilder::ShadowParameters> high;
    ::ll::TypedStorage<8, 1400, ::mce::framebuilder::ShadowParameters> ultra;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShadowConfiguration();

    MCNAPI ShadowConfiguration(::ShadowConfiguration const&);

    MCNAPI ::mce::framebuilder::ShadowParameters getShadowParameters(::ShadowQuality) const;

    MCNAPI ::ShadowConfiguration& operator=(::ShadowConfiguration&&);

    MCNAPI ::ShadowConfiguration& operator=(::ShadowConfiguration const&);

    MCNAPI ~ShadowConfiguration();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ShadowConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
