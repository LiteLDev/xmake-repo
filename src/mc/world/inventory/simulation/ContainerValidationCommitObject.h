#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class ContainerValidationCommitObject {
public:
    // ContainerValidationCommitObject inner types define
    enum class Type : int {
        DropItem         = 0,
        ExperienceCost   = 1,
        ExperienceReward = 2,
        AnvilDamage      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContainerValidationCommitObject::Type> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContainerValidationCommitObject();
#else // @header-generator platform
    virtual ~ContainerValidationCommitObject() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool append(::ContainerValidationCommitObject*) = 0;
#else // @header-generator platform
    virtual bool append(::ContainerValidationCommitObject* other) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canCommit(::ContainerScreenContext const&) const = 0;
#else // @header-generator platform
    virtual bool canCommit(::ContainerScreenContext const& screenContext) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void commit(::ContainerScreenContext const&) = 0;
#else // @header-generator platform
    virtual void commit(::ContainerScreenContext const& screenContext) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static void append(
        ::std::shared_ptr<::ContainerValidationCommitObject>                 commitObject,
        ::std::vector<::std::shared_ptr<::ContainerValidationCommitObject>>& objectList
    );
#endif // @header-generator platform
    // NOLINTEND
};
