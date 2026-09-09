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
    // prevent constructor by default
    IRequestAction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRequestAction();

    virtual void execute(::ServerLevel&, ::Dimension&) = 0;

    virtual void serialize(::CompoundTag&);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $serialize(::CompoundTag&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
