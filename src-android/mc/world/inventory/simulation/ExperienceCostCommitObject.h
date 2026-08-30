#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class ExperienceCostCommitObject : public ::ContainerValidationCommitObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mExperienceCost;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceCostCommitObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExperienceCostCommitObject();

    virtual bool append(::ContainerValidationCommitObject*);

    virtual bool canCommit(::ContainerScreenContext const&) const;

    virtual void commit(::ContainerScreenContext const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<int> tryGetCost(std::vector<std::shared_ptr<ContainerValidationCommitObject>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $append(::ContainerValidationCommitObject*);

    MCNAPI bool $canCommit(::ContainerScreenContext const&) const;

    MCNAPI void $commit(::ContainerScreenContext const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
