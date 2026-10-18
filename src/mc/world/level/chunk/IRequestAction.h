#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ServerLevel;
// clang-format on

class IRequestAction {
public:
    // IRequestAction inner types define
    enum class RequestActionType : uchar {
        FunctionAction                   = 0,
        TestAction                       = 1,
        StructureAnimationAction         = 2,
        JigsawStructurePostprocessAction = 3,
        MultiBlockDelayedPlacement       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::IRequestAction::RequestActionType> mActionType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    IRequestAction();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IRequestAction();
#else // @header-generator platform
    virtual ~IRequestAction() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::ServerLevel&, ::Dimension&) = 0;
#else // @header-generator platform
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::CompoundTag&);
#else // @header-generator platform
    virtual void serialize(::CompoundTag& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool operator==(::IRequestAction const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit IRequestAction(::IRequestAction::RequestActionType const&);

    MCNAPI ::IRequestAction::RequestActionType getActionType() const;

    MCNAPI bool operator!=(::IRequestAction const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidTag(::CompoundTag const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IRequestAction::RequestActionType const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool operator==(::IRequestAction const& action) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::CompoundTag&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $serialize(::CompoundTag& tag);
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
