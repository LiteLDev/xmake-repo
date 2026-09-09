#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/DimensionIdType.h"

class DimensionRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DimensionRegistry inner types define
    using size_type = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mDimensions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DimensionRegistry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DimensionRegistry();

    MCNAPI void forEachDimension(std::function<bool(Dimension&)>);

    MCNAPI void forEachDimension(std::function<bool(const Dimension&)>) const;

    MCNAPI ::WeakRef<Dimension> getDimensionAtIndex(uint const) const;

    MCNAPI ulong getNumDimensions() const;

    MCNAPI bool isEmpty() const;

    MCNAPI ::WeakRef<Dimension> lookupById(::DimensionIdType) const;

    MCNAPI ::WeakRef<Dimension> registerDimension(::DimensionIdType, ::OwnerPtr<Dimension>);

    MCNAPI void shutdown();
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
