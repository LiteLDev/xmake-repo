#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

struct GraphicsOverrideParameterPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<float, Vec3>> mKeyframes;
    ::ll::TypedStorage<4, 8, std::optional<float>>             mFloatValue;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>             mVec3Value;
    ::ll::TypedStorage<8, 24, std::string>                     mBiomeID;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>      mPlayerID;
    ::ll::TypedStorage<1, 1, ::GraphicsOverrideParameterType>  mParameterId;
    ::ll::TypedStorage<1, 1, bool>                             mResetParameter;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<float, ::Vec3>> mKeyframes;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>               mFloatValue;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>             mVec3Value;
    ::ll::TypedStorage<8, 32, ::std::string>                       mBiomeID;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>      mPlayerID;
    ::ll::TypedStorage<1, 1, ::GraphicsOverrideParameterType>      mParameterId;
    ::ll::TypedStorage<1, 1, bool>                                 mResetParameter;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GraphicsOverrideParameterPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GraphicsOverrideParameterPacketPayload(::GraphicsOverrideParameterPacketPayload const&);
#else // @header-generator platform
    MCAPI GraphicsOverrideParameterPacketPayload(
        ::GraphicsOverrideParameterType       inParamId,
        ::std::string const&                  biomeId,
        ::std::optional<::std::string> const& playerId
    );

    MCAPI GraphicsOverrideParameterPacketPayload(
        ::GraphicsOverrideParameterType       paramId,
        float                                 floatValue,
        ::std::string const&                  biomeId,
        ::std::optional<::std::string> const& playerId
    );

    MCAPI GraphicsOverrideParameterPacketPayload(
        ::GraphicsOverrideParameterType       paramId,
        ::std::unordered_map<float, ::Vec3>&& keyframes,
        ::std::string const&                  biomeId,
        ::std::optional<::std::string> const& playerId
    );

    MCAPI ~GraphicsOverrideParameterPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::GraphicsOverrideParameterPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::GraphicsOverrideParameterType       inParamId,
        ::std::string const&                  biomeId,
        ::std::optional<::std::string> const& playerId
    );

    MCAPI void* $ctor(
        ::GraphicsOverrideParameterType       paramId,
        float                                 floatValue,
        ::std::string const&                  biomeId,
        ::std::optional<::std::string> const& playerId
    );

    MCAPI void* $ctor(
        ::GraphicsOverrideParameterType       paramId,
        ::std::unordered_map<float, ::Vec3>&& keyframes,
        ::std::string const&                  biomeId,
        ::std::optional<::std::string> const& playerId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
