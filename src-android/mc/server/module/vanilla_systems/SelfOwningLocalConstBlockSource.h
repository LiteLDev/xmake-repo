#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/vanilla_systems/IOwnedConstBlockSource.h"
#include "mc/entity/components/LocalConstBlockSource.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IConstBlockSource;
class StrictEntityContext;
struct DimensionTypeComponent;
struct LocalConstBlockSourceFactoryComponent;
// clang-format on

namespace VanillaSystems {

class SelfOwningLocalConstBlockSource : public ::VanillaSystems::IOwnedConstBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 288, ::LocalConstBlockSource>                mBlockSource;
    ::ll::TypedStorage<8, 8, ::LocalConstBlockSourceFactoryComponent&> mFactory;
    ::ll::UntypedStorage<8, 24>                                        mDimensions;
    // NOLINTEND

public:
    // prevent constructor by default
    SelfOwningLocalConstBlockSource& operator=(SelfOwningLocalConstBlockSource const&);
    SelfOwningLocalConstBlockSource(SelfOwningLocalConstBlockSource const&);
    SelfOwningLocalConstBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelfOwningLocalConstBlockSource();

    virtual ::IConstBlockSource const* updateBlockSourceForEntity(::StrictEntityContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IConstBlockSource const* $updateBlockSourceForEntity(::StrictEntityContext const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
