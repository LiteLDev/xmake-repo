#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/dimension/Dimension.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/dimension/DimensionIdType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on
#endif // @header-generator platform

class DimensionRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DimensionRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using size_type = ulong;
#else // @header-generator platform
    using size_type = uint64;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40> mDimensions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DimensionIdType, ::OwnerPtr<::Dimension>>> mDimensions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DimensionRegistry();
#else // @header-generator platform
    virtual ~DimensionRegistry() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DimensionRegistry();
#else // @header-generator platform
    MCAPI DimensionRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachDimension(std::function<bool(Dimension&)>);

    MCNAPI void forEachDimension(std::function<bool(const Dimension&)>) const;

    MCNAPI ::WeakRef<Dimension> getDimensionAtIndex(uint const) const;

    MCNAPI ulong getNumDimensions() const;

    MCNAPI bool isEmpty() const;

    MCNAPI ::WeakRef<Dimension> lookupById(::DimensionIdType) const;

    MCNAPI ::WeakRef<Dimension> registerDimension(::DimensionIdType, ::OwnerPtr<Dimension>);

    MCNAPI void shutdown();
#else // @header-generator platform
    MCAPI ::WeakRef<::Dimension> registerDimension(::DimensionIdType id, ::OwnerPtr<::Dimension> dimension);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
