#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

class ClientHitDetectListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientHitDetectListener() = default;

    virtual ::EventResult onChangedHitResult(::HitResult&);

    virtual ::EventResult onContinuousHitResult(::HitResult&);

    virtual ::EventResult onChangedPickHitResult(::HitResult&);

    virtual ::EventResult onContinuousPickHitResult(::HitResult&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onChangedHitResult(::HitResult&);

    MCNAPI ::EventResult $onChangedPickHitResult(::HitResult&);

    MCNAPI ::EventResult $onContinuousPickHitResult(::HitResult&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

class ClientHitDetectListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientHitDetectListener() = default;

    virtual ::EventResult onChangedHitResult(::HitResult& hitResult);

    virtual ::EventResult onContinuousHitResult(::HitResult& hitResult);

    virtual ::EventResult onChangedPickHitResult(::HitResult& hitResult);

    virtual ::EventResult onContinuousPickHitResult(::HitResult& hitResult);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onChangedHitResult(::HitResult& hitResult);

    MCFOLD ::EventResult $onChangedPickHitResult(::HitResult& hitResult);

    MCFOLD ::EventResult $onContinuousPickHitResult(::HitResult& hitResult);
    // NOLINTEND
};
#else // @header-generator platform
class ClientHitDetectListener {};
#endif // @header-generator platform
#endif // @header-generator platform
