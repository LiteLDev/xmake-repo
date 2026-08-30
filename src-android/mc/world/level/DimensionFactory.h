#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/util/OwnerPtrFactory.h"
#include "mc/world/level/DimensionFactoryArguments.h"
#include "mc/world/level/IDimensionFactory.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct DerivedDimensionArguments;
// clang-format on

class DimensionFactory : public ::IDimensionFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                             mDimensionFactory;
    ::ll::TypedStorage<8, 128, ::DimensionFactoryArguments> mArgs;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DimensionFactory();

    virtual ::OwnerPtr<Dimension> create(std::string const&) const;

    virtual void initializeDimension(::Dimension&) const;

    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& getDimensionOwnerPtrFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DimensionFactory(::DimensionFactoryArguments&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DimensionFactoryArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::OwnerPtr<Dimension> $create(std::string const&) const;

    MCNAPI void $initializeDimension(::Dimension&) const;

    MCNAPI ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& $getDimensionOwnerPtrFactory();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
