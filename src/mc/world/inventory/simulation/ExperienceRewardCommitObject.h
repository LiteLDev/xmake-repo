#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class ExperienceRewardCommitObject : public ::ContainerValidationCommitObject {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mExperienceReward;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk7b9635;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExperienceRewardCommitObject& operator=(ExperienceRewardCommitObject const&);
    ExperienceRewardCommitObject(ExperienceRewardCommitObject const&);
#endif // @header-generator platform
    ExperienceRewardCommitObject();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ExperienceRewardCommitObject();
#else // @header-generator platform
    virtual ~ExperienceRewardCommitObject() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool append(::ContainerValidationCommitObject*);
#else // @header-generator platform
    virtual bool append(::ContainerValidationCommitObject* other) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canCommit(::ContainerScreenContext const&) const;
#else // @header-generator platform
    virtual bool canCommit(::ContainerScreenContext const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void commit(::ContainerScreenContext const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExperienceRewardCommitObject(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int);
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

    MCNAPI bool $canCommit(::ContainerScreenContext const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $commit(::ContainerScreenContext const&);
#else // @header-generator platform
    MCNAPI void $commit(::ContainerScreenContext const& screenContext);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
