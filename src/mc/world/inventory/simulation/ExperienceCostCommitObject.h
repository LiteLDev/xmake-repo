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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mExperienceCost;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk21fe08;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExperienceCostCommitObject& operator=(ExperienceCostCommitObject const&);
    ExperienceCostCommitObject(ExperienceCostCommitObject const&);
#endif // @header-generator platform
    ExperienceCostCommitObject();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ExperienceCostCommitObject();
#else // @header-generator platform
    virtual ~ExperienceCostCommitObject() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool append(::ContainerValidationCommitObject*);
#else // @header-generator platform
    virtual bool append(::ContainerValidationCommitObject* other) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canCommit(::ContainerScreenContext const&) const;
#else // @header-generator platform
    virtual bool canCommit(::ContainerScreenContext const& screenContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void commit(::ContainerScreenContext const& screenContext) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $append(::ContainerValidationCommitObject*);
#else // @header-generator platform
    MCNAPI bool $append(::ContainerValidationCommitObject* other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canCommit(::ContainerScreenContext const&) const;
#else // @header-generator platform
    MCNAPI bool $canCommit(::ContainerScreenContext const& screenContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $commit(::ContainerScreenContext const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $commit(::ContainerScreenContext const& screenContext);
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
