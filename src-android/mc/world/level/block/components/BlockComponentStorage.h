#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class BlockComponentEventSubscriber;
// clang-format on

class BlockComponentStorage {
public:
    // BlockComponentStorage inner types declare
    // clang-format off
    struct ComponentBase;
    // clang-format on

    // BlockComponentStorage inner types define
    struct ComponentBase {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ComponentBase();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                             mComponents;
    ::ll::UntypedStorage<8, 24>                                             mStatelessComponents;
    ::ll::TypedStorage<1, 1, bool>                                          mAllowModifyingComponents;
    ::ll::TypedStorage<1, 1, bool>                                          mAllowComponentReplacement;
    ::ll::TypedStorage<1, 1, bool>                                          mAllowTryGetComponentBeforeFinalization;
    ::ll::TypedStorage<8, 16, std::weak_ptr<BlockComponentEventSubscriber>> mBlockComponentEventSubscriber;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockComponentStorage();

    MCNAPI void _addStatelessComponent(::Bedrock::typeid_t<void> const);

    MCNAPI ::BlockComponentStorage::ComponentBase* _findComponentBase(::Bedrock::typeid_t<void> const) const;

    MCNAPI void allowComponentReplacement();

    MCNAPI void allowTryGetComponentBeforeFinalization();

    MCNAPI void finalizeComponents();

    MCNAPI bool modificationIsAllowed() const;

    MCNAPI void setAllowComponentReplacement(bool);

    MCNAPI void setBlockComponentEventSubscriber(std::shared_ptr<BlockComponentEventSubscriber>);

    MCNAPI ~BlockComponentStorage();
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
};
