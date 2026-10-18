#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorRuntimeID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/molang/MolangVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
// clang-format on
#endif // @header-generator platform

struct AnimateEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorRuntimeID>> mRuntimeIds;
    ::ll::TypedStorage<8, 24, std::string>                 mAnimation;
    ::ll::TypedStorage<8, 24, std::string>                 mNextState;
    ::ll::TypedStorage<8, 24, std::string>                 mStopExpression;
    ::ll::TypedStorage<2, 2, ::MolangVersion>              mStopExpressionVersion;
    ::ll::TypedStorage<8, 24, std::string>                 mController;
    ::ll::TypedStorage<4, 4, float>                        mBlendOutTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorRuntimeID>> mRuntimeIds;
    ::ll::TypedStorage<8, 32, ::std::string>                   mAnimation;
    ::ll::TypedStorage<8, 32, ::std::string>                   mNextState;
    ::ll::TypedStorage<8, 32, ::std::string>                   mStopExpression;
    ::ll::TypedStorage<2, 2, ::MolangVersion>                  mStopExpressionVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                   mController;
    ::ll::TypedStorage<4, 4, float>                            mBlendOutTime;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AnimateEntityPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AnimateEntityPacketPayload(::AnimateEntityPacketPayload const&);

    MCNAPI AnimateEntityPacketPayload(
        std::vector<ActorRuntimeID> const&,
        std::string const&,
        std::string const&,
        float,
        std::string const&,
        ::MolangVersion const,
        std::string const&
#else // @header-generator platform
    MCAPI AnimateEntityPacketPayload(
        ::std::vector<::ActorRuntimeID> const& runtimeIds,
        ::std::string const&                   animation,
        ::std::string const&                   nextState,
        float                                  blendOutTime,
        ::std::string const&                   stopExpression,
        ::MolangVersion                        stopExpressionVersion,
        ::std::string const&                   controller
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AnimateEntityPacketPayload();
#else // @header-generator platform
    MCAPI ~AnimateEntityPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AnimateEntityPacketPayload const&);

    MCNAPI void* $ctor(
        std::vector<ActorRuntimeID> const&,
        std::string const&,
        std::string const&,
        float,
        std::string const&,
        ::MolangVersion const,
        std::string const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::vector<::ActorRuntimeID> const& runtimeIds,
        ::std::string const&                   animation,
        ::std::string const&                   nextState,
        float                                  blendOutTime,
        ::std::string const&                   stopExpression,
        ::MolangVersion                        stopExpressionVersion,
        ::std::string const&                   controller
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
