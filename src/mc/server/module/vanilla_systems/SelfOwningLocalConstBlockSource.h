#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/vanilla_systems/IOwnedConstBlockSource.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/LocalConstBlockSource.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
struct DimensionTypeComponent;
struct LocalConstBlockSourceFactoryComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace VanillaSystems {

class SelfOwningLocalConstBlockSource : public ::VanillaSystems::IOwnedConstBlockSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 288, ::LocalConstBlockSource>                mBlockSource;
    ::ll::TypedStorage<8, 8, ::LocalConstBlockSourceFactoryComponent&> mFactory;
    ::ll::UntypedStorage<8, 24>                                        mDimensions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 280> mUnk101401;
    ::ll::UntypedStorage<8, 8>   mUnk76a839;
    ::ll::UntypedStorage<8, 24>  mUnka0a59d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SelfOwningLocalConstBlockSource& operator=(SelfOwningLocalConstBlockSource const&);
    SelfOwningLocalConstBlockSource(SelfOwningLocalConstBlockSource const&);
    SelfOwningLocalConstBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SelfOwningLocalConstBlockSource();

    virtual ::IConstBlockSource const* updateBlockSourceForEntity(::StrictEntityContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::IConstBlockSource const* updateBlockSourceForEntity(::StrictEntityContext const& entity) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IConstBlockSource const* $updateBlockSourceForEntity(::StrictEntityContext const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::IConstBlockSource const* $updateBlockSourceForEntity(::StrictEntityContext const& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystems
