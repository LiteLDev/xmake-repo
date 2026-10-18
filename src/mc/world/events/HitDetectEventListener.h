#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/ClientHitDetectListener.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/phys/HitResult.h"

class HitDetectEventListener : public ::ClientHitDetectListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 136, ::HitResult> mHitResult;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HitDetectEventListener();

    virtual ::EventResult onContinuousHitResult(::HitResult&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HitDetectEventListener();

    MCNAPI ::HitResult const& getLatestHitResult() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onContinuousHitResult(::HitResult&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class HitDetectEventListener {};
#endif // @header-generator platform
