#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
