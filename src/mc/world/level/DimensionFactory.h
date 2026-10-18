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

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ILevel;
class Scheduler;
class Dimension;

#endif // @header-generator platform
class DimensionFactory : public ::IDimensionFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                             mDimensionFactory;
    ::ll::TypedStorage<8, 128, ::DimensionFactoryArguments> mArgs;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>> mDimensionFactory;
    ::ll::TypedStorage<8, 128, ::DimensionFactoryArguments>                                  mArgs;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DimensionFactory();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DimensionFactory();
#else // @header-generator platform
    virtual ::OwnerPtr<::Dimension> create(::std::string const& dimensionName) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtr<Dimension> create(std::string const&) const;
#else // @header-generator platform
    virtual void initializeDimension(::Dimension& dimension) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& getDimensionOwnerPtrFactory() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<Dimension> $create(std::string const&) const;
#else // @header-generator platform
    MCAPI ::OwnerPtr<::Dimension> $create(::std::string const& dimensionName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeDimension(::Dimension&) const;
#else // @header-generator platform
    MCAPI void $initializeDimension(::Dimension& dimension) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& $getDimensionOwnerPtrFactory();
#else // @header-generator platform
    MCFOLD ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& $getDimensionOwnerPtrFactory();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
