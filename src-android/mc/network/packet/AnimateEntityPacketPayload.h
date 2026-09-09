#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/molang/MolangVersion.h"

struct AnimateEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ActorRuntimeID>> mRuntimeIds;
    ::ll::TypedStorage<8, 24, std::string>                 mAnimation;
    ::ll::TypedStorage<8, 24, std::string>                 mNextState;
    ::ll::TypedStorage<8, 24, std::string>                 mStopExpression;
    ::ll::TypedStorage<2, 2, ::MolangVersion>              mStopExpressionVersion;
    ::ll::TypedStorage<8, 24, std::string>                 mController;
    ::ll::TypedStorage<4, 4, float>                        mBlendOutTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnimateEntityPacketPayload(::AnimateEntityPacketPayload const&);

    MCNAPI AnimateEntityPacketPayload(
        std::vector<ActorRuntimeID> const&,
        std::string const&,
        std::string const&,
        float,
        std::string const&,
        ::MolangVersion const,
        std::string const&
    );

    MCNAPI ~AnimateEntityPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AnimateEntityPacketPayload const&);

    MCNAPI void* $ctor(
        std::vector<ActorRuntimeID> const&,
        std::string const&,
        std::string const&,
        float,
        std::string const&,
        ::MolangVersion const,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
