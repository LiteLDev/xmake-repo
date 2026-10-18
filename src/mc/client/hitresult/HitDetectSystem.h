#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientHitDetectCoordinator;
class IClientInstance;
class LocalPlayer;
// clang-format on

class HitDetectSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         mPickRange;
    ::ll::TypedStorage<4, 4, float>                         mInteractRange;
    ::ll::UntypedStorage<1, 8>                              mEvaluated;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mViewHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mViewLastHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mViewLiquidHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mViewLastLiquidHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mPickHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mPickLastHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mPickLiquidHitResult;
    ::ll::TypedStorage<4, 136, ::HitResult>                 mPickLastLiquidHitResult;
    ::ll::TypedStorage<8, 8, ::ClientHitDetectCoordinator&> mEventCoordinator;
    // NOLINTEND

public:
    // prevent constructor by default
    HitDetectSystem& operator=(HitDetectSystem const&);
    HitDetectSystem(HitDetectSystem const&);
    HitDetectSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~HitDetectSystem();

    virtual void reset();

    virtual void tick();

    virtual void evaluate(::IClientInstance&, float);

    virtual void _evaluateType(::IClientInstance&, float, ::Actor&, ::LocalPlayer&, bool, ::HitResult&, ::HitResult&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HitDetectSystem(::ClientHitDetectCoordinator&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientHitDetectCoordinator&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reset();

    MCNAPI void $tick();

    MCNAPI void $evaluate(::IClientInstance&, float);

    MCNAPI void $_evaluateType(::IClientInstance&, float, ::Actor&, ::LocalPlayer&, bool, ::HitResult&, ::HitResult&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientHitDetectCoordinator;
class IClientInstance;
class LocalPlayer;
// clang-format on

class HitDetectSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         mPickRange;
    ::ll::TypedStorage<4, 4, float>                         mInteractRange;
    ::ll::TypedStorage<1, 1, bool>                          mEvaluated;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mViewHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mViewLastHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mViewLiquidHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mViewLastLiquidHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mPickHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mPickLastHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mPickLiquidHitResult;
    ::ll::TypedStorage<8, 136, ::HitResult>                 mPickLastLiquidHitResult;
    ::ll::TypedStorage<8, 8, ::ClientHitDetectCoordinator&> mEventCoordinator;
    // NOLINTEND

public:
    // prevent constructor by default
    HitDetectSystem& operator=(HitDetectSystem const&);
    HitDetectSystem(HitDetectSystem const&);
    HitDetectSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HitDetectSystem() = default;

    virtual void reset();

    virtual void tick();

    virtual void evaluate(::IClientInstance& client, float a);

    virtual void _evaluateType(
        ::IClientInstance& client,
        float              a,
        ::Actor&           cameraEntity,
        ::LocalPlayer&     player,
        bool               isPicking,
        ::HitResult&       hitResult,
        ::HitResult&       liquidHitResult
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HitDetectSystem(::ClientHitDetectCoordinator& eventCoordinator);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClientHitDetectCoordinator& eventCoordinator);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reset();

    MCAPI void $tick();

    MCAPI void $evaluate(::IClientInstance& client, float a);

    MCAPI void $_evaluateType(
        ::IClientInstance& client,
        float              a,
        ::Actor&           cameraEntity,
        ::LocalPlayer&     player,
        bool               isPicking,
        ::HitResult&       hitResult,
        ::HitResult&       liquidHitResult
    );
    // NOLINTEND
};
#else // @header-generator platform
class HitDetectSystem {};
#endif // @header-generator platform
#endif // @header-generator platform
